#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t right_height, left_height;
if (tree == NULL)
return (0);

right_height = binary_tree_height(tree->right);
left_height = binary_tree_height(tree->left);

if (!tree->right && !tree->left)
return (1);

return (binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left));
}


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right_height, left_height;

if (tree == NULL)
return (0);

right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
leftt_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

return (right_height > left_height ? right_height : left_height);
}