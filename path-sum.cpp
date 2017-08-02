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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        if(!root)
        	return false;
        if(root->left == NULL && root->right == NULL && root->val == sum)
        	return true;
        return hasPathSum(root->left , sum - root->val) || hasPathSum(root->right , sum - root->val);   	
    }
};

int main()
{


	return 0;
}

