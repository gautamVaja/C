#include <iostream>
using namespace std; //try by making operators
class node
{
public:
    int data;
    node *next;
};
class linked_list
{
private:
    node *first;
    node *last;
    int Real_size = 0;

public:
    linked_list(int n);
    linked_list(int a[], int n);
    linked_list();
    ~linked_list();

    void display();
    void Rdisplay();
    int size()
    {
        node *p = first;
        int size = 0;
        while (p)
        {
            size++;
            p = p->next;
        }
        return size;
    }
    // int Rcount()
    // {
    //     node *p = first;
    //     if (p)
    //     {
    //         return 1 + Rcount(p->next);
    //     }
    //     else
    //     {
    //         return 0;
    //     }
    // }
    int sum();
    // int Rsum();
    int max();
    int min();
    //int Rmax(node *p = first);
    // node *Rsearch(int key, node *p = first);
    node *search(int key);
    node *Improved_search(int key);
    node *insert(int pos, int x);
    void insertLast(int x);
    void sorted_insert(int x);
    int delet(int pos);
    int DeleteDup();
    bool isSorted();
    void reverse1(node *p, int *a, int i); //reversing links
    void reverse1(int i = 0);
    void reverse2(); //reversing nodes
    friend void reverse3(node *q, node *p, linked_list l);
    //here i have defined operator outside the class try by inside
    linked_list operator+(linked_list l2)
    {
        node *real_first1 = first;
        node *real_first2 = l2.first;
        linked_list res;
        if (isSorted() && l2.isSorted())
        { //merge them
            if (first->data == l2.first->data)
            {
                res.first = res.last = first;
                first = first->next;
                l2.first = l2.first->next;
            }
            else if (first->data < l2.first->data)
            {
                res.first = res.last = first;
                first = first->next;
            }
            else
            {
                res.first = res.last = l2.first;
                l2.first = l2.first->next;
            }
            while ()
            {
                if (first->data == l2.first->data)
                {
                    res.last->next = first;
                    res.last = first;
                    first = first->next;
                    l2.first = l2.first->next;
                }
                else if (first->data < l2.first->data)
                {
                    res.last->next = first;
                    res.last = first;
                    first = first->next;
                }
                else
                {
                    res.last->next = l2.first;
                    res.last = l2.first;
                    l2.first = l2.first->next;
                }
            }
            while (first)
            {
                res.last->next = first;
                res.last = first;
                first = first->next;
            }
            while (l2.first)
            {
                res.last->next = l2.first;
                res.last = l2.first;
                l2.first = l2.first->next;
            }
        }
        else
        { //append them
            last->next = l2.first;
            res.first = first;
            res.last = l2.last;
            return res;
        }
        first = real_first1;
        l2.first = real_first2;
    }
    bool isLoop();
    int intersec();
};

