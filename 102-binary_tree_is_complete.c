#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - sdjkf aksjdhf kajsdhf aks hdfasdfkh as
 * @tree: a ksajdhf kashjdf asdjhf laksj dfaskjdf lkas
 * @index: ksadjhfk jas dflkasdf kasdf askjdf asdf
 * @size: alksdj hfkajsdhf kasjhdf askdhf klasjdhf klasd
 *
 *
 *
 *
 * Return: 1 ifasdjkfh aksdjhfasjdhf aksjdhfjka
 *         0 if sk jdhfasjdhkf jashd kfasldjf laksd
 *         0 if jsdhfk asjhdfk jasdkfaskldjfhaskjdhfkasd
 *
 *
 *
 *
 *
 *
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - askdjhfjk asdfja shdkfasdfkasdj hfkas
 * @tree: kjsadlfj haskdjf haskdjhf kasdfkasdf aksdjfak sjdhf lask
 *
 *
 *
 *
 * Return: ashdf asdf kasjhd fkjahsdkf ashdfkjahsdf kas
 *         0 if jsdah flkajsdhf kasdflkjasdfkjhasdkfj ha
 *
 *
 *
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
