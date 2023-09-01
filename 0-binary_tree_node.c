#include "binary_trees.h"



/**
 * binary_tree_node - creates a binary tree node
 * @parent: dfg sdfgsdfg sdfate
 * @value: dfs gsdfgsd f gsdfode
 *
 * Return: df gsdfg dsfg sdfg sdnode
 *         NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	
	binary_tree_t *new;

	
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
	
}
