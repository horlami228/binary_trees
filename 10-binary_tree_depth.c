#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth of a tree
 * @tree: node to consider
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
