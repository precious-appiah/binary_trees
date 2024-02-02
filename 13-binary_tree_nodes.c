#include "binary_trees.h"
/**
 * binary_tree_nodes- function to count parent nodes
 * @tree: tree to be used
 * Return: size_t
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count + 1);
}
