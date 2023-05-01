
#include "binary_trees.h"

/**
  *binary_tree__delete - deletes a binary tree
  *@tree: pointer to the tree
  *
  *Return: void
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		free(tree);
	}
}
