#include "binary_trees.h"
/**
* binary_tree_node - creates a node in the binary tree
* @parent: pointer to the parent node of the node to create
* @value: the value to put in the new node
*
* Returns: the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);
}
