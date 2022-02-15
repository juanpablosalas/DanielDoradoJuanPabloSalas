#include <iostream>
#include <fstream>
#include <math.h>

double f(double x){
    return exp(-x*x);
}

double f_prime(double x){
    double h = 0.01;
    return (f(x+h)-f(x-h))/(2*h);
}


int main(){

	std::ofstream *File; // Definimos apuntador

	File = new std::ofstream[2]; // Reservamos memoria

	File[0].open( "derivada.dat", std::ofstream::trunc ); // Abrir y dejar listo para escribir

	std::cout << File  << std::endl;

    double c = -20.;
    double h = 0.01;

    while (c<20.){
        File[0] << c << " " << f_prime(c) << std::endl;
        c = c+h;
    }


	File[0].close();

	return 0;
}