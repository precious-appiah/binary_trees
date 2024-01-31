#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of node to create
 * @value: the val to put into the new node
 * Return: pointer to new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!parent)
	{
		parent = new_node;
		return (parent);
	}

	new_node->parent = parent;
	return (new_node);
}
