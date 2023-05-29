#include "binary_trees.h"

/**
 *binary_tree_depth - function to measure depth
 *@tree: node from where depth measured
 *Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (tree == NULL)
		return (0);

	for (d = -1; tree != NULL; d++)
	{
		tree = tree->parent;
	}
	return (d);
}
