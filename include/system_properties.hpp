#include <string>
#include "stdinc.h"

using namespace std;
using namespace nlohmann;

namespace restws {

    class SystemProperties {

    private:
        json jsonStructure;
        
    public:
        SystemProperties(string fileName);
        string GetProperty(string pPropertyName);
    };
}