#include "binary_trees.h"

/**
 * binary_tree_inorder - dfgsdf hsdfgh dfgh fdg
 * @tree:  dfgsg hdfgh fdhjdfgsdf sdf gsdf g
 * @func:  dsfgsdfg hdfhgj dfghjdfg sdfg sdfg s
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
