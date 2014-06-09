#include "unity.h"
#include "Triangle.h"
#include "CException.h"

char *testing(int side1, int side2, int side3); // function call

void setUp(void)
{
}

void tearDown(void)
{
}


/*
	Test the triangle whether it is scalene.
*/

void test_triangle_scalene(void) 
{
	char *name;
	name = testing(2, 1, 3);
	TEST_ASSERT_EQUAL_STRING("Scalene", name);
}

/*
	Test the triangle whether it is equilateral.
*/

void test_triangle_equilateral(void)
{
	char *name;	
	name = testing(2, 2, 2);
	TEST_ASSERT_EQUAL_STRING("Equilateral", name);
}

/*
	Test the triangle whether it is isoceles.
*/

void test_triangle_isoceles(void)
{
	char *name;	
	name = testing(2, 2, 3);
	TEST_ASSERT_EQUAL_STRING("Isoceles", name);

}

/*
	Error checking the triangle whether any sides of the triangle have value zero.
*/

void test_triangle_invalid_zero(void)
{
	char *name;
	name = testing(3, 0, 2);
	TEST_ASSERT_EQUAL_STRING("Invalid value", name);

}

/*
	Error checking the triangle whether any sides of the triangle have negative value.
*/ 

void test_triangle_negative_value(void)
{
	char *name;
	name = testing(3, -1, 2);
	TEST_ASSERT_EQUAL_STRING("Invalid value", name);

}

/*
	Error checking whether the sides of the triangle is balanced or not.
*/

void test_triangle_sides_value(void)
{
	char *name;
	name = testing(10,2,3);
	TEST_ASSERT_EQUAL_STRING("Invalid value", name);
}

void test_anyGivenLength_side1_given_0_side2_given_2_side3_given_1_should_return_0(void)
{
	CEXCEPTION_T err; 
	Try
	{
		TEST_ASSERT_EQUAL(0, areLengthAllStrictlyPositive(0, 2, 1));
		TEST_FAIL_MESSAGE("Should generate an exception due to side1 is 0");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success. Exception for side1 generated. Error Code: %d \n", err);
	}
}

void test_anyGivenLength_side1_given_1_side2_given_0_side3_given_3_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, areLengthAllStrictlyPositive(1, 0, 3));
		TEST_FAIL_MESSAGE("Should generate an exception due to side2 is 0");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success. Exception for side2 generated. Error Code: %d \n", err);
	}
}

void test_anyGivenLength_side1_given_1_side2_given_3_side3_given_0_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, areLengthAllStrictlyPositive(1, 3, 0));
		TEST_FAIL_MESSAGE("Should generate an exception due to side3 is 0");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success. Exception for side3 generated. Error Code: %d \n", err);
	}
}

void test_anyGivenLength_side1_given_negative_1_side2_given_3_side3_given_2_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, areLengthAllStrictlyPositive(-1, 3, 2));
		TEST_FAIL_MESSAGE("Should generate an exception due to side1 is negative value");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success. Exception for side1 generated due to negative value. Error Code: %d \n", err);
	}
}

void test_anyGivenLength_side1_given_1_side2_given_negative_3_side3_given_2_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, areLengthAllStrictlyPositive(1, -3, 2));
		TEST_FAIL_MESSAGE("Should generate an exception due to side2 is negative value");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success. Exception for side2 generated due to negative value. Error Code: %d \n", err);
	}
}

void test_anyGivenLength_side1_given_1_side2_given_3_side3_given_negative_2_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, areLengthAllStrictlyPositive(1, 3, -2));
		TEST_FAIL_MESSAGE("Should generate an exception due to side3 is negative value");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success. Exception for side3 generated due to negative value. Error Code: %d \n", err);
	}
}

void test_isTriangle_side1_is_given_1_side2_given_1_side3_given_3_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, isTriangle(1, 1, 3));
		TEST_FAIL_MESSAGE("Should generate an exception cause it is not a triangle");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE, err);
		printf("Success. Exception due to this is not a triangle. Error code: %d \n", err);
	}
}

void test_isTriangle_side1_is_given_5_side2_given_1_side3_given_3_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, isTriangle(5, 1, 3));
		TEST_FAIL_MESSAGE("Should generate an exception cause it is not a triangle");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE, err);
		printf("Success. Exception due to this is not a triangle. Error code: %d \n", err);
	}
}

void test_isTriangle_side1_is_given_5_side2_given_9_side3_given_3_should_return_0(void)
{
	CEXCEPTION_T err;
	Try
	{
		TEST_ASSERT_EQUAL(0, isTriangle(5, 9, 3));
		TEST_FAIL_MESSAGE("Should generate an exception cause it is not a triangle");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE, err);
		printf("Success. Exception due to this is not a triangle. Error code: %d \n", err);
	}
}