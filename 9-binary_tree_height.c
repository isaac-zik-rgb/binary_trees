#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary_tree
 * @tree: A pointer to the root node if the tree to measure
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t left_height;
  size_t right_height;
  if (tree == NULL)
    {
      return (0);
    }
  left_height = binary_tree_height(tree->left);
  right_height = binary_tree_height(tree->right);

  return (left_height > right_height ? left_height: right_height) + 1;
}
