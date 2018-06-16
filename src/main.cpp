#include <iostream>

#include "stdinc.h"


using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams

using namespace web;

int main(int argc, const char * argv[]) {

    try {
		


        std::cout << "Modern C++ Microservice now listening for requests..." << std::endl;
        
    }
    catch(std::exception &e) {
        std::cerr << "somehitng wrong happen! :(" << '\n';
    }
    catch(...) {
        std::cerr << "Catch...";
    }

    return 0;
}
