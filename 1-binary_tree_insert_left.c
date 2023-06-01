#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child node to
 * @value: the value of the new created node
 * Return: A pointer to the new created node or NULL if fails or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node;
  if (parent == NULL)
    {
      return (NULL);
    }
  new_node = malloc(sizeof(binary_tree_t));

  if (new_node == NULL)
    {
      return (NULL);
    }
  new_node->n = value;
  new_node->parent = parent;
  new_node->right = NULL;
  new_node->left = parent->left;
  parent->left = new_node;

  return (new_node);
}
