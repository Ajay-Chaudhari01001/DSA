/*write afunction that takes an unsigned integer andreturns the number of 1 bits it has (also
known as the Hamming weight)...*/
#include<iostream>
using namespace std;

class Solution{
    public:
    int count=0;
    int hommingweight(int n){

        while(n!=0){

            // checkint last bit 
            if(n&1){
                count++;
            }
            n = n>>1;  // n >>=1;
        }
            return count;  
        }
    
};
int main(){
    Solution s;
    int n;
    cin>>n;
    int bits = s.hommingweight(n);
    cout<<"Number of 1 bits in number are = "<<bits<<endl;
    return 0;
}
// other concept..
// count = n>>1 + n&1;