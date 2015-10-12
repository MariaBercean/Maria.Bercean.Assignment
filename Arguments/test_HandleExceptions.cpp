#include <vector>
#include <string>
#include <iostream>
#include <sstream>

#include "gtest/gtest.h"

#include "Arguments.h"

using namespace std;

Arguments makeObject()
{
	char * arguments[3] = {(char * )"AppName", (char * )"Argument1", (char * )"Argument2"};
	Arguments object(3, arguments);	
	return object;
}

TEST(Constructor, CatchIsValid)
{
	char * args[1] = {(char *) "ceva"}; 
    try {
			Arguments object(-1, args);
    }
	
    catch(...) {
       SUCCEED() << "error: constructing argument object...";
    }
}

TEST(Constructor, TryIsValid)
{
	char * args[1] = {(char *) "ceva"}; 
	try{
		
			Arguments object(1, args);
	}
	catch(...){
		FAIL() << "error: constructing argument object...";
	}
}

TEST(AssignmentOperator, CatchIsValid)
{
	Arguments object = makeObject();
	try{
			FAIL() << object[3];
	}
	catch(...){
		SUCCEED() << "Out of range error occured ...";
	}
}

TEST(AssignmentOperator, TryIsValid)
{
	Arguments object = makeObject();
	try{
			SUCCEED() << object[1];
			
	}
	catch(...){
		FAIL() << "Out of range error occured ...";
	}
}