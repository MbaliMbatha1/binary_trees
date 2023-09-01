#include "binary_trees.h"

/**
 * binary_tree_leaves - sdf asdfa sdfa sdf asdfasdf asdf 
 * @tree: asdfasdfasdf asdf asdfasdf asdf asdf asdf 
 *
 * Return: sd fasdf asdf asdfsdfasdf dsfasd d
 *         0 ifdasd fasdfasdfasdfasdf asdf asdf asd
 *
 *
 *
 */



size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
