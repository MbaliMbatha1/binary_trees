#include "binary_trees.h"

/**
 * array_to_bst - sdkjhlfajsdfkas dkflja shdkf  askdfaskldf ksajdfkasjdhfklasdhfk
 * @array: sadkf haksdhfkasdhlkf asjd fklasdfk jasdkfj askdhfkasldhfkasjdf askdjfk asd
 * @size: asdklfh kasjdfkasjdhf kasd fksadfjasdjkfhaskdf kasldfkasdf kasd fksajdhf klasdjhfas
 * Return: aksjd hfkasjdhf kasdhf kasjdhf k asjd hfkasdj hfkasd fksjad fkasjd faksdk
 *         NULL sd fajskdfh lashdfkjasdklf haskd jfhask
 *
 *
 *
 *
 *
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
