#include <vector>
#include <string>
#include "gtest/gtest.h"

#include "Arguments.h"

Arguments initializeObject()
{
	char * arguments[3] = {(char * )"AppName", (char * )"Argument1", (char * )"Argument2"};
	Arguments object(3, arguments);	
	return object;
}

TEST(Constructor, ValidData)
{
	Arguments object = initializeObject();
	ASSERT_EQ(object.appName(), "AppName");
	ASSERT_EQ(object[0], "Argument1");
	ASSERT_EQ(object[1], "Argument2");
}

TEST(CoppyConstructor, ValidData)
{
	Arguments object = initializeObject();
	Arguments copyObject(object);
	ASSERT_EQ(copyObject.appName(), object.appName());
	ASSERT_EQ(copyObject[0],object[0]);
	ASSERT_EQ(copyObject[1],object[1]);
}

TEST(AssignmentOperator, ValidData)
{
	Arguments object = initializeObject();
	ASSERT_EQ(object[0], "Argument1");
	ASSERT_EQ(object[1], "Argument2");
}

TEST(AssignmentOperatorObject, ValidData)
{
	char * args[1] = {(char*)"ceva"};
	Arguments object = initializeObject();
	Arguments copyObject(1, args);
	copyObject = object;
	ASSERT_EQ(copyObject.appName(), object.appName());
	ASSERT_EQ(copyObject[0], object[0]);
	ASSERT_EQ(copyObject[1], object[1]);
}

TEST(AppName, ValidData)
{
	Arguments object = initializeObject();
	ASSERT_EQ(object.appName(), "AppName");
}

TEST(CountIsEqual, ValidData)
{
	Arguments object = initializeObject();
	ASSERT_EQ(object.count(), 2);
}
