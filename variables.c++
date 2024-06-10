#include<iostream>

int main(){
    int x;
    int y;
    x=5;
    y = 6;
    std::cout<<x<<std::endl;
    std:: cout<< y << std:: endl;

    // double type variables : (numbers with decimals):

    double a = 3.5;
    double ccgpa = 7.8;

    std::cout << a << '\n';
    std :: cout << ccgpa << '\n';

    // charactr type variables : (varaibles With single character inside '_'):

    char _first_name = 'a';
    char currency = '$';
    std:: cout<< _first_name << std:: endl;
    std:: cout<< currency << std:: endl;


    // boolean datatype (true or false:)

    bool power = false;
    bool winter = false;
    bool temp = true;

    std::cout<<power<<std::endl;
    std::cout<<winter<<std::endl;
    std::cout<<temp<<std::endl;

    // string datatype (objects that represent a sequence  of text);
    std::string name = "snorlax";
    std::string nation = "Indian";

    std::cout<<name<<'\n';
    std::cout<<nation<<std::endl;
    // alternative: 

    std::cout<<"hello world i am " << name;
    return 0;
}