#include <iostream>
#include <math.h>
using namespace std;
int main()
{
double x, y, z;
std::cout << "Enter x = ";
std::cin >> x;
std::cout << "Enter y = ";
std::cin >> y;
std::cout << "Enter z = ";
std::cin >> z;

double S;

S = ((x * ((y+x)*(y+x)))/(y+z)) * (((z * (x-y))/ (x+y)) + ((x * (y+z))/ (x+z)));

std::cout << " S = "<< S << endl;
return 0;
}