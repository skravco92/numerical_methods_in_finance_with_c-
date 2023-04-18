#include "binomial_model01.h"
#include "options03.h"
#include <iostream>
#include <cmath>

int main()
{

  double S0, U, D, R;

  if(GetInputData(S0, U, D, R) == 1) return 1;

  double K;   // Strike Price
  int N;      // Steps to Expiry
              
  std::cout << "Enter Call Option Data: " << std::endl;
  GetInputData(N, K);

  std::cout  << "European Call Option Price: " << 
    PriceByCRR(S0, U, D, R, N, K, PutPayoff) << std::endl; 
  
  std::cout  << "European Put Option Data: " << 
    PriceByCRR(S0, U, D, R, N, K, PutPayoff) << std::endl; 
 
  return 0;
}

