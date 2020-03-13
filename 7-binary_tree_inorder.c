#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a tree by in-order traversal
 * @tree: The binary tree to traverse
 * @func: The function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
		return;
	if (func == NULL)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);
    func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}