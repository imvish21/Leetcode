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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        else if(head->next==head)
        {
            return head;
        }
        else
        {
            /*ListNode* temp=head; //TLE BUT RIGHT
            ListNode* prev=NULL;
            ListNode* after=head->next;
            while(temp)
            {
                temp->next=prev;
                prev=temp;
                temp=after;
                if(after){
                    after=after->next;
                }
            }
            head=prev; //reversed
            k--;
            ListNode *temp1=head;
            while(temp1->next!=NULL)
            {
               temp1=temp1->next;
            }
            temp1->next=head; //circular
            ListNode* temp2=head->next;
            while(k!=0)
            {
                head=head->next;
                temp2=temp2->next;
            }
            head->next=NULL;
             temp=temp2;
             prev=NULL;
             after=temp2->next;
            while(temp)
            {
                temp->next=prev;
                prev=temp;
                temp=after;
                if(after){
                    after=after->next;
                }
            }
            temp2=prev;
             return temp2;*/
        ListNode *temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }
        temp->next=head; //circular
        k=k%len;
        int last=len-k;
        temp=head;
        while(last>1)
        {
            last--;
            temp=temp->next;
        }
          head=temp->next;
          temp->next=NULL;
          return head;


        }

    
      
    }
};