#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left; /* stores left subtree height */
	size_t right; /* stores right subtree height */

	if (tree == NULL) /* base case */
		return (0);

/* recursively calc the height of left and right subtrees */
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right) /* return the max height found */
		return (left + 1);
	else
		return (right + 1);
}
