#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a new node as right child
 *@parent: pointer to parent node
 *@value: value to be inserted in new node
 *Return: pointer to created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
		new_node->right = parent->right;

	parent->right = new_node;

	return (new_node);
}
