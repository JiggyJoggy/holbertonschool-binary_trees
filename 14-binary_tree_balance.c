#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - blance factor of a binary tree
 * @tree: binary tree
 *
 * Return: 0 if failed, else return the balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int balance = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	balance = left - right;

	return (balance);
}
