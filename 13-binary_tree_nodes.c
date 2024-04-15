#include "binary_trees.h"

/**
*binary_tree_nodes- counts the nodes that have a child
*@tree: pointer to root of tree
*Return: returns number of nodes with minis
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
