#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts node as the left-child
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *BinaryNode;

	BinaryNode  = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	if (BinaryNode == NULL)
		return (NULL);


	BinaryNode->n = value;
	BinaryNode->parent = parent;
	BinaryNode->right = NULL;
	if (parent->left == NULL)
	{
		parent->left->parent = BinaryNode;
		BinaryNode->left = parent->left;
		parent->left = BinaryNode;

	}

	else
	{
		parent->left = BinaryNode;
		BinaryNode->left = NULL;
	}

	return (BinaryNode);
}
