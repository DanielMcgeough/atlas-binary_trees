#include "binary_trees.h"

/**
*binary_tree_insert_left- insert a new as the left child of its parent
*@parent: parent of new left child node
*@value: value to insert in new left child
*Return: returns a pointer to new left child
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));

	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->right = NULL;

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	else
		new_left_node->left = NULL;

	parent->left = new_left_node;

	return (new_left_node);
}
