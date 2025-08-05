#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to node to find the uncle
 *
 * Return: pointer to uncle node or NULL (no uncle or node is NULL)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *parent; /* to store node's parent */
	binary_tree_t *uncle; /* to store uncle node */

	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* find node's parent */
	parent = node->parent;

	/* move node to node's parent */
	node = node->parent;

	/* move node to node's grandparent */
	node = node->parent;

	/* find and return node's uncle */
	if (node->left == parent)
		uncle = node->right;

	else
		uncle = node->left;

	if (uncle == NULL)
		return (NULL);
	else
		return (uncle);
}
