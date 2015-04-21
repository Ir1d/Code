#define PROB ASDF
#include <cstdio>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;
#define g(x,y,z) for(int x = (y),__ = (z);x <= __;++x)
#define gd(x,y,z) for(int x = (y),__ = (z);x >= __;--x)
#define CLR(X) memset(X,0,sizeof(X))
#define SET(ARR,X) memset(ARR,X,sizeof(ARR))
#define R(X,Y) f(X,0,Y)
#define G(x,y) g(X,0,Y)
#define MAXN 1024

typedef long long LL;
typedef long double real;
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
#define f(x,y,z) for(int x = (y),__ = (z);x < __;++x)
       unordered_map<int,int> m;
       vector<int> ans;
       f(i,0,numbers.size()){
       		if (m[target - numbers[i]]){
       			ans.push_back(m[target - numbers[i]]);
       			ans.push_back(i + 1);
       			break;
       		}else {
       			m[numbers[i]] = i + 1;
       		}
       }
       return ans;
    }
};

int main(){
	vector<int> t;
	t.push_back(0);
	t.push_back(4);
	t.push_back(3);
	t.push_back(0);
	Solution S;
	vector<int> q = S.twoSum(t,0);
	printf("%d %d\n",q[0],q[1]);
	
	return 0;
}

