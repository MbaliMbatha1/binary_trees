#include "binary_trees.h"

/**
 * binary_tree_delete - sdf sad asdf asdf a
 * @tree: asdf asdfas dfas d
 *
 *
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
  
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
  
}
