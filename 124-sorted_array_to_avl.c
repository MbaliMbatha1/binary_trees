#include "binary_trees.h"

/**
 * sorted_array_to_avl - sdfhg kjahfdgkajhsdfkajsdh flkashdf klasdhfaklsdfh alskdjhfy
 * @array: a da sfkajshdf lashdf klasjhdfk asdfk ljashdfkasj hdfkajshd kfjhas kdfka sdjfh klas
 * @size: asdj hflkasjdhfk ajsd hfaksdjhfklasdjhfkasdjhf kasdhjf kasjdhkf ljashd kfjasdhfkalsdhf 
 *
 *
 * Return: a ask djfhlasjdhf kalsjdhf aksljd fhlkasjdf lkasdhf klasjhdf lkasjdhf kasjh dfklasdh fla
 *         NULL on askjdlhf jasd hflkasjdhflkas
 *
 *
 *
 *
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t middle;

	if (!array)
		return (NULL);
	middle = (size - 1) / 2;
	tree = binary_tree_node(NULL, array[middle]);

	sata_helper(&tree, array, -1, middle);
	sata_helper(&tree, array, middle, size);

	return (tree);
}

/**
 * sata_helper - aksl sadflhkjs dfkajsd fklasjhdf akjsdf lkasjdfh kasd fksdf
 * @root: akjsdhkfjl askdjfh aklsdj hfkasjd hflkasdjhf kasjdhf laks dfaskl dfaskldjfh asadf
 *
 * @array: a sakljdhf kajshdf kasjhdfklasjhdf jklasd hfkasjhdf kashdfasdf lkjashdfkjash dfkajshd fasdfas
 *
 * @lo: aksjdhfk asjhdflkasd hflkasjdf
 *
 * @hi: askd hfklasj hdfashdlkfhj askldf
 *
 *
 *
 *
 */
void sata_helper(avl_t **root, int *array, size_t lo, size_t hi)
{
	avl_t *new = NULL;
	size_t middle;

	if (hi - lo > 1)
	{
		middle = (hi - lo) / 2 + lo;
		new = binary_tree_node(*root, array[middle]);
		if (array[middle] > (*root)->n)
			(*root)->right = new;
		else if (array[middle] < (*root)->n)
			(*root)->left = new;
		sata_helper(&new, array, lo, middle);
		sata_helper(&new, array, middle, hi);
	}
}
