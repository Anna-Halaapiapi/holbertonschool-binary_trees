#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_inorder - traverse binary tree in-order
 * @tree: pointer to root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* base case */
		return;

	binary_tree_inorder(tree->left, func);/* traverse left subtree */
	func(tree->n); /* visit root node */
	binary_tree_inorder(tree->right, func); /* traverse right subtree */
}
