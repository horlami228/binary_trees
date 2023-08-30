#include "binary_trees.h"
void print_num(int n)
{
    printf("%d\n", n);
}

int main(void)
{

    binary_tree_t *root;
	size_t height;
	size_t depth;
    root = binary_tree_node(NULL, 150);
    root->left = binary_tree_node(root, 200);
    root->right = binary_tree_node(root, 919);

    root->left->left = binary_tree_node(root->left, 154);
    root->right->left = binary_tree_node(root->right, 250);
    root->right->right = binary_tree_node(root->right, 154);
    root->left->left = binary_tree_insert_left(root->left, 450);
    root->right->right = binary_tree_insert_right(root->right, 924);



    binary_tree_print(root);
    int n = binary_tree_is_leaf(root->right->right->right);
    putchar(10);
    printf("%d is %d \n", root->right->right->right->n, n);

  
    n = binary_tree_is_root(root);
    putchar(10);
    printf("%d is %d \n", root->n, n);

	printf("Pre-order\n");
	binary_tree_preorder(root, &print_num);
	putchar(10);

	binary_tree_print(root);

	printf("In-order\n");
	binary_tree_inorder(root, &print_num);

	putchar(10);

	binary_tree_print(root);

	printf("Postorder\n");
	binary_tree_postorder(root, &print_num);


	height = binary_tree_height(root->right);
	printf("%ld\n", height);

	depth = binary_tree_depth(root);
	printf("%ld\n", depth);
    return 0;
}