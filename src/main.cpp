#include <iostream>

#include "stdinc.h"
#include "usr_interrupt_handler.hpp"
#include "system_properties.hpp"


using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams

using namespace web;

using namespace cfx;
using namespace std;
using namespace restws;

static std::string welcome_message = 
"\n\n"
"               _                \n"
"              | |               \n"
" _ __ ___  ___| |___      _____ \n"
"| '__/ _ \\/ __| __\\ \\ /\\ / / __|\n"
"| | |  __/\\__ \\ |_ \\ V  V /\\__ \\\n"
"|_|  \\___||___/\\__| \\_/\\_/ |___/\n";                                
                                


int main(int argc, const char * argv[]) {

    try {
		
        InterruptHandler::hookSIGINT();

        cout << welcome_message << endl;

        SystemProperties* systemProperties = new SystemProperties(argv[0]);
        cout << "restWS Microservice now listening for requests..." << endl;



        InterruptHandler::waitForUserInterrupt();

    }
    catch(std::exception &e) {
        std::cerr << "somehitng wrong happen! :(" << '\n';
    }
    catch(...) {
        std::cerr << "Catch...";
    }

    return 0;
}
