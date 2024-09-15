// Output :
// Enter number : 5
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>> num;

    int i = 1;
    while(i <= num){
        int j = 1; 
        while(j <= num){
            cout<<char('A'+i-1);
            j++;
        }
        cout<<endl;
        i++;
    }    
}