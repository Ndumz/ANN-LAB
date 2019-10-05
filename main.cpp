#include "perceptron.h"
#include <iostream>
using namespace KHMNDU005;


int main(int argc, char** argv)
{

    perceptron x;
    
    std::cout<<"P1: "<<x.XOR_perceptron(1,1,0);
    std::cout<<" P2: "<<x.XOR_perceptron(1,0,0);
    std::cout<<" P3: "<<x.XOR_perceptron(0,1,0);
    std::cout<<" P4: "<<x.XOR_perceptron(0,0,0);
    
    return 0;
}