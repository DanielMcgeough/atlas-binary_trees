#include "binary_trees.h"

/**
*binary_tree_size- measures size of a tree
*@tree: pointer to root node of binary tree
*Return: returns the size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}