// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <cstdio>
#include <iostream>

int helloworld(){
    std::cout <<"Hallo Welt!";
    return 0;
}

int main(){
   std::cout << "-----------ANFANG-------------" << std::endl;
   std::cout << std::endl;

   helloworld();

   std::cout << std::endl << std::endl;
   std::cout << "----------ENDE--------------" << std::endl;
   return 0;
}