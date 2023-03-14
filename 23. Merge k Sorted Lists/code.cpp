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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if( size(lists) == 0){
            return NULL;
        }
        vector <int>nums;
        for( int i=0; i< size(lists); i++){
            while(lists[i]){
                nums.push_back(lists[i]->val);
                lists[i]= lists[i]->next;
            }
        }
        sort(nums.begin(),nums.end());
        ListNode *ans = nullptr;
        for(int i=size(nums)-1; i>=0;i--){
            ans = new ListNode(nums[i],ans);
        }
        return ans;
    }
};