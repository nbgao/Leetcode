#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
		if(head == NULL || head->next == NULL)
			return head;
			
		ListNode *p = head,*q;

		while(p != NULL && p->next != NULL)
		{
			q = p->next;
			if(q->val == p->val)
			{
				p->next = q->next;
			}else{
				p->next = q;
				p = p->next;
			}
		}
		return head;  
    }
};

int main()
{


	return 0;
}

