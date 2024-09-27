// Program to explain how pointers are created for arrays in c++

#include <iostream>
using namespace std;

int main()
{
    int arr[5]={20,10,30,50,25}; //array created with 5 elements 

    int* p=arr;   //Here pointer 'p' is created for array 'arr'

    // if you want to print element of array using pointers , here it is :
    
    cout<<*p<<endl;     //'*p' will print first element of array

    cout<<*(p+1)<<endl;  //"*(p+1)" will print second element of array 

    cout<<*(p+2)<<endl;  //"*(p+2)" will print third element of array, and so on 

    return 0;

}