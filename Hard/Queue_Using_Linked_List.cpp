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

void insert()
{
    int n;
    cout << endl
         << "Enter the node value: ";
    cin >> n;
    cout << endl;
    listNode *temp = head;

    if (head == NULL)
    {
        listNode *newNode = new listNode(n);
        newNode->next = head;
        head = newNode;
    }
    else
    {
        while (temp->next)
            temp = temp->next;
        listNode *newNode = new listNode(n);
        temp->next = newNode;
    }
}

void dequeue()
{
    if (head == NULL)
    {
        cout << endl
             << "The Queue in Empty" << endl;
        return;
    }
    int data = head->val;
    listNode *temp = head;
    head = head->next;
    cout << endl
         << "Node haveing value " << data << " is deleted" << endl;
}

void display()
{
    if (head == NULL)
    {
        cout << endl
             << "The Stack in Empty" << endl;
        return;
    }
    listNode *temp = head;
    cout << "Elements present in the Queue are : ";
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int32_t main()
{

    while (1)
    {
        int n;
        cout << endl
             << "1 -> Insert" << endl
             << "2 -> Dequeue" << endl
             << "3 -> Display" << endl
             << "4 -> Exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            insert();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
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
