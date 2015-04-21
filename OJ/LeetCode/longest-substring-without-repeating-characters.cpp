#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    inline int maxx(int x,int y){
        if (x > y)return x;
        return y;
    }
    int lengthOfLongestSubstring(string s) {
#define f(x,y,z) for(int x = (y),__ = (z);x < __;++x)
        bool met[1024];
        int ans = 0;
        f(i,0,s.length()){
            memset(met,0,sizeof met);
            f(j,i,s.length()){
                if (met[s[j]]){
                    ans = maxx(ans,j - i);
                    break;
                }else met[s[j]] = 1;
                ans = maxx(ans,j - i + 1);
            }

        }
        return ans;
    }
} S;

string s = "aa";
int main(){
    printf("%d\n",S.lengthOfLongestSubstring(s));
	return 0;
}

