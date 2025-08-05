#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */
#include <stddef.h> /* for size_t */

/**
 * binary_tree_height - find depth of a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: deoth of tree or 0 if tree is NULL
 */

int depth(const binary_tree_t *tree)
{
	int left = 0; /* store depth of left subtree */
	int right = 0; /* store depth of right subtree */

	if (tree == NULL)
		return (0);

	left = depth(tree->left); /* check depth left subtree */
	right = depth(tree->right); /* check depth right subtree */

	/* return largest depth found */
	if (left > right)
		return (left + 1);

	else
		return (right + 1);
}

/**
 * is_perf_recur - recursive function to check if tree is perfect or not
 * @tree: pointer to node to measure depth
 * @d: depth
 * Return: depth of node or 0 if tree is NULL
 */

int is_perf_recur(const binary_tree_t *tree, int d)
{

	if (tree == NULL)
		return (1);

	/* if node is leaf, check if it is at depth d */
	if (tree->left == NULL && tree->right == NULL)
		return (d == 1);

	/* if internal node doesn't have 2 children, return false */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* check left and right subtree */
	return (is_perf_recur(tree->left, d - 1)
		&& is_perf_recur(tree->right, d - 1));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree
 *
 * Return: 0 (false or tree is NULL) or 1 (true)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* find depth of tree */
	int d = binary_tree_height(tree);

	return (is_perf_recur(tree, d));
}
