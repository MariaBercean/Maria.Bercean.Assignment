/// App using the Arugments class
#include <iostream>

#include "Arguments.h"

int main( int argc, char* argv[] )
{
	using namespace std;

    try
    {
        Arguments args(argc, argv);

        cout << "Name of the application: " <<
            args.appName() << endl;

        for ( int i = 0; i < args.count(); ++i )
        {
            cout << args[i] << endl;
        }
		
		cout << args[0] << args[1] << endl;
    }
    /// This will catch throws from the try block with an integer param
    catch (int e)
    {
        cerr << "Construction error occured..." << endl;
    }
    /// This will catch throws from the try block with a size_t param
    catch (size_t e)
    {
        cerr << "Out of range error occured ..." << endl;
    }

    cout << "Ending application... " << endl;
    return 0;
}
