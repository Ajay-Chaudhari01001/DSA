// Square Root using binary search...
#include<iostream>
using namespace std;

// find squre root
int binarySearch(int num){

    int start = 0;
    int end = num;
    int mid, ans, square;
    while(start <= end){

        mid = start+(start-end)/2;
         square = mid*mid;
        if(square == num)
           return 0;
        else if(square <= num){
            int ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
            
    }
    return ans;
}
int main(){

    int n;
    cout<<"Enter a number to find root of number = "<<endl;
    cin>>n;
    int root = binarySearch(n);
    cout<<"Root Of Number..."<<root<<endl;

    return 0;
}