#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right child of another node
 * @parent: A pointer to the mode to insert the right node to
 * @value: the value of the new created node
 * Return: a pointer to the new node or NULL if fails or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
new_node->left = NULL;
new_node->right = parent->right;
parent->right = new_node;

return (new_node);
}
