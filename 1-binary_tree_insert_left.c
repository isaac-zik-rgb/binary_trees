#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that insert a new node
 * @parent: A pointer to the node to insert at the left-child
 * @value: A value to store in the new node
 * Return: A pointer to the created node or NULL if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
{
return (NULL);  /* Parent is NULL, return NULL */
}


new_node = malloc(sizeof(binary_tree_t));

if (new_node == NULL)
{
return (NULL);  /* Memory allocation failed, return NULL */
}

new_node->parent = parent;
new_node->n = value;
new_node->left = parent->left;
new_node->right = NULL;  /* Set the right-child of the new node to NULL */
parent->left = new_node;  /* Set the new node as the left-child */

return (new_node);
}
