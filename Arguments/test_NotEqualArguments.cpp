#include <vector>
#include <string>
#include "gtest/gtest.h"

#include "Arguments.h"

Arguments createObject()
{
	char * arguments[3] = {(char * )"AppName", (char * )"Argument1", (char * )"Argument2"};
	Arguments object(3, arguments);	
	return object;
}

TEST(CountNotEqual, ValidData)
{
	Arguments object = createObject();
	ASSERT_NE(object.count(), 3);
}