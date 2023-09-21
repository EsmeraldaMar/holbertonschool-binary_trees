#include "binary_trees.h"
static void print_level(const binary_tree_t *tree, int level,
						void (*func)(int));
/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *tmp;
	int h, i;

	/* Sanity Checks */
	if (tree == NULL || func == NULL)
		return;

	h = binary_tree_height(tree);

	for (i = 1; i <= h + 1; i++)
	{
		tmp = (binary_tree_t *)tree;
		print_level(tmp, i, func);
	}
}

/**
 * print_level - prints a level of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @level: level to print
 * @func: pointer to a function to call for each node
*/

static void print_level(const binary_tree_t *tree, int level,
						void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	/* Sanity Check */
	if (tree == NULL)
		return (0);

	/* If the tree is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Get the height of the left and right subtrees */
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	/* Return the largest one */
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
