#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *BinarySize;
	size_t TreeSize;

	BinarySize = tree;
	if (BinarySize == NULL)
		return (0);

	TreeSize = 1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right);
	return (TreeSize);
}
