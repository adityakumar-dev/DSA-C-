// Output : 
// Enter number : 5
// *****
//  ****
//   ***
//    **
//     *
#include<iostream>
using namespace std;
int main(){
    int num , i=1;
    cout<<"Enter number : ";
    cin>> num;
    while(i <= num){
        int j = 1;
        while(j <= num){
            if(j <= i -1){
                cout<<" ";
            }else{
                cout<<"*";
            }
            j++;
        }
        i++;
        cout<<endl;
    }
    
    }