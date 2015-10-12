#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <string>
#include <vector>

class Arguments
{
private:
    /**
    * vector of argument strings (except the application name)
    */
    std::vector<std::string> args;
    /**
    * application name
    */
    std::string app;
    /**
    * Prohibit instantiation without arguments
    */
    Arguments(){};

public:

    /**
    * Constructor
    * other member is  set.
    * Otherwise app is argv[0], and the rest of the elements
    * from the argument vector will be pushed back into args.
    *
    * To check if construction was ok see good()
    */
    Arguments(int argc, char* argv[]);

    /**
    * Copy constructor
    * Copies all the member variables into the new object.
    */
    Arguments(const Arguments& rhs);

    /**
    * Array subscript operator for const objects
    * Returns reference to argument at index i from args.
    */
    const std::string& operator[](const std::size_t i) const;

    /**
    * Assignment operator
    * Copies all members from rhs into the current object
    * Skips copy if this == &rhs
    */
    Arguments& operator=(const Arguments& rhs);

    /**
    * returns number of arguments stored in args
    */
    int count() const;

    /**
    * returns application name save in app
    */
    std::string appName() const;

    /**
    * Destructor
    */
	virtual ~Arguments(){};
};

#endif //ARGUMENTS_H
