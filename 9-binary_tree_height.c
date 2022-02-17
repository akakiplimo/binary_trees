#include "binary_trees.h"


/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height
* Return: 0 If tree is NULL, otherwise height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;

if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

/*IF... ELSE shortform in C*/
return ((left > right ? left : right)+1);
}
