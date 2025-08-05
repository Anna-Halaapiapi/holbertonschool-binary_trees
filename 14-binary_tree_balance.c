#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
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
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	}

	if (left > right) /* return the max height found */
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balfac = 0; /* store balance factor */
	int leftsub = 0; /* stores left subtree height */
	int rightsub = 0; /* stores right subtree height */

	if (tree == NULL)
		return (0);

	/* calc heights */
	leftsub = (binary_tree_height(tree->left));
	rightsub = (binary_tree_height(tree->right));

    /* calc & return balance factor of tree */
	balfac = leftsub - rightsub;

	return (balfac);
}
