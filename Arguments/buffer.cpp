#include <iostream>
#include <string>
#include <sstream>

// using namespace std;

void print();

int main()
{
	int flag = -7;
// This can be an ofstream as well or any other ostream
std::stringstream buffer;

// Save cout's buffer here
std::streambuf *sbuf = std::cout.rdbuf();

// Redirect cout to our stringstream buffer or any other ostream
std::cout.rdbuf(buffer.rdbuf());

// Use cout as usual
print();
std :: string verify = "Hello World";
std :: string result = buffer.str().c_str();

if(verify == result)
	flag = 1;


// When done redirect cout to its old self
std::cout.rdbuf(sbuf);
std :: cout << flag << result << std :: endl;
	return 0;
}

void print()
{
	std :: cout << "Hello World" << std :: endl;
}