#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;
};
class queue
{
private:
    node *front;
    node *rare;
    int size;

public:
    queue();
    ~queue();
    void enque(int x);
    int deque();
    void display();
    bool isfull();
    bool isempty();
};
queue::queue()
{
    front = rare = 0;
    size = 0;
}
queue::~queue()
{
    node *t;
    while (front != rare)
    {
        t = front;
        front = front->next;
        delete t;
        t = 0;
    }
    delete front;
    front = rare = 0;
}
bool queue::isempty()
{
    if (rare == 0)
    {
        return true;
    }
    return false;
}
bool queue::isfull()
{
    node *t = new node;
    if (t)
    {
        delete t;
        return false;
    }
    delete t;
    return true;
}

void queue::enque(int x)
{
    if (isfull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        size++;
        if (front == 0)
        {
            front = new node;
            front->data = x;
            front->next = 0;
            rare = front;
        }
        else
        {
            node *t = new node;
            t->data = x;
            t->next = 0;
            rare->next = t;
            rare = t;
            t = 0;
        }
    }
}
int queue::deque()
{
    int x = -1;
    if (isempty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        node *t = front;
        front = front->next;
        delete t;
        t = 0;
        size--;
    }
    return x;
}
void queue::display()
{
    cout<<"Queue is "<<endl;
    node *t = front;
    while (t)
    {
        cout << t->data << endl;
        t = t->next;
    }
}

int main()
{
    queue q;
    q.enque(657);
    q.enque(45);
    q.enque(6);
    q.enque(5);
    q.display();
    q.deque();
    q.deque();
    q.display();

    return 0;
}