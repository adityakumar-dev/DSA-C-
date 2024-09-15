// Output :
// Enter number : 4
// D
// CD
// BCD
// ABCD
#include<iostream>
using namespace std;
int main(){
    int num , i=1;
    cout<<"Enter number : ";
    cin>> num;
    while(i <= num){
        int j=1;
        while(j <= i){
            cout<<char('A' + num-(i-j+1));
            j++;
        }
        cout<<endl;
        i++;
    }
}