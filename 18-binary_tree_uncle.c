#include "binary_trees.h"
/**
 * binary_tree_uncle - get node uncle
 * @node: node to use
 * Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != NULL
	&& node->parent->parent->right != NULL)
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	else
		return (NULL);
}