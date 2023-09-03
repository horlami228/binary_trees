#include "binary_trees.h"
/**
 * binary_tree_height - get height of a tree
 * @tree: node to check
 * Return: The height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		left += 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right += 1 + binary_tree_height(tree->right);
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}


/**
 * binary_tree_balance - balanced tree
 * @tree: tree to check
 * Return: The difference in height between left and right
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	return (left - right);
}
