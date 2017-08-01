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

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int begin = 0,end = rows*cols-1;
        
        while(begin <= end)
        {
        	int mid = (begin + end)/2;
        	int row = mid/cols;
        	int col = mid%cols;
        	if(matrix[row][col] == target)
        		return true;
        	else if(matrix[row][col] < target)
        		begin = mid + 1;
        	else
        		end = mid - 1;
		}
		return false;
    }
};

int main()
{


	return 0;
}

