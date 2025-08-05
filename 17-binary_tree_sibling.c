#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to node to find the sibling
 *
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *root = node; /* save starting node in root */

	if (node == NULL || node->parent == NULL)
		return (NULL);


	/* move node to parent */
	node = node->parent;

	/* return sibling */
	if (node->left == root)
		return (node->right);

	else
		return (node->left);
}
