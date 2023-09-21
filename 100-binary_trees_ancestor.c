#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *tmp;

	/* Sanity Checks */
	if (first == NULL || second == NULL)
		return (NULL);

	/* If the first and second tree are the same */
	if (first == second)
		return ((binary_tree_t *)first);

	/**
	 *  Assign temporary tree to second
	 *  Typecast to remove const
	 */
	tmp = (binary_tree_t *)second;

	while (first != NULL)
	{
		while (second != NULL)
		{
			/* Cast the return without const */
			if (first == second)
				return ((binary_tree_t *)first);
			/* Move second up the tree */
			second = second->parent;
		}
		second = tmp;
		/* Move first up the tree */
		first = first->parent;
	}
	return (NULL);
}
