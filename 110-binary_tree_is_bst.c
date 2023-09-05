#include "binary_trees.h"

/**
 * binary_tree_is_bst - asjhdkfl asdfjasdkjfaskdhfjkasdf aklsjdhfklasjhd flka
 * @tree: askldjhf lkashdf asdfalsk dfkasjhd fkasjhdf kasdh faksdjhfaksjdhklasd
 *
 *
 *
 *
 * Return: 1 if asljkdhf kjashdjkfh asldfhaksdhfkashjdfk asdhf kasdkfa hsdkfasd
 *         0 askjdhfk asjhd fkasdf askdf kasj hdfkasjd hfkasdf kajhsdf ashdfla
 *
 *
 *
 *
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - asjkldhf kashdfk jasdlkfhaskdfaksdjfhalskdjhfa skjdf aks
 * @tree: asjkdhfl kjashdfk haskdlfhkasdjhflak sdjfka
 *
 * @min: asdkhf kjahsdfh askdjhf kasdhfkasdh fkasdfkasjhdlkfas dlk
 *
 * @max: as jkdhlfkajshdkf ahsdkfjhasdkfhasjkdfh aslkdhfaksdjhfaklsdh
 *
 *
 *
 * Return: 1 if askdjhf lasdf klasjdhfk asjdh fkasd fasdf klas dfaskdf sdfa
 *         0 sadjh flkasjhdf kjashdf kashdf ashdf jakshdf kjahsdkfaskdhasd jskdhf
 *
 *
 *
 *
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
	/* -1 and +1 aklsdjhfk ajsdhfl kas hdkfhasdkfj haskldfhaklsdjfh aksdf klasjhdf kasd f */
}
