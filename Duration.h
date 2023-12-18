#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
using namespace std;

class Duration
{
    int seconds;

    void format_duration();
    void add_duration();


public:

    Duration();

    Duration days (Duration& c);
    Duration hours (Duration& c);
    Duration minutes(Duration& c);
    Duration seconds (Duration& c);

};