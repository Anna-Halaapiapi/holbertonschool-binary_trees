#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_insert_right - inserts a node as right child of another node
 * @parent: pointer to node to insert right child in
 * @value: int value to put inside created node
 *
 * Return: pointer to new node or NULL (failure)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode; /* to store new node */
	binary_tree_t *oldright; /* to store old right child node */

	newnode = malloc(sizeof(binary_tree_t)); /* malloc for newnode */

	if (newnode == NULL) /* check for malloc failure */
		return (NULL);

	if (parent == NULL) /* check if parent is NULL */
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = value; /* set value in newnode */

	if (parent->right != NULL) /* if right child exists */
	{
		oldright = parent->right; /* store old right child node */
		parent->right = newnode; /* update required pointers */
		newnode->right = oldright;
		newnode->left = NULL;
		newnode->parent = parent;
		oldright->parent = newnode;
	}

	else /* right child does not exist */
	{
		parent->right = newnode; /* update required pointers */
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
	}

	return (newnode); /* return new node address */
}
