#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
int i=1;
struct Node* makeTree(int height)
{
    struct Node* tempPtr = (struct Node *)malloc(sizeof(struct Node));
    tempPtr->data = -1;
    tempPtr->left = NULL;
    tempPtr->right = NULL;
    if(height<1)
        return tempPtr;
    tempPtr->left = makeTree(height - 1);
    tempPtr->right = makeTree(height - 1);
    tempPtr->data = i;
    i++;
    return tempPtr;
}
void findParent(struct Node* node, int val, int parent)
{
    if (node == NULL)
        return;
    if (node->data == val)
        printf("Label of the parent node : %d\n", parent);
    else 
    {
        findParent(node->left, val, node->data);
        findParent(node->right, val, node->data);
    }
}
int main()
{
    int height, i = 1;
    printf("Enter the Height of the complete binary tree: ");
    scanf("%d",&height);
    struct Node* root = makeTree(height);
    while(1)
    {
        int label;
        printf("\n\tEnter the label of the node: ");
        scanf("%d",&label);
        if(label==pow(2,height)-1)
            printf("\tLabel of the parent node : -1\n");
        else if(label < 1 || label >= pow(2, height))
            printf("\tINVALID LABEL!\n");
        else
        {
            printf("\t");
            findParent(root, label, -1);
        }
    }
    return 0;
}