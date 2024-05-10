#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idx = 0, i = -1;

struct node {
    int child_count;
    char data[20];
    struct node *childs[20];
};
 
struct node* newNode(char _data[20])
{
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->child_count = 0;
    strcpy(node->data, _data);
    for(int j=0; j<20; j++) node->childs[j] = NULL;

    return (node);
}

void insert(struct node *ptr, char data[200][20]) {
    while(i<idx) {
        i++;
        if(data[i][1] == '/') return;
        ptr->childs[ptr->child_count] = newNode(data[i]);
        insert(ptr->childs[ptr->child_count], data);
        ptr->child_count += 1;
    }
}

void levelOrder(struct node *root) {
    printf("\n\nLEVEL ORDER\n\n");
    struct node *queue[100];
    int front = 0, rear = 1;
    queue[0] = root;

    while(front != rear) {
        int m = rear-front;
        while(m--) {
            printf("%s ", queue[front]->data);
            for(int j=0; j<queue[front]->child_count; j++) queue[rear++] = queue[front]->childs[j];
            front++;
        }
        printf("\n");
    }
}

void preOrder(struct node *root) {
    if(root == NULL) return;
    
    printf("%s\n", root->data);
    for(int j=0; j<root->child_count; j++) preOrder(root->childs[j]);
}

void postOrder(struct node *root) {
    if(root == NULL) return;
    
    for(int j=0; j<root->child_count; j++) preOrder(root->childs[j]);
    printf("%s\n", root->data);
}

void inOrder(struct node *root) {
    if(root == NULL) return;
    
    preOrder(root->childs[0]);
    printf("%s\n", root->data);
    preOrder(root->childs[1]);
}

int main()
{
    char temp[20];
    struct node *root = newNode(temp);
    FILE *fp;
    char data[200][20];
    fp = fopen("assign6_data.txt", "r");
    while (fgets(data[idx++], 20, fp)) for(int j=0; j<20; j++) if(data[idx-1][j] == '\n') data[idx-1][j] = '\0';
    fclose(fp);

    insert(root, data);

    int ch = 0;
    while(ch != 5) {
        printf("\n\nPlease select the traversal to print:\n\t1. Level Order\n\t2. Pre Order\n\t3. Post Order\n\t4. In Order\n\t5. Exit\n> ");
        scanf("%d", &ch);

        if(ch == 1) levelOrder(root->childs[0]);
        else if (ch == 2) {
            printf("\n\nPRE ORDER\n\n");
            preOrder(root->childs[0]);
        } else if (ch == 3) {
            printf("\n\nPOST ORDER\n\n");
            postOrder(root->childs[0]);
        } else if (ch == 4) {
            printf("\n\nIN ORDER\n\n");
            inOrder(root->childs[0]);
        } else break;
    }
    

    return 0;
}