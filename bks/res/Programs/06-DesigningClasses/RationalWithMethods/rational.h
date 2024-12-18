/*
 * File: rational.h
 * ----------------
 * This interface exports a class for representing rational numbers.
 */

#ifndef _rational_h
#define _rational_h

#include <string>
#include <iostream>

/*
 * Class: Rational
 * ---------------
 * The Rational class is used to represent rational numbers, which
 * are defined to be the quotient of two integers.
 */

class Rational {

public:

/*
 * Constructor: Rational
 * Usage: Rational zero;
 *        Rational num(n);
 *        Rational r(x, y);
 * ------------------------
 * Creates a Rational object.  The default constructor creates the
 * rational number 0.  The single-argument form creates a rational
 * equal to the specified integer, and the two-argument form creates
 * a rational number corresponding to the fraction x/y.
 */

   Rational();
   Rational(int n);
   Rational(int x, int y);

/*
 * Method: add
 * Usage: r1.add(r2);
 * ------------------
 * Creates a new Rational that is equal to r1 + r2.
 */

Rational add(Rational r2);

/*
 * Method: subtract
 * Usage: r1.subtract(r2);
 * -----------------------
 * Creates a new Rational that is equal to r1 - r2.
 */

Rational subtract(Rational r2);

/*
 * Method: multiply
 * Usage: r1.multiply(r2);
 * -----------------------
 * Creates a new Rational that is equal to r1 * r2.
 */

Rational multiply(Rational r2);

/*
 * Method: divide
 * Usage: r1.divide(r2);
 * ---------------------
 * Creates a new Rational that is equal to r1 / r2.
 */

Rational divide(Rational r2);

/*
 * Method: toString()
 * Usage: string str = r.toString();
 * ---------------------------------
 * Returns the string representation of this rational number.
 */

   std::string toString();

private:

/* Instance variables */

   int num;    /* The numerator of this Rational object   */
   int den;    /* The denominator of this Rational object */

};

/*
 * Operator: <<
 * Usage: cout << rat;
 * -------------------
 * Extends the << operator to support the Rational class.
 */

std::ostream & operator<<(std::ostream & os, Rational rat);

#endif
