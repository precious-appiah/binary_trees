#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree
 * using pre-order traversal method
 * @tree: pointer to root node
 * @func: pointer to function to call
 * Return: void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
    
}
