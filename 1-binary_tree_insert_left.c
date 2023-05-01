
#include "binary_trees.h"

/**
  *binary_tree_insert_left - inserts a child node to the left
  *@parent: pointer to parent node
  *@value: data
  *Return: node created
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);


	ptr = binary_tree_node(parent, value);

	if (ptr == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		ptr->left = parent->left;
		parent->left->parent = ptr;
	}
	parent->left = ptr;

	return (ptr);
}
