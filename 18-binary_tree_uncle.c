#include "binary_trees.h"

/**
 * binary_tree_uncle - sad fasdf asdf asdf asdf asdfa sdf asdfa
 * @node: sadf asdfasd fasdfasd asdfa sdf asdf s fsdf
 *
 * Return: as dfasd fasd fasdf asdf asd
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no uncle
 *
 *
 *
 *
 */



binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - asd fasdf asdf asd sdf sdf
 * @node: fsad fasd fasdfasdf asdf asdf sdf asdf asd
 *
 * Return: sd fasdf asdf sadfasdf sadf sadf ssdf
 *         NULL d fasdf asdfasdf asdf sadf dfds
 *         NULL sdf asdf sdf asdfsadf asdfsad sdf
 *         NULL isdf asf asdf asdf sdf sdf sdfsdf ssdf
 *
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
