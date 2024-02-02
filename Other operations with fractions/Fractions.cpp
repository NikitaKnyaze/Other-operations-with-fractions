#include "Fractions.h"

int Fractions::GCD(int a, int b) {
   return b ? GCD(b, a % b) : a;
};

int Fractions::LCM(int a, int b) {
   return a / GCD(a, b) * b;
};


Fractions::Fractions(int a, int b) {
   numerator = a; determinator = b;
   if ((i = GCD(numerator, determinator)) != 1) {
      numerator /= i;
      determinator /= i;
   }
};

int Fractions::converting_fractions(Fractions& other) {
   return LCM(determinator, other.determinator);
};

   Fractions Fractions::operator+(Fractions& other) {
      return Fractions((numerator * converting_fractions(other) / determinator + other.numerator * converting_fractions(other) / other.determinator), converting_fractions(other));
   }

   Fractions Fractions::operator-(Fractions& other) {
      return Fractions((numerator * converting_fractions(other) / determinator - other.numerator * converting_fractions(other) / other.determinator), converting_fractions(other));
   };

   Fractions Fractions::operator*(Fractions& other) {
      return Fractions(numerator * other.numerator, determinator * other.determinator);
   };

   Fractions Fractions::operator/(Fractions& other) {
      return Fractions(numerator * other.determinator, determinator * other.numerator);
   };

   Fractions Fractions::operator++() {
      numerator += determinator;  return *this;
   };

   Fractions Fractions::operator--() {
      numerator -= determinator;  return *this;
   };

   Fractions Fractions::operator--(int) {
      Fractions c = *this;
      --(*this);
      return c;
   };

  Fractions  Fractions::operator++(int) {
     Fractions c = *this;
     ++(*this);
     return c;
   };

   int Fractions::get_numerator() { return numerator; };
   int  Fractions::get_determinator() { return determinator; };

   std::ostream& operator<<(std::ostream& stream, Fractions& other) {
      stream << other.get_numerator();
      stream << "/";
      stream << other.get_determinator();
      return stream;
   }