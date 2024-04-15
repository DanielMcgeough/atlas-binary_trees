#include "binary_trees.h"

/**
*binary_tree_depth- measure the depth of a node
*@tree: pointer to node
*Return: returns depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
