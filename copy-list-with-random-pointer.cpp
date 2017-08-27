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

using namespace std;

struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        RandomListNode *copy,*p;
        if(head == NULL)
        	return NULL;
        for(p=head; p; p=p->next)
        {
        	copy = new RandomListNode(p->label);
        	copy->next = p->next;
        	p->next = copy;
        	p = p->next;
		}
		for(p=head; p; p=copy->next)
		{
			copy = p->next;
			copy->random = (p->random?p->random:NULL);
		}
		for(p=head,head=copy=p->next; p; )
		{
			p = p->next = copy->next;
			copy = copy->next = p?p->next:NULL; 
		}
		return head;
    }
};

int main()
{


	return 0;
}

