
#include "binary_trees.h"

/**
  *binary_tree_preorder - Preorder traversal of binary tree
  *@tree: pointer to the binary tree
  *@func: function pointer
  *Return: void
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);

	}

}
