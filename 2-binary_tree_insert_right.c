#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts node as the right-child
 * @parent: a pointer to the node to insert the right-child
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *BinaryNode;

	BinaryNode  = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	if (BinaryNode == NULL)
		return (NULL);


	BinaryNode->n = value;
	BinaryNode->parent = parent;
	BinaryNode->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = BinaryNode;
		BinaryNode->right = NULL;
	}

	else
	{
		parent->right->parent = BinaryNode;
		BinaryNode->right = parent->right;
		parent->right = BinaryNode;
	}

	return (BinaryNode);
}
