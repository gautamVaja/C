#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class cirLL
{
private:
    node *head = new node;
    int size;

public:
    node *getHead() { return head; }
    cirLL();
    cirLL(int n);
    cirLL(int a[], int n);
    ~cirLL();
    //member functions
    void insert(int pos, int x);
    int Delete(int pos);
    void display();
    int sizeOF();
    void inLast(int x);
    friend void reverse(node *p, node *q, cirLL *l);
};

cirLL::cirLL()
{
    head = 0;
}
cirLL::cirLL(int n)
{
    node *t, *last;
    last = new node;
    cout << "Enter your linked list" << endl;
    cin >> head->data;
    size++;
    head->next = 0;
    last = head;
    for (int i = 0; i < n - 1; i++)
    {
        t = new node;
        cin >> t->data;
        t->next = 0;
        last->next = t;
        last = t;
        size++;
    }
    last->next = head;
    last = t = 0;
}
cirLL::cirLL(int a[], int n)
{
    node *t, *last;
    last = new node;
    head->data = a[0];
    size++;
    head->next = 0;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = 0;
        last->next = t;
        last = t;
        size++;
    }
    last->next = head;
    last = t = 0;
}
cirLL::~cirLL()
{
    if (head)
    {
        node *p = head;
        do
        {
            p = p->next;
        } while (p->next != head);
        p->next = 0;
        do
        {
            node *t = head;
            head = head->next;
            delete t;
            t = 0;
        } while (head->next);
        delete head;
        head = 0;
    }
}

void cirLL::insert(int pos, int x)
{
    if (pos > size || pos < 0)
    {
        cout << "Enter valid position" << endl;
    }

    else if (pos == 0)
    {
        if (head == 0)
        {
            head->data = x;
            head->next = 0;
        }
        node *t = new node;
        t->data = x;
        t->next = head;
        node *p = head;
        for (int i = 0; i < size - 1; i++)
        {
            p = p->next;
        }
        p->next = t;
        head = t;
        size++;
    }
    else
    {
        node *p = head;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        node *t = new node;
        t->data = x;
        t->next = p->next;
        p->next = t;
        size++;
    }
    cout << "Inserted LL" << endl;
    display();
}
int cirLL::Delete(int pos)
{
    int x = -1;
    if (pos > size || pos <= 0)
    {
        cout << "Enter valid position" << endl;
    }
    else if (pos == 0)
    {
        if (head)
        {
            node *p = head;
            for (int i = 0; i < size - 1; i++)
            {
                p = p->next;
            }
            p->next = head->next;
            node *t = head;
            x = t->data;
            head = head->next;
            delete t;
        }
        size--;
    }
    else
    {
        node *p = head;
        for (int i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        node *t = p->next;
        x = t->data;
        p->next = p->next->next;
        delete t;
        p = t = 0;
    }
    cout << "Deleted LL" << endl;
    display();
    return x;
}
int cirLL::sizeOF()
{
    size = 0;
    node *p = new node;
    p = head;
    do
    {
        size++;
        p = p->next;
    } while (p != head);
    p = 0;
    cout << "size is " << size << endl;
    return size;
}
void cirLL::display()
{
    node *p = new node;
    p = head;
    do
    {
        cout << p->data << endl;
        p = p->next;
    } while (p != head);
    p = 0;
}
void reverse(node *p, node *q, cirLL *l)
{
    static int count;
    if (count <= 0 || p != l->head)
    {
        count++;
        reverse(p->next, p, l);
        p->next = q;
    }
    else
    {
        p->next = q;
        l->head = q;
        // cout<<l->head->data<<endl;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cirLL cl(a, 5);
    cl.display();
    cl.sizeOF();
    cl.insert(0, 7);
    cl.sizeOF();
    reverse(cl.getHead()->next, cl.getHead(), &cl);
    // cout << cl.getHead()->data << endl;
    cout << "reversed LL" << endl;
    cl.display();
    return 0;
}