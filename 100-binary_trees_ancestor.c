#include "binary_trees.h"

/**
 *binary_trees_ancestor - finds closest ancestor of two nodes
 *@first: first node
 *@second: second node
 *Return: pointer to ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = (binary_tree_t *)first;
	while (ancestor != NULL)
	{
		if (binary_tree_is_descendant(second, ancestor))
			return (ancestor);
		ancestor = ancestor->parent;
	}
	return (NULL);
}
/**
 * binary_tree_is_descendant - checks if a node is a descendant of another node
 * @node: the potential descendant node
 * @ancestor: the potential ancestor node
 * Return: 1 if node is a descendant of ancestor, 0 otherwise
 */
int binary_tree_is_descendant(const binary_tree_t *node,
			      const binary_tree_t *ancestor)
{
	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		if (node == ancestor)
			return (1);

		node = node->parent;
	}

	return (0);
}
