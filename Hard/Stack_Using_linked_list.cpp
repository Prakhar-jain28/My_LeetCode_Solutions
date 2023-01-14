#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define floop(n) for (int i = 0; i < n; i++)

const ll mod = 1e9 + 7;

class listNode
{
public:
    int val;
    listNode *next;
    listNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

listNode *head;

void push()
{
    int n;
    cout << endl
         << "Enter the node value: ";
    cin >> n;
    cout << endl;
    listNode *newNode = new listNode(n);
    newNode->next = head;
    head = newNode;
}

void pop()
{
    if (head == NULL)
    {
        cout << endl
             << "The Stack in Empty" << endl;
        return;
    }
    int data = head->val;
    listNode *temp = head;
    head = head->next;
    cout << endl
         << "Node haveing value " << data << " is deleted" << endl;
}

void peek()
{
    if (head == NULL)
    {
        cout << endl
             << "The Stack in Empty" << endl;
        return;
    }
    int data = head->val;
    cout << endl
         << "The top element is " << data << endl;
}

int32_t main()
{

    while (1)
    {
        int n;
        cout << endl
             << "1 -> Insert" << endl
             << "2 -> Pop" << endl
             << "3 -> Peek" << endl
             << "4 -> Exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Incorrect Option" << endl;
        }
    }

    return 0;
}
