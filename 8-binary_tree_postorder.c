
#include "binary_trees.h"

/**
  *binary_tree_postorder - postorder traversal of binary tree
  *@tree: pointer to the binary tree
  *@func: function pointer
  *Return: void
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		 func(tree->n);

	}

}
