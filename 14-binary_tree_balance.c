#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left; /* stores left subtree height */
	size_t right; /* stores right subtree height */

	if (tree == NULL) /* base case */
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* recursively calc the height of left and right subtrees */
	else
	{
	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
	}

	return (left - right); /* return balance factor */
}
