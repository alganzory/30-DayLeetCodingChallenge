class Solution {
public:


    ListNode * middleNode(ListNode* head) {
        int cnt = 0;
        map <int, ListNode*> m;
        ListNode *temp = head;
        while (temp != NULL){
          cnt ++;
          m[cnt] = temp;
          temp = temp -> next;
        }
          cnt = ceil (cnt/2) +1;
          return m[cnt];
        }
};
