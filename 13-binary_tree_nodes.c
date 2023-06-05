#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes that have at least one child
 * @tree: A pointer to the root node
 *
 * Return: if tree is NULL 0 else the number of nodes with 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t right;
size_t left;
if (tree == NULL)
{
return (0);
}
left = binary_tree_nodes(tree->left);
right = binary_tree_nodes(tree->right);
if (tree->left != NULL || tree->left != NULL)
{
return ((left + right)+1);
}
return (left + right);
}
