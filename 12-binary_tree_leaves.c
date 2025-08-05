#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL) /* base case */
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1); /* count 1 for each leaf found */

/* return total leaves found on left & right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
