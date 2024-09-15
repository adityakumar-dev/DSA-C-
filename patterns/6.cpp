#include<iostream>

int main(){
    int a; 
    std::cout<<"Enter number : ";
    std::cin>>a;
    int count = 0;
    int i = 1;
    while(i <= a){
       int j = 1;
        while(j <= i){
            std::cout<<++count<<" ";
        j++;
        }
        count = i;
        std::cout<<"\n";
        i++;
    }

    //Output : 
    // Enter number : 5
    // 1 
    // 2 3 
    // 3 4 5 
    // 4 5 6 7 
    // 5 6 7 8 9 
}