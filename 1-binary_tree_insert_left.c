#include <stdlib.h>
#include "binary_trees.h"

/**
  *binary_tree_insert_left - inserts a child node to the left
  *@parent: pointer to parent node
  *@value: data
  *Return: node created
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node;

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
