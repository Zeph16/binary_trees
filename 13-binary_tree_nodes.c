#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
*
* @Returns: nodes with at least one child, or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int parent = 0;

	if (tree && (tree->left != NULL || tree->right != NULL))
		parent = 1;
	if (parent)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
