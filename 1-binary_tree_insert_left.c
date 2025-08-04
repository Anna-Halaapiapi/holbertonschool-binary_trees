#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_insert_left - inserts a node as left child of another node
 * @parent: pointer to node to insert left child in
 * @value: int value to put inside created node
 *
 * Return: pointer to new node or NULL (failure)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode; /* to store new node */
	binary_tree_t *oldleft; /* to store old left child node */

	newnode = malloc(sizeof(binary_tree_t)); /* malloc for newnode */

	if (newnode == NULL) /* check for malloc failure */
		return (NULL);

	if (parent == NULL) /* check if parent is NULL */
		return (NULL);

	newnode->n = value; /* set value in newnode */

	if (parent->left != NULL) /* if left child exists */
	{
		parent->left = oldleft; /* store old left child node */
		parent->left = newnode; /* update required pointers */
		newnode->left = oldleft;
		newnode->right = NULL;
		newnode->parent = parent;
		oldleft->parent = newnode;
	}

	else /* left child does not exist */
	{
		parent->left = newnode; /* update required pointers */
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
	}

	return (newnode); /* return new node address */
}
