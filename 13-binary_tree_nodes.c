#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number of nodes found with 1 child or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL) /* base case */
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1); /* count 1 for each node with at least 1 child */

	/* return total nodes found with at least 1 child */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
