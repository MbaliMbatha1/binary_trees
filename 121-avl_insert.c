#include "binary_trees.h"

/**
 * bst_insert - asdf hjlk asjdf kasldkf jalskdjf lasdjk flaskdjf laskd
 * @tree: a asdkjfh kajsdhf kalsjhdf askdjfh alskdjfaskjd fhaskljdf hasd
 * @value: as kdhgfkasjdhjfkasd hfkajshdfkas djfalskdfj haskdjfaksdjhf lk
 * Return: A sadf haskdj hfkjasdlkfhas kdfklasdjhfl sdajhflkasdh 
 *         NULL on as kdfhkjasd hfkas
 *
 *
 *
 *
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = *tree;
	bst_t *second = NULL;
	bst_t *new = binary_tree_node(NULL, value);

	if (*tree == NULL)
		*tree = new;

	while (tmp)
	{
		second = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	if (second == NULL)
		second = new;
	else if (value < second->n)
	{
		second->left = new;
		new->parent = second;
	}
	else
	{
		second->right = new;
		new->parent = second;
	}

	return (new);
}

/**
 * avl_insert -  akjsdhlf ahskdjfha lksjdfh jasdhf asd fhajksdhf kasjhd
 * @tree: a askjldh fklajsh dflkashdfjkas dhfkasjdhf kasdjhf kasdjfh kasjhd
 * @value: kjlads h fasj h dklfasjhdfklasjhdfkasdhfklasjdhf kasjhdf askd
 *
 *
 *
 *
 * Return: a as dflkasjdlf jasldkfjalsdkjf aslkdjfl as;kdj flasd
 *         NULL on asldkhfl kasjdhfkljash dfklasjhd
 *
 *
 *
 *
 *
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	int balance = 0;
	avl_t *node = bst_insert(tree, value);

	balance = binary_tree_balance(*tree);

	if (balance > 1 && value < node->left->n)
		return (binary_tree_rotate_right(node));
	if (balance < -1 && value > node->right->n)
		return (binary_tree_rotate_left(node));
	if (balance > 1 && value > node->left->n)
	{
		node->left = binary_tree_rotate_left(node->left);
		return (binary_tree_rotate_right(node));
	}
	if (balance < -1 && value < node->right->n)
	{
		node->right = binary_tree_rotate_right(node->right);
		return (binary_tree_rotate_left(node));
	}

	return (node);
}
