#include "binary_trees.h"
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: tree at hand
 * Return: 0, or measure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t LeftLeaf = 0;
	size_t RightLeaf = 0;
	size_t SubTotal = 0;
	const binary_tree_t *BinaryNode = tree;

	if (tree == NULL || (!BinaryNode->left && !BinaryNode->right))
		return (0);

	else if (!BinaryNode->left || !BinaryNode->right)
		return (-1);
	else
		return (2);


	LeftLeaf = binary_tree_balance(BinaryNode->left);
	RightLeaf = binary_tree_balance(BinaryNode->right);

	return (LeftLeaf - RightLeaf);
}
