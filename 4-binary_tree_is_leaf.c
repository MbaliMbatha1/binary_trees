#include "binary_trees.h"

/**
 * binary_tree_is_leaf - sdfa sdf asdf adfg dfgh
 * @node: f dghdfgh dfgh dfg 
 *
 *
 *
 * Return: 1 if node is a leaf
 *         0 if not a leaf
 *         0 if node is NULL
 *
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
