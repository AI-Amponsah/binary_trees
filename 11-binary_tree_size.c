
#include "binary_trees.h"

/**
  *binary_tree_size - Measures the size of the tree
  *@tree: pointer to tree
  *
  *Return: Size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size =   (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

	return (size);

}
