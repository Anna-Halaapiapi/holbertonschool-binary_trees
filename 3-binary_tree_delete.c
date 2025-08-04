#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_delete - deletes entire tree
 * @tree: pointer to root node of tree
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL) /* base case */
		return;

	binary_tree_delete(tree->left); /* delete left subtree */
	binary_tree_delete(tree->right); /* delete right subtree */

	free(tree); /* delete root node */
}
