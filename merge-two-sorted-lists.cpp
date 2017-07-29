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

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){};
}; 

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL)
        	return l2;
        if(l2 == NULL)
        	return l1;
        	
		ListNode *l3 = new ListNode(0);
        ListNode *p3 = l3;
        while(l1 && l2)
        {
        	if(l1->val <= l2->val)
        	{
        		p3->next = l1;
        		l1 = l1->next;
			}else{
				p3->next = l2;
				l2 = l2->next; 
			}
			p3 = p3->next;
		}
		if(l2)

			p3->next = l2;
		else
			p3->next = l1;

		return l3->next;
    }
};

int main()
{

	return 0;
}

