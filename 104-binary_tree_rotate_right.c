#include "binary_trees.h"

/**
 * binary_tree_rotate_right - sajkdhf kasjhd faklsjdhf laksjdf aksjhdf akjs
 * @tree: sdkjlf hasjdhf kasjdhf kajshdf kjashdf lkasdf askjdhflkasdfsjhd fksjdf
 *
 *
 *
 *
 *
 * Return: ksdhlfasdjhf laksdjhfkasjdf aksjdf ksjd fk asd kfasdjf aksdjh
 *         NULL sdfahlksdjfh kasdfk asdfas dkjf hlkasdhfj ashdfkasdfklasdf
 *
 *
 *
 *
 *
 *
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *parent;

	if (!tree || !tree->left)
		return (NULL);
	tmp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;
	if (tree->right)
	{
		tmp->left = tree->right;
		tree->right->parent = tmp;
	}
	else
		tmp->left = NULL;
	tmp->parent = tree;
	tree->right = tmp;
	if (parent)
		parent->left = tree;
	tree->parent = parent;
	return (tree);
}
