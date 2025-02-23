#include<iostream>
using namespace std;
int main(){
    int n;
    std::cin>>n;
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            std::cout<<i+j-1;
        }
        std::cout<<std::endl;
    }
}