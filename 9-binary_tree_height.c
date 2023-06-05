#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary_tree
 * @tree: A pointer to the root node if the tree to measure
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t left_height = 0;
  size_t right_height = 0;
  if (tree)
    {
      size_t left_height = 0;
      size_t right_height = 0;
      left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
      right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
      return ((left_height > right_height) ? left_hieight : right_height);
    }
  return (0);
}
