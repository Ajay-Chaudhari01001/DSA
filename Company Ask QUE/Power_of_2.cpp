/* Given an integer n, return true if it is a power of two. Otherwise, retur false.
Ann integer n is a power of two, if there exist an integer x such that n == pow(2,x)*/
#include<iostream>
#include<math.h>
using namespace std;

class Solution{

    public:
        bool ispowerOfTwo(int n){

            for(int i=0; i<=30; i++){

                int ans = pow(2,i);
                if(ans==n){

                    return true;
                }
                return false;
            }
        }
};
int main(){

    Solution s;
    int n;
    cin>>n;
    cout<<" Power of Two = "<<s.ispowerOfTwo(n)<<endl;

    return 0;
}