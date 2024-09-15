#include<iostream>
using namespace std;
int main(){
    int num , i=1;
    cout<<"Enter number : ";
    cin>> num;
    while (i <= num){
        
        //FIRST 
        int j = 1;
        while(j <= num){
            if(j >= num-i+2){
                cout<<"*";
            }else{
                cout<<j;

            }
            j++;
        }
j = num;
        while(j  >= 1){

            if(j > num -i +2){
                cout<<"*";
            }else{
                cout<<j;
            }
            j--;

        }
        i++;
        cout<<endl;
    }
    }