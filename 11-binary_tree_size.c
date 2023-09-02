#include "binary_trees.h"
/**
 * binary_tree_size - calculate size of root node
 * @tree: root node
 * Return: the size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += 1;

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
