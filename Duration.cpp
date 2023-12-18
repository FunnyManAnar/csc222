#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
#include "Duration.h"
using namespace std;

Duration::Duration(){
    
}

Duration::Duration(int TT){
    TotalTime = TT;

}

Duration Duration::days(Duration& c)
{
    days = (TT/864000);
}

void Duration::hours(Duration& c)
{
    hours = (TT/3600);
}

void Duration::minutes(Duration& c)
{
    minutes = (TT/60);
}

void Duration::seconds(Duration& c)
{
    seconds = (TT);
}

string Duration::to_string()
{
    return "PT" + to_string(days) + "DT" to_string(hours) + "H" to_string(minutes) + "M" to_string(seconds) + "S";      
}






d%60=remain
if remain=0
print out

if remain>0
then 

*******
d=200

d/60 = minutes
if minutes > 0
d/%60 = second
else
seconds = 0

PT3M20S

*******
d=20000

d/3600 = hours
d%3600 = remaining_seconds
if r > 0 
remain1/60 = minutes
remain1%60 = seconds
