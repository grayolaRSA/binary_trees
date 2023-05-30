#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks whether tree is perfect
 *@tree: root node
 *Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_leaves(tree->right) == binary_tree_leaves(tree->left)) \
	     && (binary_tree_balance(tree) == 0))
	    return (1);

	return (0);
}

#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks if node is leaf
 *@node: node to be checked
 *
 *Return: 1 if node is leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);

}
/**
 *binary_tree_leaves - counts the number of leaves
 *@tree:  root node
 *Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of binary tree
 *@tree: root node
 *Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (height_left - height_right);

}

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	return (1 + MAX(left_height, right_height));
}
