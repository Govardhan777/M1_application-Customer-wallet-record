/******************************************** 
Project Name:CUSTOMER WALLET RECORD.
Author: VEMULA YOGA VENKATA NAGA PAVAN SAI CHAND
*********************************************/


#include "Customer_Billing.h"
  struct account {
	char name[100];
	int acct_no;
	long mobile_no;
	char city[100];
	float balance;
  }customer[1000];
int cust_count = 0,act_no = 0, id = 10001;
int i = 0;
char ch, decision;
void main()
{
    
	    printf("<<<-----------------*-------------------->>>\n1: Add New Customer Wallet.\n");
	    printf("2: Search Existing Customer Account.\n");
        printf("3: Pay the Bills.\n");
        printf("4: Print All Customers Details.\n");
        printf("5: Top-Up Balance.\n");
        printf("6: Exit\n<<<-----------------*-------------------->>>\n");

        printf("\nselect what do you want to do ?:- ");
	    
        
    while(1){
        scanf("%c",&ch); 
        switch (ch){
            case '1':
                cust_count += 1;
                 printf("Serial number:- %d", cust_count);
                int id = createAccount(i);
                i += 1;
                printf("Your Account Number is:- %d\n\n", id);
                main();
                break;
            case '2':
                printf("Enter the Account Number:- ");
                scanf("%d", &act_no);
                searchACustomer(act_no);
                main();
                break;
            case '3':
                printf("Enter the Account Number:- ");
                scanf("%d", &act_no);
                payBill(act_no);
                main();
                break;
            case '4':
                printAllCustomers();
                main();
                break;
            case '5':
                printf("Enter Your Account Number:- ");
                scanf("%d", &act_no);
                addBalance(act_no);
                main();
                break;
            case '6':
                printf("<<<----------Records Saved Successfully<<>>Thanks For Using:):)--------->>>\n\t<<<<<------PROJECT BY PAVAN------->>>>>");
                exit(0);
                break;
        }
    }
      return;
 }
    int createAccount(int ind)
    {
          customer[ind].acct_no = id++;
          printf("\nEnter the name of the customer:- ");
          scanf("%s", customer[ind].name);
          printf("Enter Contact Number:-\t");
          scanf("%ld", &customer[ind].mobile_no);
          printf("Enter city:- ");
          scanf("%s", customer[ind].city);
          printf("How much balance you want to maintain:- ");
          scanf("%f", &customer[ind].balance);
          return customer[ind].acct_no;
      }
      void searchACustomer(int act_no)
      {
          for(int i = 0; i < cust_count; i++){
              if(customer[i].acct_no == act_no){
                  printf("Customer ID is:- %d\n", customer[i].acct_no);
                  printf("Customer name:- %s\n", customer[i].name);
                  printf("Customer mobile number:- %ld\n", customer[i].mobile_no);
                  printf("customer city name:- %s\n", customer[i].city);
                  printf("Account balance:- %.2f\n\n", customer[i].balance);
              }
          }
          return;
      }
      void payBill(int act_no)
      {
          float amount = 0;
          printf("Enter the bill amount to Pay:- ");
          scanf("%f", &amount);
          for(int i = 0; i < cust_count; i++){
              if (customer[i].acct_no == act_no){
                  if (customer[i].balance >= amount) {
                      customer[i].balance -= amount;
                      printf("Updated Balance:- %.2f\n", customer[i].balance);
                  } else {
                      printf("Add Balance to your Wallet:- ");
                      addBalance(act_no);
                  }
              }
          }
          return;
      }
      void addBalance(int act_no)
      {
          float amount = 0;
          printf("Enter the amount to add for your Wallet:- ");
          scanf("%f", &amount);
          for(int i =0; i < cust_count; i++){
              if (customer[i].acct_no == act_no){
                  customer[i].balance += amount;
                  printf("Updated account balance:- %.2f\n\n", customer[i].balance);
              }
          }
          return;
      }
      void printAllCustomers() {
          for (int i = 0; i < cust_count ; i++ )
          {
              printf("CUSTOMER-- %d\n", (i+1));
              printf("\t Customer ID:- %d\n", customer[i].acct_no);
              printf("\t customer name:- %s\n", customer[i].name);
              printf("\t customer mobile:- %ld\n", customer[i].mobile_no);
              printf("\t Customer city:- %s\n", customer[i].city);
              printf("\t Customer Balance:- %.2f\n", customer[i].balance);
          }
          return;
      }
