#ifndef binomial_model01_h
#define binomial_model01_h 

// compute risk-neutral probability 
double RiskNeutralProb(double U, double D, double R);

// compute stock price at given node
double S(double S0, double U, double D, int n, int i);

// handle entering, displaying and validating model data
int GetInputData(double& S0, double&  U, double& D, double& R);

#endif
