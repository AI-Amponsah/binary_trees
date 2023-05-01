#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
  *binary_tree_node - creating a new node
  *@parent: pointer to parent node;
  *@value: data
  *Return: newNode created
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

	return (newnode);
}
