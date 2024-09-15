#include<iostream>
using namespace std;
int main(){
    int num , i=1;
    cout<<"Enter number : ";
    cin>> num;
    while(i <= num){
        int count = 1;
        int space = 1;
        
        while(space <= num-i){
            cout<<" ";
        space++;
        }
        
        int j = 1;
        while(j <= i){
            cout<<j;
            j++;
        }
            j = i-1;     
        while(j >= 1){
            cout<<j;
            j--;

        }
        cout<<endl;
        i++;
    }
    }