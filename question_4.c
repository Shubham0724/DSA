// the following simple code sums the values of all the nodes in a balanced binary search tree. what will be runtime?

#include<stdio.h>
#include<stdlib.h>

// Define the Node structure
typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

// Function to calculate the sum of values in a binary tree
int sum(Node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    return sum(node->left) + node->value + sum(node->right);
}

int main()
{
    // Create a sample binary tree
    Node* root = malloc(sizeof(Node));
    root->value = 2;
    root->left = NULL;
    root->right = NULL;

    // Calculate the sum of values in the binary tree
    int treeSum = sum(root);
    printf("Sum of values in the binary tree: %d\n", treeSum);

    // Free the allocated memory
    free(root);

    return 0;
}



// ans - O(n)