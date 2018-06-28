#include "unity.h"
#include "Exception.h"
#include "CException.h"
#include "CExceptionConfig.h"
#include <stdio.h>
#include <stdarg.h>
#include <malloc.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void xtest_Exception_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement Exception");
}

//names is array 3 of pionters to char
char * names[] = {
	"Ali",
	"David",
	"Ah Beng",
	"Sally"
};
/*
//doing printf with throwError 
void throwError(int errorCode, char * format, ...){
	va_list valist;
	char *buffer;
	int neededSize;
	Exception *ex = (Exception *)malloc(sizeof(Exception));
	ex->errorCode = errorCode;
	
	va_start(valist, format);
	neededSize = vsnprintf(NULL,0,format, valist )+1;
	buffer = malloc(neededSize);
	vsnprintf(buffer, neededSize,format, valist );
	va_end(valist);
	ex->errorMsg = buffer;
	Throw(ex);	
}
*/
/*
char *getName(int index){
	if(index >= 4 || index < 0 ) {
	//Throw("Error Out of bound of the array.");
	throwError(3, "Error ...%d",index);
	}
	return names[index];
}
*/
/*
void test_getName_Given_minus_1_expect_ERR_OUT_OF_BOUND(void){
	CEXCEPTION_T e;
	char *name;
	
	
Try{
	name = getName(-1);
	TEST_FAIL_MESSAGE("Expected ERR_OUT_OF_BOUND to be thrown, but none.");
}Catch(e) {
	printf("Under test_getName_Given_minus_1_expect_ERR_OUT_OF_BOUND");
	printf("\t%s",e);
}
}
*/
/*
int add(int num, ...){
	va_list valist;
	int i ,sum = 0;
	
	va_start(valist, num);
	for(i =0 ; i < num; i++){
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return sum;
}
*/
/*
void test_add_given_1_2_3_4_5_expect_15(void){
	int result = add(5,1,2,3,4,5);
	
	TEST_ASSERT_EQUAL(14,result);
	
}
*/
/*
void test_add_given_9_8_7_expect_15(void){
	int result = add(3,9,8,7);
	
	TEST_ASSERT_EQUAL(25,result);
	
}
*/
/*
void throwError(char *msg, int errorCode){
	//static Exception exceprion = {3, "Error ...%d",index}
	Exception *ex = (Exception *)malloc(sizeof(Exception));
	ex->errorCode = errorCode;
	ex->errorMsg = msg;
	Throw(ex);
}
*/

/*
void test_printfAllNumber(void){
	printfAllNumber("%f , %d, %x , %s",1234.56789, 654217,255, "Ooi" );
}
*/

/*
void test_getName_Given_4_expect_ERR_OUT_OF_BOUND(void){
	CEXCEPTION_T e;
	char *name;
	
Try{
	name = getName(4);
	TEST_FAIL_MESSAGE("Expected ERR_OUT_OF_BOUND to be thrown, but none.");
}Catch(e) {
	printf("Under test_getName_Given_4_expect_ERR_OUT_OF_BOUND");
	printf("\t%s",e);
}		
}
*/
/*
void test_getName_Given_1_expect_David(void){
	CEXCEPTION_T e;
	char *name;
	
Try{
	name = getName(1);
	TEST_ASSERT_EQUAL_STRING("David", name);
}Catch(e) {
	TEST_FAIL_MESSAGE("Expected not to be thrown, but received one.");
}		
}
*/