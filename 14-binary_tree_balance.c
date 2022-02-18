#include "binary_trees.h"
int tree_height(const binary_tree_t *tree);


/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree
* Return: 0 if tree is NULL, otherwise return balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right, count;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

left = tree_height(tree->left);
right = tree_height(tree->right);

count = left - right;
return (count);
}


/**
* tree_height - calculates tree height
* @tree: a pointer to the root node of the tree to be measured
* Return: 0 if tree is NULL, otherwise Height of the tree
*/
int tree_height(const binary_tree_t *tree)
{
int h_left, h_right;

if (tree == NULL)
return (0);

h_left = tree_height(tree->left) + 1;
h_right = tree_height(tree->right) + 1;

if (h_left > h_right)
return (h_left);
else
return (h_right);
}
