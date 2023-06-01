#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse through a binary tree in preorder
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call on each node
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree || func == NULL)
    {
      return;
    }
  func(tree->n);

  if (tree->left != NULL)
    binary_tree_preorder(tree->left, func);

  if (tree->right != NULL)
    binary_tree_preorder(tree->right, func);
}
