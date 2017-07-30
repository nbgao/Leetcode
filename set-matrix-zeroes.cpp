#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        map<int,bool> row,col;
        for(int i=0;i<m;i++)
        	for(int j=0;j<n;j++)
        		if(matrix[i][j] == 0)
        			row[i] = col[j] = true;
		
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			{
				if(row[i] || col[j])
					matrix[i][j] = 0;
			}
    }
};

int main()
{
	bool a[10];
	cout<<a[0]<<a[1]<<a[2]<<endl;

	return 0;
}

