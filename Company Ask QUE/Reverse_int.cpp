/* Given a signed 32-bit integer x, return  x with its digits reversed if revesing x cause 
the value to go outside the signed 32-bit integer range [pow(-2,32) to pow(2,31-1)], then return 0,
Assume the environments does not allows you to store 64-bit integers (signed or unsigned)..
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
        int reverseInt(int n){
            int ans = 0;
            while(n!=0){

                int digit = n%10;
                if(ans>INT_MAX/10 || ans<INT_MAX/10){

                    return 0;
                }
                ans = (ans*10)+digit;
                n = n/10;
            }
            return ans;
        }

};
int main(){

    Solution s;
    int x;
    cout<<" Enter a Number.."<<endl;
    cin>>x;
    int rev = s.reverseInt(x);
    cout<<"Reverse Integer is = "<<rev;
    return 0;
}

// this question ask by big MNC's company  like google microsoft apple netflix...