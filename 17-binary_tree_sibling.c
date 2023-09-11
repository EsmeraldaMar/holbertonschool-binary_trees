#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Sanity Checks */
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/**
	 * Checks if current node is node parent-> left
	 * if true, return node parent-> right
	 * else return node parent-> left
	*/
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

	return (NULL);
}
