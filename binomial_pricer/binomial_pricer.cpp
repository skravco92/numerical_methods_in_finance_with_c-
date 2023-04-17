#include <iostream>
#include <cmath>

int main()
{
  double S0, U, D, R;
  
// entering data 
  std::cout << "Enter S0: "; std::cin >> S0;
  std::cout << "Enter U: "; std::cin >> U;
  std::cout << "Enter D: "; std::cin >> D;
  std::cout << "Enter R: "; std::cin >> R;
  std::cout << std::endl;

// validate input
  if (S0 <= 0.0 || U <= -1.0 || D <= -1.0 || U <= D|| R <= -1.0 )
  {
  std::cout << "Illegal Data Ranges" << std::endl;
  std::cout << "Terminating Program" << std::endl;
  return 1;
  }
// chekings for arbitrage
  if ( R >= U || R <= D )
  {
  std::cout << "Arbitrage Exists" << std::endl;
  std::cout << "Terminating Program" << std::endl;
  return 1;
  }
  
  std::cout << "Input Data Accepted" << std::endl;
  std::cout << "No Arbitrage Detected" << std::endl;
  std::cout << std::endl;
  
// compute risk-neutral probability
  std::cout << "q = " << (R - D) / (U - D) << std::endl;

// compute stock price at node n=3, i=2
  int n = 3; int i = 2;
  std::cout << "n = " << n << std::endl;
  std::cout << "i = " << i << std::endl;
  std::cout << "S(n, i) = " << S0*pow(1 + U, i)*pow(1+D, n-i) << std::endl;

  return 0;
}

