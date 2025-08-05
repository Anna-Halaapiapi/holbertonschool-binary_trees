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
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node to measure depth
 *
 * Return: depth of node or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0; /* store depth of node */
	binary_tree_t *currentnode; /* used to store current node */

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL) /* traverse path to root */
	{
		currentnode = tree->parent;
		tree = currentnode;
		depth = depth + 1; /* calc depth */
	}

	return (depth);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree
 *
 * Return: 0 (false or tree is NULL) or 1 (true)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0; /* store height of tree */
	size_t depth = 0; /* store depth of leaves */

	if (tree == NULL)
		return (0);

	/* check height of tree */
	height = binary_tree_height(tree);

	/* if node is leaf - check if it's depth matches height */
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_depth(tree) == height);

	/* if height and depth don't match - return false */
	if (height != depth)
		return (0);
	else
		return (1);

}
