#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node of tree
 *
 * Return: 0 (false or tree is NULL) or 1 (true)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* if tree is NULL, return false */
	if (tree == NULL)
		return (0);

	/* if leaf node, return true */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if node has only 1 node, return false */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* recursively check left and right subtrees */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
