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
#define ll __int64
#define LL long long
#define Input int T; cin>>T;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define clear(a,x) memset(a,x,sizeof(a))
const int INF=0x3f3f3f3f;
const int MAX=1001;

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) 
	{
		if(!head)
			return false;
		ListNode *fast = head,*slow = head;
		while(fast->next && fast->next->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if(slow==fast)
				return true;
		}
		return false;
	}
};

int main()
{

	return 0;
}

