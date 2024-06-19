// PRINTING FIBBONACHI SERIES:

// #include<iostream>

// int main(){
//     int n;
//     std::cout<<"pleaswe enter the range: ";
//     std::cin>>n;

//     int a = 0;
//     int b = 1;
//     for(int i = 0; i<=n; i++){
//         int next = a+b;
//         std::cout<<next<<std::endl;

//         a = b;
//         b = next; 
//     }
//     return 0;
// }

#include<iostream>

int main(){
    int n = 234;
    int prod = 1;
    int sum = 0;

    while(n!= 0){
        int digit = n%10;
        prod = prod*digit;
        sum = sum+digit;
        
        n = n/10;
    }
    int answer = prod-sum;
    std::cout<<answer;
    return answer;
}