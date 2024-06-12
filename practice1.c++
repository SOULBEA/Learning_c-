// calculate the area of rectangle where the user give the value of the respective len and breadth, and also calculate
// area of circle:

#include<iostream>

int main(){
    int len, breadth;
    std::cout<< "Please enter the value of len: ";
    std::cin>> len;
    std::cout<< "please enter the value of breadth: ";
    std::cin>> breadth;
    int area_rec = len*breadth;
    std::cout<< "The area of rectangle = "<< area_rec<< std::endl;
    return 0;
}