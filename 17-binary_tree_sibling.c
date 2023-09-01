#include "binary_trees.h"

/**
 * binary_tree_sibling - sdf asd fasdf asdf asdf asdf s
 * @node: sd fasdf sadf sdfsa df asdfasd
 *
 * Return: f asdf asdf asdfsf asdf asd f
 *         NULL  sadf asd fsadf saf adsf sadf s
 *         NULL s dfas dfs dfas dfsd fasfd 
 *         NULL sd fasd fsd ff sdf asf sdf
 *
 *
 *
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
