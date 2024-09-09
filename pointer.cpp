#include<iostream>
using namespace std;
 int main(){
     // what is pointer?
     int a = 3;
     int* b;
     b=&a;

     cout<<"The address of a is"<<&a<<endl;
     cout<<"The address of a is"<<&b<<endl;

      cout<<"The address of a is"<<*b<<endl;

      int**c=&b;
      cout<<"the address of b is "<<&b<<endl;
      cout<<"the address of b is "<<&c<<endl;
      cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;


      return 0;

 }
