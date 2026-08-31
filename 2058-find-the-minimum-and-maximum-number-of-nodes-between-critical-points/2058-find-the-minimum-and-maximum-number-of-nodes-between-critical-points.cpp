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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr;
        ListNode* temp2 = head;
        ListNode* temp = head->next;
        int index = 2;
        while(temp && temp->next){
            if((temp2->val > temp->val && temp->next->val > temp->val) || (temp2->val < temp->val && temp->next->val < temp->val)){
                arr.push_back(index);
            }
            index++;
            temp2 = temp;
            temp = temp->next;
        }
        int n = arr.size();
        if(n<2){
            return {-1,-1};
        }
        else if(n==2){
            int a = arr[1] - arr[0];
            return {a,a};
        }
        int maxi = arr[n-1] - arr[0];
        int mini = INT_MAX;
        for(int i=0;i<n-1;i++){
            mini = min(mini,arr[i+1] - arr[i]);
        }
        return {mini,maxi};
    }
};