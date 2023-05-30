#include "binary_trees.h"

/**
 *binary_tree_uncle - finds uncle of current node
 *@node: node whose uncle needs to be found
 *Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left != NULL && grandparent->right != NULL)
	{
		if (grandparent->left == node->parent)
			return (grandparent->right);
		else
			return (grandparent->left);
	}
	return (NULL);
}
