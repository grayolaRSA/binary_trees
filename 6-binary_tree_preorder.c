#include "binary_trees.h"

/**
 *binary_tree_preorder - function to go through binary tree
 *@tree: root node of tree
 *@func: function to be called for each node
 *Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
