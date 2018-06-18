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
"                ___          _______ \n"
"               | \\ \\        / / ____|\n"
"  _ __ ___  ___| |\\ \\  /\\  / / (___  \n"
" | '__/ _ \\/ __| __\\ \\/  \\/ / \\___ \\ \n"
" | | |  __/\\__ \\ |_ \\  /\\  /  ____) |\n"
" |_|  \\___||___/\\__| \\/  \\/  |_____/ \n";
                                     
                                     

int main(int argc, const char * argv[]) {

    try {
		
        InterruptHandler::hookSIGINT();

        cout << welcome_message << endl;

        SystemProperties* systemProperties = new SystemProperties("restws.json");

        string port = systemProperties->GetProperty("port");
        string log_folder = systemProperties->GetProperty("log_folder");

        /** Log initialization */
        nanolog::initialize(nanolog::GuaranteedLogger(), log_folder, "restws.log", 1);
        nanolog::set_log_level(nanolog::LogLevel::INFO);



        cout << "restWS Microservice now listening for requests on port " << port << "." << endl;
        LOG_INFO << "restWS Microservice now listening for requests on port " << port;

        LOG_INFO << "Sample NanoLog.";


        InterruptHandler::waitForUserInterrupt();

    }
    catch(std::exception &e) {
        std::cerr << "Caught exception :\"" << e.what() << "\"" << endl;
        LOG_CRIT << e.what();
    }
    catch(...) {
        std::cerr << "Catch...";
    }

    return 0;
}
