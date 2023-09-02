#include "binary_trees.h"
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
