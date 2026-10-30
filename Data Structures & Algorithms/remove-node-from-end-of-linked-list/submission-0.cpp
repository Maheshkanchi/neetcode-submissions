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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v;
        int i;
        n = n-1;
        ListNode* temp = head;
        while(temp != nullptr){
            v.push_back(temp->val);
            temp = temp->next;
        }
        reverse(v.begin(),v.end());
        for(auto it : v){
            cout << it << " " ;
        }
        cout << endl;
        v.erase(v.begin() + n);
        ListNode* a = nullptr;
        for(i=0;i<v.size();i++){
            ListNode* dum = new ListNode(v[i]);
            dum->next = a;
            a = dum;
        }
        return a;
    }
};
