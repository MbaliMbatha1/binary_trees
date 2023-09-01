#include "binary_trees.h"

/**
 * binary_tree_is_perfect - sad fasdf asdf asdf asdfsd
 * @tree: s dfasd fsdf sdf sadf sfdsdf sdf sdf asdfs
 *
 * Return: 1 sd fasdf asdf asdf asd
 *         0 f sdfsa dfsafsadf asdf as
 *         0 s dfasdf sadf sdfsadfasdfsd sdf
 *
 *
 *
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}


/**
 *_pow_recursion - f asdfa sdf asdf asdasdf asfsdf  sdfasdf  sadf
 *@x: s dfas dfasd fasdf asdf asd
 *@y: s dfasdf asdfsa  dfasfd asdf
 *Return: x  asdfas dfas dfas fasdf as dsdfsa 
 *
 *
 *
 
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}


/**
 * binary_tree_size -  asfdgsdfasdf sadfas dfasdfasdf as
 * @tree: sd fasd fsadf sdfa sdfsd
 *
 * Return: sad fasdf asdf asdfasdf as
 *         0 a sdf asdfa sdf asdfs das
 *
 *
 *
 */



size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}


/**
 * binary_tree_height - s dfasd fasdfasdf asdfs adfa sdf asdf
 * @tree: s dfasd fasdf asdf asdfasdf asf asd
 *
 * Return: d asdf asdf sadf asdf sadf
 *         0  sadfas dfasdf sad fasdf sad
 *
 *
 *
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
