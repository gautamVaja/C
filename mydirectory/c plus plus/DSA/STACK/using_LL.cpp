#include <iostream>
#include <cstring>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node<T> *next;
};
template <class T>
class stack
{
private:
    int size;
    int top = -1;
    node<T> *first;
    node<T> *last;

public:
    // stack(int a[], int n);
    stack();
    ~stack();
    bool isEmpty();
    bool isFull();
    void push(T x);
    T pop();
    T peek(int pos);
    T getTop() { return last->data; }
    void display();
    // bool para_match();
};

//applicatoins
// 1. paranthesis maching
// 2. infix to postfix
// 3. evaluation

// stack::stack(int a[], int n) : size(n)
// {
//     cout<<"inside constructor"<<endl;
//     node<T> *p=first;

// }
template <class T>
stack<T>::stack()
{
    size = 0;
    first = 0;
    last = 0;
}
template <class T>
stack<T>::~stack()
{
    node<T> *p = first;
    while (p)
    {
        node<T> *t = p;
        delete t;
        t = 0;
        p = p->next;
    }
    p = first = last = 0;
}
template <class T>
bool stack<T>::isEmpty()
{
    if (first)
    {
        return false;
    }
    return true;
}
template <class T>
bool stack<T>::isFull()
{
    node<T> *t = new node<T>;
    if (t)
    {
        delete t;
        return false;
    }
    return true;
}
template <class T>
void stack<T>::push(T x)
{
    if (isFull())
    {
        cout << "Stack is full" << endl;
    }
    node<T> *t = new node<T>;
    t->data = x;
    t->next = first;
    first = t;
    t = 0;
}
template <class T>
T stack<T>::pop()
{
    int x = -1;
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    node<T> *t = new node<T>;
    t = first;
    x = first->data;
    first = first->next;
    delete t;
    t = 0;
    return x;
}
template <class T>
T stack<T>::peek(int pos)
{
    node<T> *p = new node<T>;
    p = first;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    return p->data;
}
template <class T>
void stack<T>::display()
{
    node<T> *p = first;
    while (p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
bool para_match(stack<char> stk)
{
    char s[10];
    cout << "Enter your expression" << endl;
    gets(s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            stk.push('(');
        }
        else if (s[i] == ')')
        {
            if (stk.isEmpty())
            {
                cout << "you are wrong" << endl;
                return false;
            }
            stk.pop();
        }
    }
    if (stk.isEmpty())
    {
        cout << "Its perfect" << endl;
        return true;
    }
    cout << "you are wrong" << endl;
    return false;
}
int pre(char c)
{
    if (c == '+' || c == '-')
    {
        return 2;
    }
    else if (c == '*' || c == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char *infix_to_postfix()
{
    char *s = new char[19];
    cout << "Enter the expression" << endl;
    gets(s);
    char *f = new char[strlen(s)];
    int k = 0;
    stack<char> stk;
    stk.push('G');
    for (int i = 0; i < strlen(s); i++)
    {
        if (pre(s[i]))
        {
            if (pre(s[i]) > pre(stk.getTop()))
            {
                stk.push(s[i]);
            }
            else
            {
                f[k] = stk.pop();
                k++;
            }
        }
    }
    while (!stk.isEmpty())
    {
        f[k] = stk.pop();
        k++;
    }

    for (int i = 0; i < strlen(f); i++)
    {
        cout << f[i];
    }
    return f;
}

int main()
{
    // int a[] = {1, 2, 3, 4, 5, 6, 7};
    // stack<int> s;
    // for (int i = 0; i < 7; i++)
    // {
    //     s.push(a[i]);
    // }
    // // s.push(8);
    // // cout<<"hi"<<endl;
    // s.display();
    // // cout<<"hi"<<endl;

    stack<char> st;
    // para_match(st);
    infix_to_postfix();
    return 0;
}