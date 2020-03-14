#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *BinaryNode;

	BinaryNode = node;
	if (!BinaryNode || !BinaryNode->parent)
		return (NULL);

	if (BinaryNode->parent->left && BinaryNode->parent->left != BinaryNode)
	{
		return (BinaryNode->parent->left);
	}

	if (BinaryNode->parent->right && BinaryNode->parent->right != BinaryNode)
	{
		return (BinaryNode->parent->right);
	}

	return (NULL);
}
