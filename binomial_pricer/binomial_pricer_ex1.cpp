#include <iostream>
#include <cmath>

int main()
{
  double S0, U, D, R;
  int n, i;

// entering data 
  std::cout << "Enter (Spot Price) S0: "; std::cin >> S0;
  std::cout << "Enter (Up Return) U: "; std::cin >> U;
  std::cout << "Enter (Down Return) D: "; std::cin >> D;
  std::cout << "Enter (Risk Free Return) R: "; std::cin >> R;
  std::cout << "Enter (Discrete Time Step) n: "; std::cin >> n;
  std::cout << "Enter (Node in the Binomial Tree) i: "; std::cin >> i;
  std::cout << std::endl;

// validate input
  if (S0 <= 0.0 || U <= -1.0 || D <= -1.0 || U <= D|| R <= -1.0 )
  {
  std::cout << "Illegal Data Ranges" << std::endl;
  std::cout << "Terminating Program" << std::endl;
  return 1;
  }
// validate the lack of arbitrage
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
  std::cout << "Risk-Neutral Probability: q = " << (R - D) / (U - D) << std::endl;

// compute stock price at given node
  std::cout << "S(n, i) = " << S0*pow(1 + U, i)*pow(1+D, n-i) << std::endl;

  return 0;
}

