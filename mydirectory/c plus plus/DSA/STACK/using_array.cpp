#include <iostream>
using namespace std;
class stack
{
    int size;
    int top = -1;
    int *s;
public:
    stack(int _size);
    stack(int a[], int n);
    stack();
    ~stack();

    bool isEmpty();
    bool isFull();
    void push(int x);
    int pop();
    int peak(int index) { return s[index]; }
    int stack_top() { return s[top]; }
    
};

stack::stack(int _size) : size(_size), top(-1)
{
    s = new int[size];
    cout << "Enter your array of size " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> s[i];
    }
    top = size - 1;
}
stack::stack(int a[], int n) : size(n), top(-1)
{
    s = new int[size];
    for (int i = 0; i < size; i++)
    {
        s[i] = a[i];
    }
    top = size - 1;
}
stack ::stack() : size(0), top(-1)
{
}
stack::~stack()
{
    delete s;
    s = 0;
}

bool stack::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}
bool stack::isFull()
{
    if (top == size - 1)
    {
        return true;
    }
    return false;
}
void stack::push(int x)
{
    if (isFull)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        s[top] = x;
        size++;
    }
}
int stack::pop()
{
    int x = -1;
    if (isEmpty)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        x = s[top];
        top--;
        size--;
    }
    return x;
}

int main()
{
    stack st;

    return 0;
}