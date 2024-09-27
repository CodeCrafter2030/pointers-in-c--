#include <iostream>
using namespace std;

// Pointers are containers to store the address of other variables 

int main()
{
int a=3;
int* b=&a; //here pointer b is created which stores the address of a
cout<<*b<<endl;  // '*' is Dereferencing operator 
           // '&' is addres of operator 

// //Pointer in pointer
int** c=&b; //here pointer c is created which stores the address of pointer b

cout<<*c<<endl;  //gives address of pointer b

cout<<**c<<endl;  //gives the value stored at pointer b 

return 0;

}