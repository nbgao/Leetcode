#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
    	ListNode L(0);
    	ListNode *p = &L;
    	vector<ListNode *> v;
    	
    	int n = lists.size();
    	for(int i=0;i<n;i++)
    		if(lists[i] != NULL)
    			v.push_back(lists[i]);
		
		make_heap(v.begin(),v.end(),cmp);
		while(v.size())
		{
			p->next = v.front();
			pop_heap(v.begin(),v.end(),cmp);
			v.pop_back();
			p = p->next;
			if(p->next)
			{
				v.push_back(p->next);
				push_heap(v.begin(),v.end(),cmp);
			}
		}
		return L.next;
    }
    static bool cmp(ListNode *L1,ListNode *L2)
    {
    	return L1->val > L2->val; 
	}
};

int main()
{


	return 0;
}

