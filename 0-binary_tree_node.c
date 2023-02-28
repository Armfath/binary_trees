#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = calloc(1, sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		if (parent != NULL)
		{
			if (parent->left == NULL)
			{
				parent->left = new_node;
			}
			else if (parent->right == NULL)
			{
				parent->right = new_node;
			}
			else
				free(new_node);
				return (NULL);
		}

		return (new_node);
	}
	free(new_node);
	return (NULL);
}
