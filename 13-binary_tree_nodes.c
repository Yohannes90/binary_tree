#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: return 0 if tree is NULL, else node count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL || tree->left != NULL)
	{
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	}
	return (0);
}
