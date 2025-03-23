#include <iostream>
#include <fstream>
#include <cmath>
// declaration
float sumk(int k);


int main(void) {
    std::ofstream outfile;
    outfile.open("data.txt");
    for(int m=1; m<=1000; m++)
    {
        float val = sumk(m);
        outfile <<m<<"\t"<<val<<std::endl;
    }
    outfile.close();
    return 0;
}


float sumk(int k){
    float result = 0.0;
    float sum=0.0;
    for(int i=1; i<=k; i++)
    {
      sum+=0.1;
    }

    result = std::fabs(k/10.0-sum);
    return result;
}