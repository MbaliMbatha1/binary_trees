#include "binary_trees.h"

/**
 * binary_tree_rotate_left - sadjkhf askjdhf kasjhdf klajsdf lkasjdhf kfds
 * @tree: sjhdflk asjhdf kasjdhfkasdhf kashdf kasjhdf kajhsdk fjasdkf askd
 *
 *
 *
 *
 * Return: aksjdhfk jashdfk asdkfjha skdjfh aksjdf kjsadf kasjdf klasjdf lk
 *         NULL sdjh flkasjdhfk asjhdfkjashdf kasdfklas dklfasd kfjhaskd
 *
 *
 *
 *
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *parent;

	if (!tree || !tree->right)
		return (NULL);
	tmp = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = NULL;
	if (tree->left)
	{
		tmp->right = tree->left;
		tree->left->parent = tmp;
	}
	else
		tmp->right = NULL;
	tmp->parent = tree;
	tree->left = tmp;
	if (parent)
		parent->right = tree;
	tree->parent = parent;
	return (tree);
}
