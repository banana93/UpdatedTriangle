/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_triangle_scalene(void);
extern void test_triangle_equilateral(void);
extern void test_triangle_isoceles(void);
extern void test_triangle_invalid_zero(void);
extern void test_triangle_negative_value(void);
extern void test_triangle_sides_value(void);
extern void test_anyGivenLength_side1_given_0_side2_given_2_side3_given_1_should_return_0(void);
extern void test_anyGivenLength_side1_given_1_side2_given_0_side3_given_3_should_return_0(void);
extern void test_anyGivenLength_side1_given_1_side2_given_3_side3_given_0_should_return_0(void);
extern void test_anyGivenLength_side1_given_negative_1_side2_given_3_side3_given_2_should_return_0(void);
extern void test_anyGivenLength_side1_given_1_side2_given_negative_3_side3_given_2_should_return_0(void);
extern void test_anyGivenLength_side1_given_1_side2_given_3_side3_given_negative_2_should_return_0(void);
extern void test_isTriangle_side1_is_given_1_side2_given_1_side3_given_3_should_return_0(void);
extern void test_isTriangle_side1_is_given_5_side2_given_1_side3_given_3_should_return_0(void);
extern void test_isTriangle_side1_is_given_5_side2_given_9_side3_given_3_should_return_0(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_Triangle.c";
  UnityBegin();
  RUN_TEST(test_triangle_scalene, 20);
  RUN_TEST(test_triangle_equilateral, 31);
  RUN_TEST(test_triangle_isoceles, 42);
  RUN_TEST(test_triangle_invalid_zero, 54);
  RUN_TEST(test_triangle_negative_value, 66);
  RUN_TEST(test_triangle_sides_value, 78);
  RUN_TEST(test_anyGivenLength_side1_given_0_side2_given_2_side3_given_1_should_return_0, 85);
  RUN_TEST(test_anyGivenLength_side1_given_1_side2_given_0_side3_given_3_should_return_0, 100);
  RUN_TEST(test_anyGivenLength_side1_given_1_side2_given_3_side3_given_0_should_return_0, 115);
  RUN_TEST(test_anyGivenLength_side1_given_negative_1_side2_given_3_side3_given_2_should_return_0, 130);
  RUN_TEST(test_anyGivenLength_side1_given_1_side2_given_negative_3_side3_given_2_should_return_0, 145);
  RUN_TEST(test_anyGivenLength_side1_given_1_side2_given_3_side3_given_negative_2_should_return_0, 160);
  RUN_TEST(test_isTriangle_side1_is_given_1_side2_given_1_side3_given_3_should_return_0, 175);
  RUN_TEST(test_isTriangle_side1_is_given_5_side2_given_1_side3_given_3_should_return_0, 190);
  RUN_TEST(test_isTriangle_side1_is_given_5_side2_given_9_side3_given_3_should_return_0, 205);

  return (UnityEnd());
}