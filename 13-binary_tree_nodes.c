#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: if tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t LeftLeaf = 0;
	size_t RightLeaf = 0;
	size_t SumAndAddOneChild = 0;
	const binary_tree_t *BinaryNode;


	BinaryNode = tree;
	if (BinaryNode == NULL || (!BinaryNode->left && !BinaryNode->right))
		return (0);

	LeftLeaf = binary_tree_nodes(BinaryNode->left);
	RightLeaf = binary_tree_nodes(BinaryNode->right);

	SumAndAddOneChild = LeftLeaf + RightLeaf;

	return (SumAndAddOneChild + 1);
}
