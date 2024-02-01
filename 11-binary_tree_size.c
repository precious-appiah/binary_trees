#include "binary_trees.h"

/**
* binary_tree_size- function to calculate size of tree
* @tree: tree to be sized
* Return: size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size + 1);
}
