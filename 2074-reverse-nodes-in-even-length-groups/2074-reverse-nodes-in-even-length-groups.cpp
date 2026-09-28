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
    ListNode* rev(ListNode* head,int k){
        ListNode* p2 = head;
        ListNode* p3 = nullptr;
        ListNode* p1 = head->next;
        while(p1 && k>1){
            p2->next = p3;
            p3 = p2;
            p2 = p1;
            p1 = p1->next;
            k--;
        }
        p2->next = p3;
        head->next = p1;
        return p2;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        int len = 2;
        int ol = -1;
        while(temp1){
            ol++;
            temp1 = temp1->next;
        }
        while(ol >= len){
            if(len % 2 == 0){
                ListNode* x = rev(temp->next,len);
                temp->next = x;
            }
            int z = len;
            while(z--) temp = temp->next;
            ol -= len;
            len ++;
        }
        if(ol > 0 && ol %2 == 0 && temp->next){
            ListNode* x = rev(temp->next,ol);
            temp->next = x;
        }
        return head;
    }
};