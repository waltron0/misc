#ifndef YEAR_H
#define YEAR_H

#include "proj.h"

using namespace std;

class Year
{
public:
    Year();
    vector<Proj> p;
    int linesDonePerDay[250], projInitPerDay[250];
    bool summerSlothAllowed;
};

#endif // YEAR_H