linked_list::linked_list(int a[], int n)
{
    first = new node;
    Real_size = n;
    node *p;
    first->data = a[0];
    first->next = 0;
    last = first;
    for (int i = 1; i < n; i++)
    {
        p = new node;
        p->data = a[i];
        p->next = 0;
        last->next = p;
    }
}
linked_list::linked_list(int n)
{
    first = new node;
    Real_size = n;
    node *p;
    cout << "Enter your linked list" << endl;
    cin >> first->data;
    first->next = 0;
    last = first;
    for (int i = 1; i < n; i++)
    {
        p = new node;
        cin >> p->data;
        p->next = 0;
        last->next = p;
    }
    p = 0;
}
linked_list::linked_list()
{
    first = new node;
    Real_size = 1;
    cin >> first->data;
    first->next = 0;
    last = first;
}
void linked_list::display()
{
    node *p = first;
    while (p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
// void linked_list::Rdisplay()
// {
//     node *p = first;
//     if (p)
//     {
//         cout << p->data << endl;
//         Rdisplay(p->next);
//     }
// }
int linked_list::sum()
{
    node *p = first;
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
// int linked_list::Rsum()
// {
//     node *p = first;
//     if (p)
//     {
//         return Rsum(p->next) + p->data;
//     }
//     else
//     {
//         return 0;
//     }
// }
int linked_list::max()
{
    node * p=first;
    int max = first->data;
    while (p)
    {
        if (max < p->data)
        {
            max = p->data;
        }
    }
    return max;
}
int linked_list::min()
{
    node *p = first;
    int min = first->data;
    while (p)
    {
        if (min > p->data)
        {
            min = p->data;
        }
    }
    return min;
}
// int linked_list::Rmax(node *p = first)
// {
//     int x;
//     if (p == 0)
//     {
//         return 0;
//     }
//     x = max(p->next);
//     return x > p->data ? x : p->data;
// }
// node *linked_list::Rsearch(int key, node *p = first)
// {
//     if (p->data == key || p == 0)
//     {
//         cout << "Found at " << p << endl;
//     }
//     else
//     {
//         Rsearch(key, p->next);
//     }
//     return p;
// }
node *linked_list::search(int key)
{
    node *p = first;
    while (p)
    {
        if (p->data == key)
        {
            cout << "Found at " << p << endl;
            break;
        }
        p = p->next;
    }
    return p;
}
node *linked_list::Improved_search(int key)
{
    // key will come to first
    node *p = first, *q = 0;
    while (p)
    {
        if (p->data == key)
        {
            cout << "Found at " << p << endl;
            if (p != first)
            {
                q->next = p->next;
                p->next = first;
                first = p;
            }
            break;
        }
        q = p;
        p = p->next;
    }
    return first;
}
node *linked_list::insert(int pos, int x)
{
    node *p = 0;
    if (pos == 0)
    {
        p->data = x;
        p->next = first;
        cout << p << endl;
        first = p;
    }
    else
    {
        node *t;
        t->data = x;
        for (int i = 0; i < pos && p; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        t = 0;
    }
    Real_size++;
    return first;
}
void linked_list::insertLast(int x)
{
    node *t = new node;
    t->data = x;
    t->next = 0;
    if (first == 0)
    {
        first = last = t;
    }
    else
    {
        node *p = first;
        while (p->next)
        {
            p = p->next;
        } //or we can do last->next=t; directly.
        p->next = t;
    }
    Real_size++;
}
void linked_list::sorted_insert(int x)
{
    node *t = new node;
    t->data = x;
    t->next = 0;
    if (first == 0)
    {
        first = last = t;
    }
    else
    {
        node *p = first;
        while ((p->next)->data < x)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
int linked_list::delet(int pos)
{
    int x;
    node *p, *q = 0;
    if (pos == 1)
    {
        p = first;
        x = p->data;
        first = first->next;
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            q = p;
            p = p->next;
        }
        x = p->data;
        q->next = p->next;
    }
    delete p;
    return x;
}
bool linked_list::isSorted()
{
    int x;
    node *p = first;
    // while (p && x < (p->data))
    // {
    //     x=p->data;
    //     p = p->next;
    // }
    while (p->next && (p->data) < (p->next)->data)
    {
        p = p->next;
    }
    if (!p->next)
    {
        return true;
    }
    return false;
}
int linked_list::DeleteDup()
{
    int x=-1;
    node *p = first;
    while (p)
    {
        if (p->data == (p->next)->data)
        {
            x=p->data;
            node *q = p->next;
            p->next = (p->next)->next;
            delete q;
            q = 0;
        }

        p = p->next;
    }
    return x;
}
void linked_list::reverse1(node *p, int *a, int i)
{
    if (p)
    {
        a[i] = p->data;
        reverse1(p->next, a, i++);
        p->data = a[i];
    }
}
void linked_list::reverse1(int i = 0)
{
    static int *a = new int[Real_size];
    node *p = first;
    a[i] = p->data;
    reverse1(p->next, a, i++);
    p->data = a[i];
}
void linked_list::reverse2()
{
    node *p, *q, *r;
    r = NULL;
    q = first;
    p = first->next;
    while (q)
    {
        q->next = r;
        r = q;
        q = p;
        p = p->next;
    }
    first = q;
}
void reverse3(node *q, node *p, linked_list l)
{
    if (p != 0)
    {
        reverse3(p, p->next, l);
        p->next = q;
    }
    else
    {
        l.first = q;
    }
}
bool linked_list::isLoop()
{
    node *p, *q;
    p = q = first;
    while (p && q)
    {
        if (p == q)
        {
            cout << "there is a loop" << endl;
            return true;
        }
        else
        {
            p = p->next;
            q = q->next;
            if (q)
            {
                q = q->next;
            }
        }
    }
    if (!p || !q)
    {
        cout << "no loop" << endl;
        return false;
    }
}
linked_list::~linked_list()
{
    node *p = first;
    delete first;
    while (p)
    {
        p = p->next;
        delete p;
    }
}
int linked_list::intersec()
{
    //use stack....
}

int main()
{
    linked_list l1;
    linked_list l2(9);
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    linked_list l3(a, 8);
    l3.display();
    return 0;
}