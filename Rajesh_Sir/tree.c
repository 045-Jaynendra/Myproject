#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int total = 0, leaf = 0;
struct node *root = NULL;
void create(int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
int leaf_node(struct node*);
int total_node(struct node*);
int main()
{
    char ch;
    int n;
    re:
    printf("\nWould you want to create node? (Y/N) :: ");
    fflush(stdin);
    scanf("%c", &ch);
    if(ch == 'y' || ch == 'Y')
    {
        printf("> ");
        scanf("%d", &n);
        create(n);
        goto re;
    }
    if(root != NULL)
    {
        printf("\n\nData in linklist are........\n");
        printf("\nInorder :: \t");
        inorder(root);
        printf("\nPreorder :: \t");
        preorder(root);
        printf("\nPostorder :: \t");
        postorder(root);
    }
    else
        printf("No data in the linklist");
    printf("\n\nTotal no. of node :: %d", total_node(root));
    printf("\nTotal no. of leaf node :: %d", leaf_node(root));
    return 0;
}
void create(int n)
{
    int j;
    struct node *nn, *tmp = root;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = n;
    if(root == NULL)
    {
        root = nn;
    }
    else
    {
        while(tmp != NULL)
        {
            if(n < tmp->data)
            {
                if(tmp->left == NULL)
                {
                    j = 1;
                    break;
                }
                tmp = tmp->left;
            }
            if(n > tmp->data)
            {
                if(tmp->right == NULL)
                {
                    j = 2;
                    break;
                }
                tmp = tmp->right;
            }
        }
    }
    if(j == 1)
    {
        tmp->left = nn;
    }
    else if(j == 2)
    {
        tmp->right = nn;
    }
    nn->left = NULL;
    nn->right = NULL;
}
void inorder(struct node *tmp)
{
    if(tmp != NULL)
    {
        inorder(tmp->left);
        printf("%d\t",tmp->data);
        inorder(tmp->right);
    }
}
void preorder(struct node *tmp)
{
    if(tmp != NULL)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        printf("%d\t",tmp->data);
        preorder(tmp->left);
        preorder(tmp->right);
    }
}
void postorder(struct node *tmp)
{
    if(tmp != NULL)
    {
        postorder(tmp->left);
        postorder(tmp->right);
        printf("%d\t",tmp->data);
    }
}
int total_node(struct node *tmp)
{
    if(tmp != NULL)
    {
        total++;
        total_node(tmp->left);
        total_node(tmp->right);
    }
    return total;
}
int leaf_node(struct node *tmp)
{
    if(tmp != NULL)
    {
        if(tmp->left == NULL && tmp->right == NULL)
            leaf++;
        leaf_node(tmp->left);
        leaf_node(tmp->right);
    }
    return leaf;
}