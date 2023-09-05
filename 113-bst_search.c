#include "binary_trees.h"

/**
 * bst_search - aks jdhfkashd kfasdf hkasjdhf kasdhf kasdhf ksadhf askdhf kasd
 * @tree: dk faskjdf hlasd asdhf kasdf kasdfkasjdhfksjahd fsd fksajdhf kasjdfs
 * @value: sd fkjas hdfkas dfasdf sadfksaj dfkasd fkashd fasjhdf klasdf kasdhf asd
 * Return: sdjf hklasdkfl asdhjfaskdj hfaskdjfh klasjdfhkasdhfkasjdh fkasdhf klasdjhf lkasjd
 *         NULL if  skadjhflkashd kflasdjf aks
 *         NULL if sd khfajshd fksad fjasdjf lkas
 *
 *
 *
 *
 *
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}
