#include "binomial_model01.h"
#include <iostream>
#include <cmath>

int main()
{

  double S0, U, D, R;

  if(GetInputData(S0, U, D, R) == 1) return 1;

  // compute risk-neutral probability 
  std::cout << "q = "<< RiskNeutralProb(U, D, R) << std::endl;
  
  // compute stock price at node n=3, i=2
  int n = 3; int i = 2;
  std::cout << "n = " << n << std::endl;
  std::cout << "i = " << i << std::endl;
  std::cout << "S(n, i) = " << S(S0, U, D, n, i) << std::endl;

  return 0;
}

