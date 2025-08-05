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
	size_t count = 0;

/* base case */
	if (tree == NULL)
		return (0);

/* count 1 for each node with at least 1 child found */
	if (tree->left != NULL || tree->right != NULL)
		count = 1;

/* recursively check left & right subtrees */
	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);

/* return number of nodes found */
	return (count);
}
