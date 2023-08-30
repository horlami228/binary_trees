#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert to left of parent node
 * @parent: parent node
 * @value: node value
 * Return: new_node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	/*if it is empty add it*/
	else
	{
		/*
		*this will add it but make the node at left before
		* the left of new node
		*/
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	return (new_node);
}
