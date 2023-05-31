#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - a function that create a binary_tree node
 * @parent: the parent pointer of the node
 * @value: the vale of the node
 * Return: a pointer to the created bimary_tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
  binary_tree *newNode;
  newNode = malloc(sizeof(binary_tree_t));
  if(newNode == NULL)
    return;
  newNode = parent;
  newNode->n = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}
