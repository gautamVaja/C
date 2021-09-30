#include <iostream>
#include <cmath>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LL
{
private:
    int head;

public:
    LL();
    ~LL();
};

LL::LL()
{
}

LL::~LL()
{
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void bubble(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}

void insertion_sort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = a[i];
        for (int j = i - 1; j > -1; j--)
        {
            if (a[j] > x)
            {
                a[j + 1] = a[j];
            }
        }
    }
}

void selection_sort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        swap(&a[i], &a[k]);
    }
}

// void quick_sort(int *a, int n, int start)
// {
//     if (n > 1)
//     {
//         int x = a[start];
//         int i, j;
//         i = start;
//         j = n - 1;
//         while (i < j)
//         {
//             if (a[i] > x)
//             {
//                 i++;
//             }
//             if (a[j] < x)
//             {
//                 j--;
//             }
//             if (a[i] > x && a[j] < x)
//             {
//                 swap(&a[i], &a[j]);
//             }
//         }
//         swap(&a[0], &a[j]);
//         quick_sort(a, j - 1, 0);
//         quick_sort(a, n - j, j + 1);
//     }
//     else
//     {
//         return;
//     }
// }

int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i, j;
    i = l;
    j = h;
    while (i < j)
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[l], &a[j]);
    return j;
}

void quick_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int j;
        j = partition(a, l, h);
        quick_sort(a, l, j);
        quick_sort(a, j + 1, h);
    }
    else
    {
        return;
    }
}

void merge(int a[], int l, int mid, int h)
{
    int *b = new int[h - l];
    int i, j, k;
    i = l;
    j = mid;
    k = 0;
    while (i < mid && j < h)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    for (; i < mid; i++)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    for (; j < h; j++)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = l; i < h; i++)
    {
        a[i] = b[i];
    }
    delete b;
}

int log2(int n)
{
    int ans = 0;
    while (n >= 1)
    {
        n /= 2;
        ans++;
    }
    return ans;
}

void Imerge_sort(int a[], int n)
{
    int l, h, mid, p;
    for (p = 2; p <= n; p = 2 * p)
    {
        for (int i = 0; h <= n; i = i + p)
        {
            l = i;
            h = i + p;
            mid = (l + h) / 2;
            merge(a, l, mid, h);
        }
    }
    while (p / 2 <= n)
    {
        merge(a, 0, p / 2, n);
    }
}

bool iseven(int n)
{
    if (!(n % 2))
    {
        return true;
    }
    return false;
}

void Rmerge_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        Rmerge_sort(a, l, mid);
        Rmerge_sort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

void count_sort(int a[], int n)
{
    int *count = new int[max(a, n) + 1];
    count = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    int i = 0, j = 0;
    while (i <= max(a, n) + 1)
    {
        while (count[i] > 0)
        {
            a[j] = i;
            j++;
        }
        i++;
    }
}

void insert(node *pos, int x)
{
    if (!pos)
    {
        node *t;
        t->data = x;
        t->next = 0;
        pos = t;
        t = 0;
    }
    else
    {
        node *t;
        t->data = x;
        t->next = pos->next;
        pos = t;
        t = 0;
    }
}

int Delete(node *pos)
{
    node *t;
    t = pos;
    pos = pos->next;
    delete t;
    t = 0;
}

void bin(int a[], int n)
{
    node **count = new node *[max(a, n) + 1];
    *count = {0};
    for (int i = 0; i < n; i++)
    {
        insert(count[a[i]], a[i]); //do like this insert(count[a[i]]);
    }

    int i, j;
    while (i <= max(a, n) + 1)
    {
        while (count[i] != 0)
        {
            a[j] = count[i]->data;
            Delete(count[i]);
            j++;
        }
        i++;
    }
}

int digits(int num)
{
    int digits = 0;
    while (num)
    {
        num = num / 10;
        digits++;
    }
}

void radix(int a[], int n)
{
    node *r[10] = {0};
    int d = digits(max(a, n));

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int pos = a[j] / (pow(10, i));
            insert(r[pos], a[j]);
        }
        int k, m; //k is for r     //m is for a
        while (k < 10)
        {
            while (r[k] != 0)
            {
                a[m] = r[k]->data;
                Delete(r[k]);
                m++;
            }
            k++;
        }
    }
}

void sell_sort(int a[], int n)
{
    int gap = n / 2;
    while (gap)
    {
        int i, j;
        i = 0;
        j = gap;
        while (i + gap < n)
        {
            j = i + gap;
            if (a[i] > a[j])
            {
                while (j - gap > 0 && a[j - gap] > a[j])
                {
                    swap(&a[j - gap], &a[j]);
                    j = j - gap;
                }
            }
            i++;
        }
        gap = gap / 2;
    }
}

int main()
{
    int a[] = {2, 3, 5, 1, 9, 7, 6};
    quick_sort(a, 0, 8);
    partition(a, 0, 7);
    cout << "Hi" << log(8) << endl;
    return 0;
}
//for (int  j = 0; j < n-(pow(2,i-1)-1); j++)