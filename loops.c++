// while loops::

// #include<iostream>

// int main(){
//   std::string name;
//   while(name.empty()){
//     std::cout<<"Please enter your name: ";
//     std::getline(std::cin, name);

//   }
//   std::cout<<"Hello "<<name;
//   return 0;

// }

// ====================================

// #include<iostream>

// int main(){
//   int number;
//   std::cout<<"please enter a +ve number: ";
//   std::cin>>number;

//   while(number<0){
//     std::cout<<"please enter a +ve number: ";
//     std::cin>>number;

//   }
//   std::cout<<"you enterd "<< number;
//   return 0;
// }

// ++++++++++++++++++++++++++++++++++++++++++++++++++
// do while loops

// #include<iostream>

// int main(){
//   int number;
//   do{
//     std::cout<<"Please enter a +ve number: ";
//     std::cin>>number;
//   }while(number<0);
//   std::cout<<"you entered "<< number;
//   return 0;
// }

// ------------------------------------------------------
// for loops:
// write a program that will take range from the user and print number 7;
// #include<iostream>

// int main(){
//   int number, user_input;
//   number = 7;
//   std::cout<<"How many time you want print number 7: ";
//   std::cin>>user_input;
//   for(int i = 1; i<=user_input; i++){
//     std::cout<< number;
//     // std::cout<<number;
//   }
//   return 0;
// }

// #include<iostream>
//
// int main(){
//   int number;
//   std::cout<<"enter the range tilll the time you want to print natural number: ";
//   std::cin>>number;
//
//   for(int i = 1; i<=number; i++){
//     std::cout<<" " <<i;
//   }
//   std::cout<<" done!";
//   return 0;
// }

#include<iostream>

int main(){
  int n, result;
  std::cout<<"please enter the value to print table: ";
  std::cin>>n;

  for(int i = 1; i<=10; i++)
  {
    result = n*i;
    std::cout<< "\n"<<result;
  }
  return 0;
}
