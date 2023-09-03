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
 * binary_tree_is_full - check if tree is a full binary
 * @tree: root node
 * Return: 0 or not full, 1 for otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		if (left == 0 || right == 0)
		{
			return (0);
		}

		else
		{
			return (1);
		}
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	else
		return (0);
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


/**
 * binary_tree_is_perfect - check the tree is a perfect binary tree
 * @tree: root node
 * Return: 1 for perfect tree, 0 for otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
