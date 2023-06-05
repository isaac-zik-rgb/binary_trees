#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves in a tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: if tree is NULL return 0 else the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left;
 size_t right;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)

return (1);
left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);

return ((left + right));
}
