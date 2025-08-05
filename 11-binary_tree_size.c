#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: size of tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left; /* stores nodes in left subtree */
	size_t right; /* sotre nodes in right subtree */

	if (tree == NULL) /* base case */
		return (0);

	left = binary_tree_size(tree->left); /* find size of left subtree */
	right = binary_tree_size(tree->right); /* find size of right subtree */

	return (left + right + 1); /* return size of subtrees + 1 for root */
}
