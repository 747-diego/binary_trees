#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: If tree or func is NULL, do nothing
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *BinaryNode;
	size_t TreeDepth;

	if (tree == NULL)
		return (0);

	TreeDepth = 0;
	BinaryNode = tree;
	while (BinaryNode->parent)
	{
		BinaryNode = BinaryNode->parent;
		TreeDepth += 1;
	}
	return (TreeDepth);
}
