#include "binary_trees.h"

/**
 *
 * binary_tree_preorder - fdgh fghjhgjkg ijk lkghj ghj 
 * @tree: d fghjfhgj fghjk fgh j
 * @func: gf hfghkj fhgj fgsdf gsdf 
 *
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
  
	if (!tree || !func)
		return;

	func(tree->n);
  
	binary_tree_preorder(tree->left, func);
  
	binary_tree_preorder(tree->right, func);
}
