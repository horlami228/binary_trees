#include "binary_trees.h"
/**
 * binary_tree_leaves - leaves in the tree
 * @tree: the tree node
 * Return: Return total
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		total += 1;
	}

	if (tree->left != NULL)
		total += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		total += binary_tree_leaves(tree->right);
	return (total);
}
