#include "binary_trees.h"

/**
 * binary_tree_is_avl - sadfhak sjd hfkajsdlf asdh flkasdhf klasjhdflkasjdhf kjas
 * @tree: sdjkafh aksj hdfkasjdfalskdfhlkasdjhfaklsjdhfklasdfkasdh flkas
 *
 *
 *
 *
 *
 *
 * Return: 1 alsjkdfhlkasdflkasdfalksdjhfklajsdhfaksj hdfa
 *         0 asdkjfhkajsdf aksjdfhlkasjdhf asjkdhf klasjdf
 *
 *
 *
 *
 *
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (btia_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btia_helper -asljkdhflk ajshdfkjas dlfkhasdklfjhaskdhf alskdhf asdf
 * @tree: la sjdlk jfalsd jkflasj dlfkasjd flkasjd flasjd fkjasdl jasdfhkjf kjashdlfkj asd
 * @min: a ksdjhfkjas dhfklashdf klajshdflk sdfas asdk
 * @max: a klsdjhflkajsh dkfashlkdfjh aslkdjhflaksdf
 *
 *
 *
 *
 *
 *
 * Return: 1 askjldhf kajs hdflasdhfl kjasdhf lkajshdf
 *         0 asd falsjkd hflkjas dlfkjahsd kljfads
 *
 *
 *
 */
int btia_helper(const binary_tree_t *tree, int min, int max)
{
	int path_l, path_r;

	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	path_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	path_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(path_l - path_r) > 1)
		return (0);

	return (btia_helper(tree->left, min, tree->n - 1) &&
		btia_helper(tree->right, tree->n + 1, max));
	/* This is part of the BST check logic */
}

/**
 * binary_tree_height - as df jkasdlhkfasjdhflkajshdfkashdf
 * @tree: a klsdhfajlskdhf lkasdhf lkasjdh fkasdhflaks djhfalksdjhf lka
 *
 * Return: asdk jfhklasdhflk ajsdhf klasdhf lkasd
 *         0 if akl fsdjhfkjashdflk asdfjasldkfhaslk
 *
 *
 *
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
