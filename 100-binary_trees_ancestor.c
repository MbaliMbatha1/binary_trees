#include "binary_trees.h"

/**
 * binary_trees_ancestor - as dfasd fasdfasd fasdf asdf sadfsad
 * @first: s dfasdf asdfasdf sadfsad fasdf sad fasdf sd fasdf
 * @second: s dfasdfa sdfsdf as fsfdsdf sadfsa d fasdfsdf 
 *
 * Return: sdf asdf asdfasd fsadfs dfasdf sadf sadf s
 *         NULL f asdfsad fsdfsd fasdf sd f
 *
 *
 *
 *
 *
 *
 */




binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - s dfasdf asdfasdfas dfasdf asdf asf sadfs df sdf asd
 * @tree: sdf asdfsadf asdfasdf asdfs d fasdfs df asdfsadf asdfsadfa sdf asdf
 *
 * Return: dsadf asdfasdf sadfsa df sadf sadfsf sadfsdfasd fasdfsdf asdfsadf sa
 *         0 dfasdf sadfsadfsadf safsadf sadfsdfsdfasdf sadfsadf sdfsadfsas
 *
 *
 *
 *
 */



size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
