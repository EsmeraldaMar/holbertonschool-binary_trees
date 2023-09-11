#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or NULL if no uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Sanity checks */
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	/* If node's parent is left child of grandparent, return right child */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
