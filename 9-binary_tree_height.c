#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftLeaf;
	size_t rightLeaf;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		if (tree->left || tree->right)
		{

			leftLeaf = binary_tree_height(tree->left) + 1;
			rightLeaf = binary_tree_height(tree->right) + 1;

			if (leftLeaf > rightLeaf)
				return (leftLeaf);
			else
				return (rightLeaf);

		}
	return (0);
	}
}
