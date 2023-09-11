#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not full or tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Sanity checks */
	if (tree == NULL)
		return (0);
	/* Logic */
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_full(tree->left) == 0)
		return (0);
	if (binary_tree_is_full(tree->right) == 0)
		return (0);
	return (1);
}
