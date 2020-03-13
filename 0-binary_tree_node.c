#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: a pointer to the new node or NULL on failure
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
