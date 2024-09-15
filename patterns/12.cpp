// Output :
// Enter number : 5
// *****
// **** 
// ***  
// **   
// *    


#include<iostream>
using namespace std;
int main(){
    int num , i=1;
    cout<<"Enter number : ";
    cin>> num;
    i = num;
    while(i >= 1){
        int j= i;
        while(j >= 1 ){
            cout<<"*";
        j--;
        }cout<<endl;
        i--;

    }
    }