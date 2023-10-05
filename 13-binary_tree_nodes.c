#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least one child, or 0 if
 * the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count_nodes++;

	count_nodes += binary_tree_nodes(tree->left);
	count_nodes += binary_tree_nodes(tree->right);
	return (count_nodes);
}