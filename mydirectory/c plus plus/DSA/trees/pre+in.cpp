#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *l;
    node *r;
};
int search(int a[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
}
node *create_tree(int pre[], int in[], node *p, int n)
{
    static int i = 0;
    p->data=pre[i];
    int k = search(in, pre[i], n);
    i++;
    int *a, *b;
    if (k - 1 > 1)
    {
        a = new int[k - 1];
        p->l=a;
        create_tree(pre, a, p->l, k - 1);
    }
    delete[] a;
    if (n - k - 2 > 1)
    {
        b = new int[n - k - 2];
        create_tree(pre, a, p->l, k - 1);
    }
    delete[] b;
}
int main()
{
    node *root;
    int pre[] = {4, 7, 9, 6, 3, 2, 5, 8, 1};
    int in[] = {7, 6, 9, 3, 4, 5, 8, 2, 1};
    int size = 9;
    create_tree(pre, in, root, 9);
    return 0;
}