// Output : 
// Enter number : 5
// A
// BC
// DEF
// GHIJ
// KLMNO

#include<iostream>
using namespace std;
int main(){
    int num , i = 1;
    cout<<"Enter number : ";
    cin>>num;
    char ch = 'A';

    while(i <= num){
        int j = 1;
        while(j <= i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}