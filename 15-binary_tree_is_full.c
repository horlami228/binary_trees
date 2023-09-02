#include "binary_trees.h"
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
