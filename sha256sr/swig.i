%module secure_random

%{
#include <string>
#include "secure_random.h"

using namespace std;
using std::string;
%}

%include stdint.i
%include stl.i
/* instantiate the required template specializations */
namespace std {
    %template(Uint8Vector)    vector<uint8_t>;
}

/* Let's just grab the original header file here */
%include "secure_random.h"

