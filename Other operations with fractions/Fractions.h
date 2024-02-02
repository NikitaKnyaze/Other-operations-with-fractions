#pragma once
#include <iostream>

class Fractions {
private:
   int numerator{}, determinator{}, i;

   int GCD(int a, int b);

   int LCM(int a, int b);

public:
   Fractions(int a, int b);

   int converting_fractions(Fractions& other);

   Fractions operator+(Fractions& other);

   Fractions operator-(Fractions& other);

   Fractions operator*(Fractions& other);

   Fractions operator/(Fractions& other);

   Fractions operator++();

   Fractions operator++(int);

   Fractions operator--();

   Fractions operator--(int);

   int get_numerator();
   int  get_determinator();
};

std::ostream& operator<<(std::ostream& stream, Fractions& other);