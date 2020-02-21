#include <iostream>
using namespace std;

class Currency {
  private:
  double yen = 1;
  double euro = 2;
  double peso = 3;
  double usd;
  double result;
  
  public:
  void setUsd(double u) {
    usd = u;
  }

  double change(double c) {
    if(c == 'Y' || c == 'y') { result = usd * yen; }
    if(c == 'P' || c == 'p') { result = usd * peso; }
    if(c == 'E' || c == 'e') { result = usd * euro; }
    return result;
  }
};