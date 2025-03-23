#include <iostream>
#include <cmath>
#include "mainsum.h"


int main(int arg, char **argv) {
    std::cout.precision(6); std::cout.setf(std::ios::scientific);
    for (int ii=1; ii<=10000; ++ii) {
        float sum1 = sumup(ii);
        float sum2 = sumdown(ii);
        std::cout << ii << "\t" << sum1 << "\t" << sum2 
        << "\t" << std::fabs(sum1-sum2) << std::endl;
    }

    return 0;

}

