#include "binary_trees.h"

/**
 * binary_tree_nodes - a sdfasd fas dfasedf asdfsadf asdf
 * @tree: s dfasdf sadfas df asdfs adfas d
 *
 * Return: s dfgasdffasdf asdf asdf sdf s
 *         0  sdfasdf asdfsadfsadfsd ads 
 *
 *
 *
 */



size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - asd fasdf sadf asdf asdfasdf asdf sa
 * @tree: sd fasdf asdf asdf sdf sd asdf s
 *
 * Return: f asdfasdfasd fas fasdf d
 *         0 sd fasdf asdfasdf sadfsf sdf 
 *
 
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}


/**
 * binary_tree_leaves - d asfdf sadf asdf sdfa sdfs adf sdf sad
 * @tree: sd fasdf sadf sdfasdfsa df sdf asdf sd sd
 *
 * Return: sd fasdf sadf asdf asdfasd sdf
 *         0  fasdfasd fasdf sadf sd
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
