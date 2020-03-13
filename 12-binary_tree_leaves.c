#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *BinarySize = tree;
	size_t LeafSize;

	if (tree == NULL)
		return (0);
	if (BinarySize->right == NULL && BinarySize->left == NULL)
		return (1);

	else
	{
		LeafSize = binary_tree_leaves(BinarySize->right) +
            binary_tree_leaves(BinarySize->left);
		return (LeafSize);
	}
}
