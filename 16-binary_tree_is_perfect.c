#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	/* Sanity Checks */
	if (!tree)
		return (0);

	/**
	* Used Esmerelda's code from 9-binary_tree_height.c
	* Had to hardcode it because Holberton checker
	* doesn't use makefiles to compile
	*/
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
		return (1);
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: if tree is NULL, return 0 else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
}
