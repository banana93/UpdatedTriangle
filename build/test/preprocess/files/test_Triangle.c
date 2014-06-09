#include "unity.h"
#include "Triangle.h"
#include "CException.h"


char *testing(int side1, int side2, int side3);



void setUp(void)

{

}



void tearDown(void)

{

}













void test_triangle_scalene(void)

{

 char *name;

 name = testing(2, 1, 3);

 UnityAssertEqualString((const char*)("Scalene"), (const char*)(name), (((void *)0)), (_U_UINT)24);

}











void test_triangle_equilateral(void)

{

 char *name;

 name = testing(2, 2, 2);

 UnityAssertEqualString((const char*)("Equilateral"), (const char*)(name), (((void *)0)), (_U_UINT)35);

}











void test_triangle_isoceles(void)

{

 char *name;

 name = testing(2, 2, 3);

 UnityAssertEqualString((const char*)("Isoceles"), (const char*)(name), (((void *)0)), (_U_UINT)46);



}











void test_triangle_invalid_zero(void)

{

 char *name;

 name = testing(3, 0, 2);

 UnityAssertEqualString((const char*)("Invalid value"), (const char*)(name), (((void *)0)), (_U_UINT)58);



}











void test_triangle_negative_value(void)

{

 char *name;

 name = testing(3, -1, 2);

 UnityAssertEqualString((const char*)("Invalid value"), (const char*)(name), (((void *)0)), (_U_UINT)70);



}











void test_triangle_sides_value(void)

{

 char *name;

 name = testing(10,2,3);

 UnityAssertEqualString((const char*)("Invalid value"), (const char*)(name), (((void *)0)), (_U_UINT)82);

}



void test_anyGivenLength_side1_given_0_side2_given_2_side3_given_1_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((areLengthAllStrictlyPositive(0, 2, 1))), (((void *)0)), (_U_UINT)90, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception due to side1 is 0"), (_U_UINT)91);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception for side1 generated. Error Code: %d \n", err);

 }

}



void test_anyGivenLength_side1_given_1_side2_given_0_side3_given_3_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((areLengthAllStrictlyPositive(1, 0, 3))), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception due to side2 is 0"), (_U_UINT)106);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)110, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception for side2 generated. Error Code: %d \n", err);

 }

}



void test_anyGivenLength_side1_given_1_side2_given_3_side3_given_0_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((areLengthAllStrictlyPositive(1, 3, 0))), (((void *)0)), (_U_UINT)120, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception due to side3 is 0"), (_U_UINT)121);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception for side3 generated. Error Code: %d \n", err);

 }

}



void test_anyGivenLength_side1_given_negative_1_side2_given_3_side3_given_2_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((areLengthAllStrictlyPositive(-1, 3, 2))), (((void *)0)), (_U_UINT)135, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception due to side1 is negative value"), (_U_UINT)136);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)140, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception for side1 generated due to negative value. Error Code: %d \n", err);

 }

}



void test_anyGivenLength_side1_given_1_side2_given_negative_3_side3_given_2_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((areLengthAllStrictlyPositive(1, -3, 2))), (((void *)0)), (_U_UINT)150, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception due to side2 is negative value"), (_U_UINT)151);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)155, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception for side2 generated due to negative value. Error Code: %d \n", err);

 }

}



void test_anyGivenLength_side1_given_1_side2_given_3_side3_given_negative_2_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((areLengthAllStrictlyPositive(1, 3, -2))), (((void *)0)), (_U_UINT)165, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception due to side3 is negative value"), (_U_UINT)166);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception for side3 generated due to negative value. Error Code: %d \n", err);

 }

}



void test_isTriangle_side1_is_given_1_side2_given_1_side3_given_3_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((isTriangle(1, 1, 3))), (((void *)0)), (_U_UINT)180, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception cause it is not a triangle"), (_U_UINT)181);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)185, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception due to this is not a triangle. Error code: %d \n", err);

 }

}



void test_isTriangle_side1_is_given_5_side2_given_1_side3_given_3_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((isTriangle(5, 1, 3))), (((void *)0)), (_U_UINT)195, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception cause it is not a triangle"), (_U_UINT)196);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)200, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception due to this is not a triangle. Error code: %d \n", err);

 }

}



void test_isTriangle_side1_is_given_5_side2_given_9_side3_given_3_should_return_0(void)

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((isTriangle(5, 9, 3))), (((void *)0)), (_U_UINT)210, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Should generate an exception cause it is not a triangle"), (_U_UINT)211);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)215, UNITY_DISPLAY_STYLE_INT);

  printf("Success. Exception due to this is not a triangle. Error code: %d \n", err);

 }

}
