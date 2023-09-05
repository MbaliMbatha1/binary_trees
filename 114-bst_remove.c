#include "binary_trees.h"

/**
 * bst_remove - asd kjf hkasdjh fklasdjhf laskdjfh klasjdhf kasjdhf lkasjhdf kj as df kasjhd fk
 * @root: asd flaskjdflkasjdfh aksjdh fkasd fjash dkfjashkdfh aklsjdfh kasjhd fkjasdfkjas
 * @value: sad falk sfhawjle jlsd flk ase dfashds ad fasd 
 * Return: a a shd foawe hkasdb fkasdjfaksjdbf aksdb fzk xcbvk asjd bvaisd
 *         NULL as dfaksd hfoi ahdfhask das
 *
 *
 *
 *
 *
 *
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (!root->right)
		{
			tmp = root->left;
			free(root);
			return (tmp);
		}
		tmp = bst_min_val(root->right);
		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root);
}

/**
 * bst_min_val - ffasd faskjdhfajsdhfka sdfaksjhd fkasd fasjkd f jhasdflaskdjh fas
 * @root: a sdalf kjshdf kashdf asjk dfasjdk fhaskj djkf hsa dfaskdjf asd fasdf sadfa
 * Return: a sdf uasd fkas dg fgas jdkhfg jhasdgfjasdf kajshdf jkahsdg fjhsadf assdf
 *
 *
 *
 *
 *
 *
 *
 */
bst_t *bst_min_val(bst_t *root)
{
	bst_t *min = root;

	while (min->left)
		min = min->left;

	return (min);
}
