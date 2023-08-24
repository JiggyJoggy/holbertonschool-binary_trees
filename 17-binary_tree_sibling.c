#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling node
 * @node: pointer node
 *
 * Return: NULL if failed, else return node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
	return (NULL);
}
