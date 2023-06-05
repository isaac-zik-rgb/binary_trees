#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure
 *
 * Return: If tree is NULL return 0 Else return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent): 0);
}
