#include "binary_trees.h"

/**
 * binary_tree_depth - sdf asfgsdfhdf ghdf g ased
 * @tree: f sgdfgsdfghdfghdfghdf ghdfghdf
 *
 * Return: dfgh dfghdfghdfgh dfg
 *         0 i hdfghdfg hdfghfd gh
 *
 *
 *
 */



size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
