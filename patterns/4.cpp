#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    // Output : 
    // Enter number : 4
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 

}