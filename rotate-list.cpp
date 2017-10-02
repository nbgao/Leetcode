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
    ListNode *rotateRight(ListNode *head, int k) {
        if(head == NULL || k==0) 
        	return head;
        int l = 1;
        ListNode *p = head;
        while(p->next)
        {
        	l++;
        	p = p->next;
		}
		int t = l - k%l;
		p->next = head;
		for(int i=0;i<t;i++)
			p = p->next;
		head = p->next;
		p->next = NULL;
		return head;
    }
};

int main()
{


	return 0;
}

