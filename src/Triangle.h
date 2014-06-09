#ifndef Triangle_H
#define Triangle_H


int areLengthAllStrictlyPositive(int side1, int side2, int side3);
int isTriangle(int side1, int side2, int side3);
typedef enum {ERR_NO_ERROR, ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, ERR_NOT_TRIANGLE} ErrorCode;

			 
#endif // Triangle_H
