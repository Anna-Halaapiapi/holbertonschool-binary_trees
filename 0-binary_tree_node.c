#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node of the node to create
 * @value: int value to put inside created node
 *
 * Return: pointer to new node or NULL (failure)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t)); /* malloc for newnode */

	if (newnode == NULL) /* check for malloc failure */
		return (NULL);

	newnode->n = value; /* set value in newnode */
	newnode->parent = parent; /* update pointers */
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode); /* return new node address */
}
