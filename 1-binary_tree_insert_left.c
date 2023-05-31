#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that insert a new node as the left-child of another node
 * @parent: A pointer to the node to insert at the left-child
 * @value: A value to store in the new node
 * Return: A pointer to the created node or NULL if fails or NULL if parent is NuLL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *newNode;

  if (parent == NULL)
    {
      return (NULL);
    }
  newNode = malloc(sizeof(binary_tree_t));
  
  if (newNode == NULL)
    {
      return (NULL);
    }
  newNode->n = value;
  newNode->left = parent->left;
  newNode->right = NULL;

  parent->left = newNode;

  return parwnt->left;
}
