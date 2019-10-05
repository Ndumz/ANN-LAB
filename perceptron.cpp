#include "perceptron.h"
#include <vector>
#include <fstream>
#include  <iostream>


namespace KHMNDU005
{
    int perceptron::negate(int x)
    {
        if(x ==1 )
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    
    double perceptron::perceptron(double x1, double x2, int pos)
    {
        double  w0 = weights[pos-1];
        double  w1 = weights[pos+1];
        double  w2 = weights[pos+2];
        
        double sum = w0*1 + w1*x1 + w2*x2;
        //std::cout<<"sum: "<<sum;
        return sum;
        
    }
    
    

        int perceptron::OR_perceptron(double x1, double x2)
    {
        double  w0 = OR_weights[0];
        double  w1 = OR_weights[1];
        double  w2 = OR_weights[3];
        
        
        double ouput;
        
        double sum = w0*1 +w1*x1+w2*x2;
        //std::cout<<"sum_OR: "<<sum;
        if(sum >0)
        {
        return 1;
        }
        
        else
        {
        return 0;
        }
        
    }
    
    
    double perceptron::innovation(double target, double output,double input)
    {
        double correction = learn_rate*(target - output)*input;
        return correction;
    
    }
    
    void perception updateWeights ( std::vector<double>&weights, double correction)
    {
        for
    
    ]
        int perceptron::XOR_perceptron(double x1, double x2, double w1)
    {
        
        double a1 = AND_perceptron(x1,negate(x2),w1);
        double a2 = AND_perceptron(negate(x1),x2,w1);
        //std::cout<<"a1: " << a1<<" a2: "<<a2;
        return (OR_perceptron(a1,a2,w1));
        
    }
    

}