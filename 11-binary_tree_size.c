#include "binary_trees.h"

/**
 * binary_tree_size - sdf gsdfgh sdfghsdfg d
 * @tree: asdf asdfgsdfg dfgh dfg hdf
 *
 * Return: fd gh dfgh sdfgsdfg sdf
 *         0 sdf gsdfhsdfg sdfg sdf
 *
 *
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
