#ifndef PERCEPTRON_H_
#define PERCEPTRON_H_

#include <vector>

namespace KHMNDU005
{
    class perceptron
    {	
        public:
            
            const double learn_rate = 0.1;
            std::vector<double> AND1_weights(3);
            std::vector<double> AND2_weights(3)
            stdd::vector<double> OR_weights(3);
            
            int negate(int x);
            
            double perceptron(double x1, double x2,double w1);
            int OR_perceptron (double x1, double x2,double w1);
            int XOR_perceptron(double x1, double x2,double w1);
            
            void readData();
            
    };

}

#endif /* PERCEPTRON_H_*/