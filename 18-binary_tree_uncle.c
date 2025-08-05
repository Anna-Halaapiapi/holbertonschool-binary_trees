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

	binary_tree_t *root = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);


	/* move node to node's parent */
	node = node->parent;

	/* move node to node's parent's parent */
	node = node->parent;

	/* return sibling */
	if (node->left == root)
		return (node->right);

	else
		return (node->left);
}
