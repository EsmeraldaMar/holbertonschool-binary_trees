#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right child of other in binarytree
 * @parent: A pointer to node where node of right child is to be inserted
 * @value: value to be stored in new node
 *
 * Return: if parent is NULL or if it fails, returns NULL
 * else it returns a pointer to created node
 * If parent has existing right child, new node takes its place
 * and old right-child must be set as the right-child of new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
