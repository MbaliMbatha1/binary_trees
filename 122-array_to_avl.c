#include "binary_trees.h"

/**
 * array_to_avl - askldjh fkasjhdf lkjasdhflk aj sh dfkashdj flkas
 * @array: sakl djhfkasjdhf lkasjhd fkjashd flkasjhd fkajshdf kjas
 * @size: d asflkjdhf kasdkfjahsdlkfas kdj fhaskld fasdkjhf askjdhf kalsd
 *
 *
 *
 *
 *
 * Return: a aslkjdhf aklsjhdfjkashdf kjlashdfjashd fkasjhdf klasjhdfk ajsd
 *         NULL on dakslhjfh alskdfh klasdfh laskf sakldjf haskdjfh aslkjd
 *
 *
 *
 *
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}
