#include <string>

using namespace std;

namespace restws {

    class SystemProperties {
        
    public:
        SystemProperties(string fileName);
        string GetProperty(string pPropertyName);
    };
}