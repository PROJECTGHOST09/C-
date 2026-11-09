#include <iostream>
int main(){
    int n;
    std::cout<<"Enter the number for pattern \n";
    std::cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            std::cout<<' * \n';
        }
    }
}