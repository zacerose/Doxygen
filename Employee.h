/**
 * @file Employee.h
 * @author Zachary Rose
 * @date 2022-11-14
 * @brief employee class header file
 * 
 * base employee class has an ID and years worked, as well as ability to calculate pay
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * base employee class has an ID and years worked, as well as the ability to calculate pay
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief employee class
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * prints out employee information to console
 *
 * @return void
 * @post employee information printed to console
 * 
 */
  virtual void print();

/**
 * calculates the pay the employee is owed for hours worked
 *
 * @return double amount in dollars calculated for employee's work
 * 
 */
  virtual double calculatePay();

/**
 * increases employee's years worked at company, and increases their pay tremendously, as well as printing a congratulatory message to console
 *
 * @return void
 * @post years worked and pay increased, and congratulations printed to console
 * 
 */
  void anniversary();

/**
 * default constructor
 *
 * @post all data members initialized to -1
 * 
 */
  Employee();

/**
 * parameterized constructor
 *
 * @param int ID employee ID number
 * @param int years years worked at the company thus far
 * @param double hourlyRate hourly rate employee is paid
 * @param float hoursWorked hours worked during a week
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
