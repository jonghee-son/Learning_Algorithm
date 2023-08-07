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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* result = new ListNode;
        ListNode *index = result;
        ListNode *index2;
        int sum = 0;
        int carry = 0;

        while ((temp1 || temp2 || carry) && index) {
            ListNode *newNode = new ListNode;
            sum = ((temp1) ? temp1->val : 0) + ((temp2) ? temp2->val : 0) + carry;
            carry = 0;

            if (sum > 9) {
                carry = sum / 10;
                index->val = sum - 10;
            }
            else {
                index->val = sum;
            }

            if (index->val > 9) {
                carry += index->val / 10;
                index->val = index->val % 10;
            }

            temp1 = (temp1) ? temp1->next : nullptr;
            temp2 = (temp2) ? temp2->next : nullptr;
            if (!(!(temp1 || temp2) && carry == 0)) {
                index->next = newNode;
            }
            index = index->next;
        }

        return result;
    }
};
