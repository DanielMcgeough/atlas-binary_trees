#include "binary_trees.h"
/**
 *binary_tree_is_root - checks if a node is the root node
 *@node: pointer to the node to check for a root
 *Return: like a bool again.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
