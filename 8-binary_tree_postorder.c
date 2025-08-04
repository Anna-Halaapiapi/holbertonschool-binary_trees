#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_postorder - traverse binary tree using post-order
 * @tree: pointer to root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* base case */
		return;

	binary_tree_postorder(tree->left, func); /* traverse left subtree */
	binary_tree_postorder(tree->right, func); /* traverse right subtree */
	func(tree->n); /* visit root */
}
