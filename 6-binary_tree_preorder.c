#include "binary_trees.h"
/**
 * binary_tree_preorder - traversal tree in preorder way
 * @tree: tree node
 * @func: function pointer for printing the value
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, *func);
	binary_tree_preorder(tree->right, *func);
}
