#make clean from my computer works with rm
RM = rm

CPPTOOL = g++
CPPFLAGS = -Wall

CPP = $(CPPTOOL) $(CPPFLAGS) -c
LINK = $(CPPTOOL) -o

GTEST_DIR=C:\Users\maria.bercean\Utils\gtest-1.7.0\gtest-1.7.0

GTEST_LIB=$(GTEST_DIR)\make\gtest_main.a

GTEST_INC=-isystem $(GTEST_DIR)\include

TESTS=\
	test_Arguments.o\
	test_NotEqualArguments.o\
	test_HandleExceptions.o

TESTSCPP = \
		test_Arguments.cpp\
		test_NotEqualArguments.cpp
	
all: main.exe test.exe

test.exe: Arguments.o $(TESTS) $(GTEST_LIB)
	$(CPPTOOL) -o test.exe $(TESTS) Arguments.o $(GTEST_LIB)

main.exe: main.o Arguments.o
	$(LINK) main.exe main.o Arguments.o

main.o: main.cpp Arguments.h
	$(CPP) main.cpp

Arguments.o: Arguments.cpp Arguments.h
	$(CPP) Arguments.cpp
	
test_Arguments.o: test_Arguments.cpp test_NotEqualArguments.cpp test_HandleExceptions.cpp
	$(CPPTOOL) $(CPPFLAGS) $(GTEST_INC) -o test_Arguments.o -c test_Arguments.cpp
	$(CPPTOOL) $(CPPFLAGS) $(GTEST_INC) -o test_NotEqualArguments.o -c test_NotEqualArguments.cpp
	$(CPPTOOL) $(CPPFLAGS) $(GTEST_INC) -o test_HandleExceptions.o -c test_HandleExceptions.cpp
	
#test_NotEqualArguments.o: test_NotEqualArguments.cpp
	

clean:
	$(RM) -f *.o
	$(RM) -f *.exe
