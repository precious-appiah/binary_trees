#include "binary_tree.h"

/**
* binary_tree_inorder - function to traverse in order -left, root, right
* @tree: root node
* @func: function to call for each node
* Return: void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
