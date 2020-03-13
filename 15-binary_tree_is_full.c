#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	const binary_tree_t *BinaryNode = tree;

	if (BinaryNode == NULL)
	{
		return (0);
	}
	if (!BinaryNode->left && !BinaryNode->right)
	{
		return (1);
	}

	if (BinaryNode->left && BinaryNode->right)
		return (binary_tree_is_full(BinaryNode->left) &&
		binary_tree_is_full(BinaryNode->right));
	return (0);
}
