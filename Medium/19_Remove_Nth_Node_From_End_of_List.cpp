/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int len = 0;
        ListNode *temp = head;
        while (temp)
        {
            temp = temp->next;
            len++;
        }
        // cout<<len;
        // return head;
        if (len == 1)
            return NULL;
        if (len == n)
        {
            head = head->next;
            return head;
        }
        len = len - n;
        temp = head;
        while (--len)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};