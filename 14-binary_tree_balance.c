
#include "binary_trees.h"

/**
  *binary_tree_height - Measures the height of the tree
  *@tree: pointer to tree
  *
  *Return: Height of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r,  left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	l = (left_height + 1);
	r = (right_height + 1);

	return (l - r);

}
