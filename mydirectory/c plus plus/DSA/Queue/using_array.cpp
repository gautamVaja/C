#include <iostream>
using namespace std;
class QueArr
{
private:
    int size;
    int *front;
    int rare;
    int fi=0;

public:
    QueArr(int a[], int n);
    QueArr(int n);
    ~QueArr();
    void enqueue(int x);
    int deque();
    bool isEmpty();
    bool isFull();
    void display();
};
QueArr::QueArr(int a[], int n)
{
    front = a;
    fi = 0;
    size = n;
    rare = n - 1;
}
QueArr::QueArr(int n)
{
    int *front = new int[n];
    fi = 0;
    rare = 0;
    cout << "Want to enter Queue?" << endl;
    string a;
    cin >> a;
    if (a == "yes")
    {
        size = n;
        for (int i = 0; i < n; i++)
        {
            cin >> front[i];
            fi++;
        }
        rare = size - 1;
    }
    else
    {
        size = 0;
    }
}
QueArr::~QueArr()
{
    delete front;
    front = 0;
    size = rare = 0;
}
bool QueArr::isEmpty()
{
    if (front == &rare)
    {
        return true;
    }
    return false;
}
bool QueArr::isFull()
{
    if (rare == size - 1)
    {
        return true;
    }
    return false;
}
void QueArr::enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
    }
    front[rare + 1] = x;
    rare++;
    size++;
}
int QueArr::deque()
{
    int x = -1;
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return x;
    }
    x = front[fi];
    front[fi] = 0;
    fi++;
    front++;
    cout<<"Deleted "<<x<<endl;
    return x;
}
void QueArr::display()
{
    cout<<"Queue is"<<endl;
    for (int i = fi; i < rare + 1; i++)
    {
        cout << front[i] << endl;
    }
}

int main()
{
    QueArr q(5);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(55);
    q.enqueue(776);
    q.display();
    q.deque();
    q.deque();
    q.display();
    return 0;
}