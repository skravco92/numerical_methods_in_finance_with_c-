#ifndef options02_h
#define options02_h 

// entering and displaying option data 
int GetInputData(int* pointerN, double *pointerK);

// pricing European Option
double PriceByCRR(double S0, double U, double D, double R, int N, double K);

// computing call payoff 
double CallPayoff(double z, double K);

#endif
