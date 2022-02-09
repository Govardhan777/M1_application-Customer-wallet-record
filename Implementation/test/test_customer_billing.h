#include "unity.h"
#include "Customer_billing.h"

/* Modify these two lines according to the project */
#include "Customer_billing.h"
#define PROJECT_NAME    "Customer_billing"

/* Prototypes for all the test functions */
void test_searchACustomer(void);
void test_payBill(void);
void test_printAllCustomers(void);
void test_addBalance(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_searchACustomer);
  RUN_TEST(test_payBill);
  RUN_TEST(test_printAllCustomers);
  RUN_TEST(test_addBalance);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_searchACustomer(void) {
  TEST_ASSERT_EQUAL(void, searchACustomer(1001));
  
}

void test_payBill(void) {
  TEST_ASSERT_EQUAL(void, payBill(1001));
}

void test_printAllCustomers(void) {
  TEST_ASSERT_EQUAL(void, printAllCustomers());
}

void test_addBalance(void) {
  TEST_ASSERT_EQUAL(void, addBalance());
}
