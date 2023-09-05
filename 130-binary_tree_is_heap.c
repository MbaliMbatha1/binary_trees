#include "binary_trees.h"

/**
 * binary_tree_is_heap - asjkdhf jashdklfasdjf haksjd fklasjd fkasjh dfkajshd kflasjh
 * @tree: a sjkadh fklash dfashdkfk ajsdfkasjh dfkasdkf askdf kasd fklsad fkasdh kashdj asdf
 *
 * Return: 1 if askdj fhlasj hdfkjasdh fklajs dfkjasd kfask df kasdh fkasj hdkfajshd sadf
 *         0 if asdhgf jkashdg f gaskjd
 *         0 asd gfjhas gdkhfasjhd gfa
 *
 *
 *
 *
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btih_helper(tree));
}

/**
 * btih_helper - askdjh fljshdjfk asldf asjkdfakjsd fkasj dfhkasd fasd fhsd
 *
 * @tree: a a sdkfhljas hdkfas dlkfhaskdjf haksdj fhkasd faksjd fkasjdfasd
 *
 *
 *
 * Return: 1 if askdf hkjash dlflasdf aksdjf aksd hfkasdh faasd
 *         1 if tasdf asdf asjkdfgh asdgfjkhasgd
 *         0 asdf asdhgfkjashdgfasjkhdf
 *
 *
 *
 *
 
 */
int btih_helper(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!binary_tree_is_complete(tree))
		return (0);

	if (tree->left)
		if (tree->left->n > tree->n)
			return (0);
	if (tree->right)
		if (tree->right->n > tree->n)
			return (0);

	return (btih_helper(tree->left) &&
		btih_helper(tree->right));
}

/**
 * binary_tree_is_complete -  askdjhgfjashdlkfasdf aksjdhfkajsldhfjk
 *
 * @tree: a a skjdfhgkjashdfaskjdf h askdjfh askdf kasd fkasdf lkasd
 *
 *
 * Return: 1 if a sdkjh flkjas hdjfka skdjf halks dhjfa
 *         0 if asd hflka sjhfj asdfka shdkf asdkjfhaskdf
 *         0 if a sdhg lkfa hsdj fklasdf jasdhfl asdjhf aklsd
 *
 *
 *
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
 * btic_helper - skd flajs hdkfahsdkjf aslkdjhf laskdjhf akshdj flkashd
 *
 * @tree: a ask dhfkjhasldf askjdhflak sjdhf klasdhf lkasjdhf lasdflaksjd
 *
 * @index: a skjdhflksjdhkfl ajsdhf kajshdfl kasd fkasd hflaksdhf a
 *
 * @size: a sjdhfkjahsdkf asdf hlkasd hfkasd kfashd fkasdhflkasd hfaksdfklasdf
 *
 * Return: 1 if askjdhf lkashdfh asdfjhaskdf hkasdh fkasdhf lkasdh falsk jhfask
 *         0 if sa jkh dfkas hdklf askdfkasd fakshdfk alsd hfkasdf kjhasdf kasdf
 *         0 if as djkgfkasjldhfkajsdh flkashdlf
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
 * binary_tree_size -  kuasldhflsdjhflaksjdhfasdhf kasdhfka sdfkhas dkfasld fh
 *
 * @tree: a skldfhkahsd fkashdf kashdf kasdhfkajs hdfkja sdfkashd fkalsdhf
 *
 *
 * Return: size  askjdhfkasdlf askdjhf kasdhfkl asdhfka
 *         0 if sadkj hfkjas hdfajsdjfh aksjdhfa klsdf
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
