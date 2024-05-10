#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int data;
    tree *left;
    tree *right;
    tree(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};
void fun(tree *ob)
{
    int n;
    cout << "Enter a number to left of " << ob->data << " :: ";
    cin >> n;
    if (n != -1)
    {
        tree *tmp = new tree(n);
        ob->left = tmp;
        fun(tmp);
    }
    else
    {
        cout << "Enter a number to right of " << ob->data << " :: ";
        cin >> n;
        if (n != -1)
        {
            tree *tmp = new tree(n);
            ob->right = tmp;
            fun(tmp);
        }
        else
        {
            return;
        }
    }
    cout << "Enter a number to right of " << ob->data << " :: ";
    cin >> n;
    if (n != -1)
    {
        tree *tmp = new tree(n);
        ob->right = tmp;
        fun(tmp);
    }
    else
    {
        return;
    }
}
void print(tree *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    print(root->left);
    print(root->right);
}

int main()
{
    tree *ob = new tree(5);
    fun(ob);
    print(ob);
}