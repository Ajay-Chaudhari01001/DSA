// subtract the product and sum of digits of an integers
//Given an integer n, return the difference between the product of its
// digits and the sum of its digits..
#include<iostream>
using namespace std;

class Solution{
    
    public:
        int product=1;
        int sum = 0;
        int returnanswer(int n){

            while(n!=0){

                int digit = n%10;

                product *= digit; // product of digits
                sum += digit;       // sum of digits

                n = n/10;
            }
            int answer = product - sum;
            return answer;
        }
};
int main(){

    Solution s;
    int n;
    cout<<"Enter a number..."<<endl;
    cin>>n;
    int ans = s.returnanswer(n);
    cout<<"Substraction of product and sum of digits = "<<ans<<endl;

    return 0;
}