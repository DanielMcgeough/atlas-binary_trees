#include "binary_trees.h"

/**
*binary_tree_inorder- traverses tree inorder
*@tree: pointer to tree to traverse
*@func: func to check each node
*/

void binary_tree_inorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
