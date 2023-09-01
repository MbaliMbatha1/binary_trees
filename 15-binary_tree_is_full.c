#include "binary_trees.h"

/**
 * binary_tree_is_full - s dfasd fasd fasd fasdfasd ff
 * @tree:  asdfasd fasdf asdf sadf asdf asdf asdf asd
 *
 * Return: 1 sd fasd fsadf sdf
 *         0 ds fasdfas df asdf as
 *         0 sd fasd fasdf sadf 
 *
 *
 *
 *
 */



int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
