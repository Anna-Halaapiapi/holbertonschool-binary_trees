#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node to measure depth
 *
 * Return: depth of node or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0; /* store depth of node */
	binary_tree_t *currentnode; /* used to store current node */

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL) /* traverse path to root */
	{
		currentnode = tree->parent;
		tree = currentnode;
		depth = depth + 1; /* calc depth */
	}

	return (depth);
}
