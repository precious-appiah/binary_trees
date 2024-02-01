#include "binary_trees.h"
/**
* binary_tree_depth- func to find the depth of a tree
* @tree: tree to be checked
* Return: number
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (!(tree->parent))
		return (0);

	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
