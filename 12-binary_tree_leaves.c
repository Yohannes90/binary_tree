#include "binary_trees.h"

/**
 * binary_tree_leaves - checks if a node is a leaf
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL, else number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
