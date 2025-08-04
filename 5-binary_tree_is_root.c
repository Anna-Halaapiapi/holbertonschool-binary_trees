#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_is_root - checks if node is a root
 * @node: pointer to node to check
 *
 * Return: 1 (if node is root) or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL) /* if node is NULL */
		return (0);

	if (node->parent == NULL) /* if node is root */
		return (1);

	else
		return (0);
}
