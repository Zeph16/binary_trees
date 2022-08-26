#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: a pointer to the root node of the tree to count the number of leaves
*
* Return: the number of leaves, or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leaves += 1;
	if (tree->right != NULL)
		leaves += 1;
	return (leaves);
	
	

}
