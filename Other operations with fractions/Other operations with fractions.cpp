#include <iostream>
#include <windows.h>
#include "Fractions.h"

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   int numerator1, determinator1, numerator2, determinator2, minus_plus;
   
    std::cout << "Введите числитель дроби 1:\n";
    std::cin >> numerator1;
    std::cout << "Введите знаменатель дроби 1:\n";
    std::cin >> determinator1;


    std::cout << "Введите числитель дроби 2:\n";
    std::cin >> numerator2;
    std::cout << "Введите знаменатель дроби 2:\n";
    std::cin >> determinator2;

    Fractions f1(numerator1, determinator1);
    Fractions f2(numerator2, determinator2);

    Fractions sum = f1 + f2;
    Fractions residual= f1 - f2;
    Fractions multiplication= f1 * f2;
    Fractions division= f1 / f2;
    Fractions dec_multi= ++f1 * f2;
    Fractions expression_some = f1-- * f2;
    Fractions expression_some1 = f1++ / f2;
    Fractions expression_some2 = --f1 * f2;


    std::cout <<"\n" << f1 << " + " << f2 << " = " << sum << "\n";
    std::cout  << f1 << " - " << f2 << " = " << residual << "\n";
    std::cout << f1 << " * " << f2 << " = " << multiplication << "\n";
    std::cout << f1 << " / " << f2 << " = " << division << "\n\n";
    std::cout << "++" << f1 << " * " << f2 << " = " << dec_multi << "\n";
    ++f1;
    std::cout << "Значение первой дроби = " << f1 << "\n\n";
    std::cout  << f1 <<"-- " << " * " << f2 << " = " << expression_some << "\n";
    f1--;
    std::cout << "Значение первой дроби = " << f1 << "\n\n";
    std::cout << f1 << "++ " << " / " << f2 << " = " << expression_some1 << "\n";
    f1++;
    std::cout << "Значение первой дроби = " << f1 << "\n\n";
    std::cout<<"--" << f1 << " * " << f2 << " = " << expression_some2 << "\n";
    --f1;
    std::cout << "Значение первой дроби = " << f1 << "\n\n";
    return 0;
}