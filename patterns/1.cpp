#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <=a){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    // Output :
    // Enter number : 5
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
}