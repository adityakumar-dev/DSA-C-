#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;
    int i = 1;
    int j= 1;
    while(i <= a){
        int k = 1;
        while(k <=a){
            cout<<j<<" ";
            j++;

            k++;
        }
        cout<<endl;
        i++;
    }
    // Output : 
    // Enter number : 5
    // 1 2 3 4 5 
    // 6 7 8 9 10 
    // 11 12 13 14 15 
    // 16 17 18 19 20 
    // 21 22 23 24 25 
}