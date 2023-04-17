#ifndef options01_h
#define options01_h 

// entering and displaying option data 
int GetInputData(int& N, double& K);

// pricing European Option
double PriceByCRR(double S0, double U, double D, double R, int N,double K);

// computing call payoff 
double CallPayoff(double z, double K);

#endif
