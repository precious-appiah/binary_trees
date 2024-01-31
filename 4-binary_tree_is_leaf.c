#include "binary_trees.h"

/**
* binary_tree_is_leaf- function to check leaf node 
* @node: node to check
* Return: integer
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node->left == NULL && node->right == NULL)
        return (1);
    return (0);
}
