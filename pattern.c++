/*print 123
        456
        789*/

// #include<iostream>
//
// int main(){
//
//   int n;
//   std::cout<<"please enter the range: ";
//   std::cin>>n;
//
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while (j <=i) {
//       std::cout<<j;
//       j++;
//     }
//     std::cout<<"\n";
//     i++;
//   }
//   return 0;
// }


/*print 
 123
 456
 789*/

// #include <iostream>
//
// int main(){
//
//   int n;
//   std::cout<<"please enter the range: ";
//   std::cin>>n;
//
//   int i = 1;
//   int count = 1;
//   while (i<=n) {
//    int j = 1;
//    while (j<=n) {
//      std::cout<<count;
//      count++;
//      j++;
//    }
//    std::cout<<"\n";
//    i++;
//   }
//   return 0;
 // /}


/* print
*
**
*** */

// #include <iostream>
//
// int main(){
//   int n;
//   std::cout<<"please enter a range:  ";
//   std::cin>>n;
//
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while (j<=i) {
//       std::cout<<"* ";
//       j++;
//     }
//     std::cout<<"\n";
//     i++;
//   }
//   return 0;
// }
//  


/* print 
1 
22
333 */   

// #include<iostream>
//
// int main(){
//   int n;
//   std::cout<<"please enter the range: ";
//   std::cin>>n;
//
//   int i = 1;
//   while (i<=n) {
//    int j = 1;
//    while (j<=i) {
//     std::cout<<i;
//     j++;
//    }
//    std::cout<<"\n";
//    i++;
//   }
//   return 0;
// }


/* print 
   1  
   23
   456*/

// #include<iostream>
//
// int main(){
//
//   int n;
//   std::cout<<"please enter range: ";
//   std::cin>>n;
//
//   int i = 1;
//   int count = 1;
//   while(i<=n){
//     int j = 1;
//     while (j<=i) {
//      std::cout << count;
//      count++;
//      j++;
//     }
//     std::cout<<"\n";
//     i++;
//   }
//   return 0;
// }


/*print 
  1 
  23
  345
  5678*/   

// #include<iostream>
//
// int main(){
//   int n;
//   int i = 1;
//   int num = 1/* ; */
//   while (i<=n) {
//    int j = 1;
//    while (j<=i) {
//     std::cout<<num;
//     num++;
//     j++;
//    }
//    std::cout<<"\n";
//    i++;
//   }
//   return 0;
// }


/* print 
1 
21
321
4321 */


// #include <iostream>
//
// int main(){
//
//   int n;
//   std::cout<<"please enter range: ";
//   std::cin>>n;
//
//   int i = 1;
//   while (i<=n) {
//    int j = 1;
//    while (j<=i) {
//     std::cout << (i-j+1); 
//     j++;
//    }
//    std::cout<<"\n";
//    i++;
//   }
//   return 0;
// }


// print 
// aaa
// bbb
// ccc

// #include<iostream>

// int main(){
//
//   int n;
//   std::cout<<"please enter the range: ";
//   std::cin>>n;
//   char ch = 'A';
//   int i = 1;
//   while (i<=n) {
//     int j = 1;
//     while (j<=n) {
//       std::cout<<ch;
//       ch++;
//       j++;
//     
//    }
//    std::cout<<"\n";
//    i++;
//   }
//   return 0;
// }


/* print 
   ****
   ***
   **
   *

*/


#include<iostream>

int main(){
  int n;
  std::cout<<"Please enter range: ";
  std::cin>>n;

  int i =n;
  while(i>=1){
    int j = 1;
    while (j<=i) {
      std::cout<<"x";
      j++;
      
    }
    std::cout<<"\n";
    i--;
  }
  return 0;
}