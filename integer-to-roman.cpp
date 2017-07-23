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
class Solution {
public:
    string intToRoman(int num) {
        char *Roman[4][10] = {{"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM"}
		};
		string roman;
		
		roman.append(Roman[3][num/1000]);
		roman.append(Roman[2][num%1000/100]);
		roman.append(Roman[1][num%100/10]);
		roman.append(Roman[0][num%10]); 
		return roman;
    }
};


int main()
{

	return 0;
}

