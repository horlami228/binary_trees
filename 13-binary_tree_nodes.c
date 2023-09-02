#include "binary_trees.h"
/**
 * binary_tree_nodes - nodes with at least 1 childeren
 * @tree: tree node
 * Return: Total nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (total);
	}

	total += 1;

	if (tree->left != NULL)
		total += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		total += binary_tree_nodes(tree->right);
	return (total);
}
