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

  newNode = malloc(sizeof(binary_tree_t));
  
  if (newNode == NULL || parent == NULL)
    return (NULL);

  /* chech if the parent->left already has a node and if true move it to left*/
  newNode->parent = parent;
  newNode->n = value;
  newNode->right = NULL;

  if (parent->left != NULL)
    {
      newNode->left = parent->left;
    }
  parent->left = newNode;

  return parent->left;
}
