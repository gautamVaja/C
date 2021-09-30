#include <bits/stdc++.h>
using namespace std;
class que
{
private:
    stack<int> s1, s2;

public:
    que();
    ~que();
    void enque(int x);
    int deque();
    void tranfer();
    void display();
};
que::que()
{
    s1.top() = -1;
    s2.top() = -1;
}
que::~que()
{
}
void que::enque(int x)
{
    s1.push(x);
}
void que::tranfer()
{
    s2.push(s1.top());
    s1.pop();
}
int que::deque()
{
    int x = s2.top();
    s2.pop();
    return x;
}
int main()
{
    que q;
    q.enque(3);
    q.enque(5);
    q.enque(6);
    return 0;
}