#include "binary_trees.h"
/**
 * binary_tree_balance - balanced tree
 * @tree: tree to check
 * Return: The difference in height between left and right
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = -1, right = -1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right = binary_tree_height(tree->right);
	return (left - right);
}
