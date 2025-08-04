#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_preorder - traverses binary tree using pre-order
 * @tree: pointer to root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* base case */
		return;

	func(tree->n); /* visit root node */

	binary_tree_preorder(tree->left, func); /* traverse left subtree */
	binary_tree_preorder(tree->right, func); /* traverse right subtree */
}
