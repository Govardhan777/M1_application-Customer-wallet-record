#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

 #include<stdio.h>
 #include <string.h>
 #include<stdlib.h>

/**
*  Creates an account for a new customer
* @return The accunt number of the customer
*/
 int createAccount();

/**
*  Prints the information of the customer based on their account number
* @param[in] Account_number
*/
void searchACustomer(int act_no);

/**
*  Pays the bill of the customer from the e-wallet
* @param[in] account_number
*/
 void payBill(int act_no);


/**
* Prints the information of all the customers
*/
void printAllCustomers();

/**
*  Adds amount into the customers e-wallet
* @param[in] account_number
*/
 void addBalance(int act_no);

#endif
