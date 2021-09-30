#include <iostream>
using namespace std;
class Cirarr
{
private:
    int front;
    int rare;
    int size;
    int actual_size;
    int *a;

public:
    Cirarr(int n);
    ~Cirarr();
    void display();
    void enque(int x);
    int deque();
    bool isempty();
    bool isfull();
};
Cirarr::Cirarr(int n) : actual_size(n)
{
    a = new int[n];
    front = -1;
    rare = -1;
    size = 0;
}
Cirarr::~Cirarr()
{
    delete[] a;
}
bool Cirarr::isempty()
{
    if (front == rare)
    {
        return true;
    }
    return false;
}
bool Cirarr::isfull()
{
    if (rare + 1 == front)
    {
        return true;
    }
    return false;
}
void Cirarr::display()
{
    if (front == rare)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        int count = 0;
        cout << "Queue is " << endl;
        // for (int i = front + 1;count < actual_size;)
        int i = front + 1;
        while (i != front)
        {
            count++;
            // if (i == front)
            // {
            //     cout << "Queue is ended" << endl;
            //     break;
            // }
            // else

            cout << "a[" << i << "] = " << a[i] << endl;
            i = (i + 1) % actual_size;

            if (count == 50)
            {
                cout << "End by count" << endl;
                break;
            }
        }
    }
}
void Cirarr::enque(int x)
{
    size++;
    if (isfull())
    {
        cout << "Queue is full by enque" << endl;
    }
    else
    {
        if (rare == actual_size - 1)
        {
            if (front > 0)
            {
                rare = 0;
            }
        }
        else
        {
            rare++;
        }
        a[rare] = x;
        cout << "Rare has inserted " << x << " at position " << rare << endl;
    }
}
int Cirarr::deque()
{
    int x = -1;
    if (isempty())
    {
        cout << "Queue is empty by deque" << endl;
    }
    else
    {
        if (front >= actual_size - 1)
        {
            front = (front + 1) % actual_size;
            x = a[front];
            a[front] = 0;
        }
        else
        {
            front++;
            x = a[front];
            a[front] = 0;
        }
        cout << "Front has deleted " << x << " from " << front << endl;
        size--;
    }
    return x;
}

int main()
{
    cout << "Hello  world" << endl;
    Cirarr q(7);
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(25);
    q.enque(215);
    q.enque(4);
    q.display();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.display();
    q.enque(12);
    q.enque(1);
    q.enque(56);
    q.enque(5);
    q.enque(562);
    q.display();
    q.deque();
    q.enque(1651);
    q.display();

    return 0;
}