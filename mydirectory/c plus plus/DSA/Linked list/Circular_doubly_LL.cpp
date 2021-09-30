#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
class node
{
public:
    node *prev;
    int data;
    node *next;
};
class cdLL
{
private:
    node *head;
    int size = 0;

public:
    cdLL(int a[], int n);
    cdLL();
    ~cdLL();

    void insert(int pos, int x);
    int Delete(int pos);
    void reverse();
    int mid_term();
};

cdLL::cdLL(int a[], int n)
{
    head = new node;
    node *last = new node;
    cout << "Enter your linked list " << endl;
    head->data = a[0];
    size++;
    head->prev = 0;
    head->next = 0;
    last = head;
    for (int i = 1; i < n; i++)
    {
        size++;
        node *t = new node;
        t->data = a[i];
        t->prev = last;
        last->next = t;
        t->next = 0;
        last = t;
        t = 0;
    }
}
cdLL::cdLL()
{
    head = new node;
    node *last = new node;
    cout << "Enter your linked list " << endl;
    cin >> head->data;
    head->prev = 0;
    head->next = 0;
    last = head;
}

cdLL::~cdLL()
{
    node *p = head;
    do
    {
        node *t = new node;
        t = p;
        delete t;
        t - 0;
        p = p->next;
    } while (p != head);
    p = head = 0;
}

void cdLL::insert(int pos, int x)
{
    if (pos > size || pos < 0)
    {
        cout << "Enter valid position" << endl;
    }
    else if (pos == 0)
    {
        node *p = new node;
        p->data = x;
        p->next = head;
        head->prev->next = p;
        p->prev = head->prev;
        head->prev = p;
        head = p;
        p = 0;
    }
    else
    {
        node *p = new node;
        p = head;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        node *t = new node;
        t->data = x;
        t->next = p->next;
        t->prev = p;
        p->next->prev = t;
        p->next = t;
        t = 0;
    }
}
int cdLL::Delete(int pos)
{
    if (pos > size || pos <= 0)
    {
        cout << "Enter vlaid position" << endl;
    }
    else if (pos == 1)
    {
        node *t = new node;
        t = head;
        head->prev->next = head->next;
        head = head->next;
        delete t;
        t = 0;
    }
    else
    {
        node *p = new node;
        p = head;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        delete p;
        p = 0;
    }
}
void cdLL::reverse()
{
    node *p = new node;
    node *q = new node;
    q = head;
    p = head->next;
    do
    {
        swap(q->next, q->prev);
        q = p;
        p = p->next;
    } while (p != head->next);
}
int cdLL::mid_term()
{
    node *p = new node;
    node *q = new node;
    do
    {
        p = p->next;
        q = q->next;
        if (q)
        {
            q = q->next;
        }
        else
        {
            break;
        }
    } while (q != head);
    cout << p->data << endl;
    return p->data;
}
int main()
{
    return 0;
}