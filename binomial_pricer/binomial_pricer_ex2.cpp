#include <iostream>
#include <cmath>
  
// compute risk-neutral probability 
double RiskNeutralProb(double U, double D, double R)
{
  return (R - D) / (U - D);
}

// compute stock price at given node
double S(double S0, double U, double D, int n, int i)
{
  return S0*pow(1 + U, i)*pow(1+D, n-i);
}

// handle entering, displaying and validating model data
int GetInputData(double& S0, double&  U, double& D, double& R) 
// entering data 
{
  std::cout << "Enter (Spot Price) S0: "; std::cin >> S0;
  std::cout << "Enter (Up Return) U: "; std::cin >> U;
  std::cout << "Enter (Down Return) D: "; std::cin >> D;
  std::cout << "Enter (Risk Free Return) R: "; std::cin >> R;
  std::cout << std::endl;

// validate user input
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

  return 0;
}

// swap methodology by reference 
  void Interchange(double& x, double& y)
{
  double temp = x;
  x = y;
  y = temp;
}


int main()
{

  double S0, U, D, R;

  if(GetInputData(S0, U, D, R) == 1) return 1;

  Interchange(U, D);
  // compute risk-neutral probability 
  std::cout << "q = "<< RiskNeutralProb(U, D, R) << std::endl;
  
  // compute stock price at node n=3, i=2
  int n = 3; int i = 2;
  std::cout << "n = " << n << std::endl;
  std::cout << "i = " << i << std::endl;
  std::cout << "S(n, i) = " << S(S0, U, D, n, i) << std::endl;

  return 0;
}

