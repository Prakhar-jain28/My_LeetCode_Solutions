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
    void traverse(vector<int> &arr, ListNode *head)
    {
        if (head == NULL)
            return;
        traverse(arr, head->next);
        arr.push_back(head->val);
    }

    bool isPalindrome(ListNode *head)
    {
        vector<int> arr;
        traverse(arr, head);
        int i = 0;
        while (head)
        {
            if (head->val != arr[i++])
                return 0;
            head = head->next;
        }
        return 1;
    }
};