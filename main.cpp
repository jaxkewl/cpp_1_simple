/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on January 23, 2016, 10:12 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void myFunction() {
    std:cout<<"calling from myFunction \n";
}


/*
 * 
 */
int main(int argc, char** argv) {

    std::cout<<"hello world"<<std::endl;
    myFunction();
    return 0;
}

