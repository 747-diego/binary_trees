#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that check if a given node is root
 * @node: is a pointer to the node to check
 * Return: 1 if node is a root otherwise 0, node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);

	return (0);
}
