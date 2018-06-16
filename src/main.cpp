#include <iostream>

#include "stdinc.h"


using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams

using namespace std;

int foo [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main ()
{
  for (n = 0 ; n < 5 ; ++n )
  {
    result += foo[n];
  }
  
  cout << result << endl;
  
  return 0;
}
