#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node, or\
 * NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent
	 == NULL)
	{
		return (NULL);
	}
	new_node = calloc(1, sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		if (parent->right == NULL)
		{
			parent->right = new_node;
			return (new_node);
		}
		else
		{
			new_node->right = parent->right;
			new_node->right->parent = new_node;
			parent->right = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
