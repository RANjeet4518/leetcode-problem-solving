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
        if(head->next->next==nullptr) return {-1,-1};
        ListNode* temp=head->next;
        ListNode* next=temp->next;
        vector<int> ans;
        int count=2;
        int count1=3;
        while(next!=nullptr){
            if(head->val>temp->val && next->val>temp->val  || head->val<temp->val && next->val<temp->val){
                ans.push_back(count);
            }
            head=head->next;
            temp=temp->next;
            next=next->next;
            count++;
            count1++;

        }
        int n=ans.size();
        if(ans.size()<2) return {-1,-1};
        int mn=INT_MAX;
        for(int i=1;i<n;i++){
            if((ans[i]-ans[i-1])<mn) mn=ans[i]-ans[i-1];
        }
        int mx=ans[n-1]-ans[0];
        cout<<count1;
        return {mn,mx};

        
    }
};