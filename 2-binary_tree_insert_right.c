#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts new node under parent to right
 * @parent: parent node
 * @value: value
 *
 * Return: NULL if failed, else return new
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}
