#include <iostream>
#include <cmath>


int main(){

double temp;
char unit;



std::cout << "*****Temperature conversion*****\n";

std::cout << "F - Fahrenheit\n";

std::cout << "C - Celsius\n";

std::cout << "Which unit would you like to use?";

std::cin >> unit;

if(unit == 'F' || unit == 'f'){
    std::cout << "Enter the temperature in celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Temperature is: " << temp << "F\n";

}
else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter the temperature in fahrenheit: ";
    std::cin >> temp;

    temp = (temp - 32) / 1.8;
    std::cout << "Temperature is: " << temp << "C\n";
}
else 
std::cout << "Bro get your shit together and choose either C - for Celsius or F for Fahrenheit... \n";



std::cout << "**********************************\n";


return 0;

}



