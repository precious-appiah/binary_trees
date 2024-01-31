#include "binary_trees.h"

/**
* binary_tree_postorder - function to do post order traversal;
* left, right, node
* @tree: pointer to the root node
* @func: function to call for a node
* Return: void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
