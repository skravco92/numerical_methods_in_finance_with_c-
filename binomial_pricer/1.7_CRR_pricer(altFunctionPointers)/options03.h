#ifndef options02_h
#define options02_h 

// entering and displaying option data 
int GetInputData(int& N, double& K);

// pricing European Option
double PriceByCRR(double S0, double U, double D, double R, int N, double K,
    double (*Payoff)(double z, double K));

// computing call payoff 
double CallPayoff(double z, double K);

// computing pit payoff
double PutPayoff(double z, double K);

#endif
