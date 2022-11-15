/**
 * @file Officer.h
 * @author Zachary Rose
 * @date 2022-11-15
 * @brief officer header file
 * 
 * the officer is a type of employee with an added evilness and a pay befitting their hard work
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * the officer is a type of employee with an added evilness and a pay befitting their hard work
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief Officer class expanding on Employee subclass
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * prints out officer information to console
 *
 * @return void 
 * @post officer information printed to console
 * 
 */
  void print();

/**
 * calculates amount of pay officer is owed
 *
 * @return double pay officer is owed in dollars
 * 
 */
  double calculatePay();

/**
 * default constructor, evilness is set to 500
 *
 * 
 */
  Officer();

/**
 * parameterized constructor, data members set to entered values
 *
 * @param int ID ID of officer
 * @param int years years worked at the company
 * @param double hourlyRate pay per hour worked
 * @param float hoursWorked hours worked in a pay period
 * @param double evilness blackness of the heart, more evilness means greater pay
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
