#include<iostream>
using namespace std;

int linearSearch(int arr[], int number, int size){

    for(int i=0; i<size-1; i++){

        if(arr[i]==number)
            return i;
        
    }
    cout<<"\nNumber Not Found IN Array.."<<endl;;
}
int main()
{
    int n;
    int se;  
    cout<<" Enter size of array.."<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<" Whichnumber you want to search in array.."<<endl;
    cin>>se;
    int foundindex = linearSearch(arr, se, n);
    cout<<" Search element found at index number.."<<foundindex<<endl;

    return 0;
}