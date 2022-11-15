/**
 * @file Supervisor.h
 * @author Zachary Rose
 * @date 2022-11-15
 * @brief Supervisor header file
 * 
 * the supervisor is an employee with the added responsibilities of taking care of other employees and increased pay
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * the supervisor is an employee with the added responsibilities of taking care of other employees and increased pay
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief Supervisor class expanding on Employee subclass
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints out supervisor information to console, including number of employees supervised
 *
 * @return void 
 * 
 */
  void print();

/**
 * calculates the amount of pay the supervisor is owed
 *
 * @return double pay supervisor is owed in dollars
 * 
 */
  double calculatePay();

/**
 * default constructor, number of supervised employees defaults to -1
 *
 * 
 */
  Supervisor();

/**
 * parameterized constructor, data members set to entered values
 *
 * @param int ID ID of supervisor
 * @param int years years worked at the company
 * @param double hourlyRate pay per hour worked
 * @param float hoursWorked hours worked in a pay period
 * @param int numSupervised number of employees supervisor is responsible for, slightly increases pay
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
