#include<iostream>
using namespace std;

void reachHome(int step, int stop){

    cout<<"Step "<<step<<" Stop "<<stop <<endl;
    
    if(step == stop){
        cout<<" Pahuch Gaya Mein Ghar pe"<<endl;
        return;
    }
    
    step++;

    reachHome(step, stop);
}
int main(){

    int no;
    cout<<"Enter your stairs"<<endl;
    cin>>no;
    reachHome(1, no);
    return 0;
}