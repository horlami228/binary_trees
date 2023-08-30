#include "binary_trees.h"
/**
 * binary_tree_is_root - node is a root
 * @node: node to check
 * Return: 0 for no, 1 for yes
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
