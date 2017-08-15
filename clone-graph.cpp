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

struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};

class Solution {
public:
	map<int,UndirectedGraphNode *> hash;
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(node == NULL)
        	return node;
        	
        UndirectedGraphNode *newG = new UndirectedGraphNode(node->label);
        hash.insert(make_pair(node->label,newG));
        
        for(size_t i=0;i<node->neighbors.size();i++)
        {
        	UndirectedGraphNode *p = node->neighbors[i];
        	if(!hash.count(p->label))
        		newG->neighbors.push_back(cloneGraph(p));
        	else
        		newG->neighbors.push_back(hash[p->label]);
		}
		return newG;
    }
};

int main()
{


	return 0;
}

