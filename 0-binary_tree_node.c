#include "binary_trees.h"
/**
 * binary_tree_node - creates a node in the binary tree
 * @parent: parent node
 * @value: value to be stored in new node
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *BinaryNode;

	BinaryNode = malloc(sizeof(binary_tree_t));
	if (BinaryNode == NULL)
	{
		return (NULL);
	}

	BinaryNode->parent = parent;
	BinaryNode->n = value;

	BinaryNode->left = NULL;
	BinaryNode->right = NULL;
	return (BinaryNode);
}
