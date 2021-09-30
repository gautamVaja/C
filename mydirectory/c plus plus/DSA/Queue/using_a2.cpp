#include <iostream>
using namespace std;
class quearr
{
private:
    int size;
    int front;
    int rare;
    int *q;

public:
    quearr(int n);
    ~quearr();
    void enque(int x);
    int deque();
    bool isEmpty();
    bool isFull();
    void display();
};
quearr::quearr(int n) : size(n)
{
    q = new int[size];
    front = rare = -1;
}
quearr::~quearr()
{
    delete q;
}
void quearr::enque(int x)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q[rare + 1] = x;
        rare++;
        size++;
    }
}
int quearr::deque()
{
    int x = -1;
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return x;
    }
    else
    {
        q[front + 1] = 0;
        front++;
    }
    return x;
}
bool quearr::isEmpty()
{
    if (front == rare)
    {
        return true;
    }
    return false;
}
bool quearr::isFull()
{
    if (rare == size - 1)
    {
        return true;
    }
    return false;
}
void quearr::display()
{
    int count=0;
    cout<<"Queue is "<<endl;
    for (int i = front + 1; i < rare + 1; i++)
    {
        cout << q[i] << endl;
        count++;
    }
    if (!count)
    {
        cout<<"Empty"<<endl;
    }
    
}
int main()
{
    quearr q(4);
    // q.enque(1);
    // q.enque(2);
    // q.enque(43);
    // q.enque(56);
    // q.display();
    // q.deque();
    // q.deque();
    // q.deque();
    // q.deque();
    // q.display();
    return 0;
}