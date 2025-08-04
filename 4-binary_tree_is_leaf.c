#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to node to check
 *
 * Return: 1 (if node is leaf) or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL) /* if node is NULL */
		return (0);

	if (node->left == NULL && node->right == NULL) /* if node is leaf */
		return (1);

	else
		return (0);
}
