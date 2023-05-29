#include "binary_trees.h"

/**
 *binary_tree_node - creates a new node
 *@parent: pointer to parent node
 *@value: value to be inserted in new node
 *Return: pointer to created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
