// g++ sin0.cpp -o sin0.o
#include <iostream>
#include <cmath>
using namespace std;
double round4(double var)
{
    double value = (int)(var * 10000 + 0.0005);
    return (double)(value / 10000;)
}
int main (){
double PI=3.14159265;
double c, rad, t, sr, cr;// theta in terms of degrees
  for ( t=0 ; t<=360 ; t = t + 15)
  {
    rad = t * (PI / 180);
    sr = sin(rad);
    cr = cos(rad);
    c = sr*sr + cr*cr;
    cout <<t<<"\t\t"<<cr<<"\t\t"<<sr<<"\t\t"<<c<<"\n";
  }
  return 0;
}
