#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left child of other in binary tree
 * @parent: A pointer to node where node of left child is to be inserted
 * @value: value to be stored in new node
 *
 * Return: if parent is NULL or if it fails, returns NULL
 * else it returns a pointer to created node
 * If parent has existing left child, new node takes its place
 * and old left-child must be set as the left-child of new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
