#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *l;
    node *r;
    int data;
};
class tree
{
private:
    node *root;
    node *create(node *p, int data);
    void Delete(node *t);

public:
    // void display(node *p);
    // void display() { return display(root); }
    void postorder(node *p);
    void inorder(node *p);
    void preorder(node *p);
    void levelorder(node *p);
    void postorder() { postorder(root); }
    void inorder() { inorder(root); }
    void preorder() { preorder(root); }
    void levelorder() { levelorder(root); }
    void Ipreorder();
    tree();
    ~tree();
};
tree::tree()
{
    cout << "Enter the root" << endl;
    cin >> root->data;
    create(root, root->data);
}
tree::~tree()
{
    Delete(root);
}
node *tree::create(node *p, int data)
{
    node *t = new node;
    t->data = data;
    t->l = t->r = 0;
    p = t;
    int x, y;
    cout << "Enter left child of " << p->data << endl;
    cin >> x;
    if (x != -1)
    {
        create(p->l, x);
    }
    cout << "Enter right child of " << p->data << endl;
    cin >> y;
    if (y != -1)
    {
        create(p->r, y);
    }
    p = t;
    return 0;
}

void tree::Delete(node *t)
{
    if (t)
    {
        Delete(t->l);
        delete t;
        Delete(t->r);
        delete t;
    }
    else
    {
        return;
    }
}

// void tree::display(node *p)
// {
//     static int space = 0;
//     if (p)
//     {
//         space += 3;
//         display(p->l);
//         for (int i = 0; i < space; i++)
//         {
//             cout << " ";
//             node *p
//         }
//         cout << p->data << endl;
//         space -= 3;
//     }
//     else
//     {
//         return;
//     }
// }

void tree::postorder(node *p)
{
}
void tree::preorder(node *p)
{
    if (p)
    {
        cout << p->data << " ";
        preorder(p->l);
        preorder(p->r);
    }
    else
    {
        return;
    }
}
void tree::inorder(node *p)
{
}
void tree::levelorder(node *p)
{
}

void tree::Ipreorder()
{
    stack<node *> s;
    s.top() = 0;
    node *p=root;
    while (p || s.top() != 0)
    {
        if (p)
        {
            cout << p->data;
            s.top() = p;
            p = p->l;
        }
        else
        {
            p = s.top();
            s.pop();
            p = p->r;
        }
    }
}

int main()
{
    tree t;
    t.Ipreorder();
    return 0;
}
