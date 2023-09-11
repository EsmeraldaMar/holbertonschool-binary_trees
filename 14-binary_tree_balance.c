#include "binary_trees.h"
/**
 * binary_tree_balance - meaasures the balance factor of binary tree
 * @tree: pointer to root node of the tree to measure balance factor
 * Return: if tree is NULL returns 0, else returns balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}
/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: if tree is NULL, return 0 else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l += 1 + binary_tree_height(tree->left);
		r += 1 + binary_tree_height(tree->right);
		return ((l > r) ? l : r);
	}
}
