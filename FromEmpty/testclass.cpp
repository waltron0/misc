#include "testclass.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <vector>

using namespace std;

TestClass::TestClass(QWidget *parent) : QWidget(parent)
{
    cout << "Made a TestClass\n";
}

void TestClass::testSim() {
    cout << "simmmmmmmmmmm\n";

    //THIS IS OOPS going well.
    //Now make this do a simulation thing with input params, and maybe plot it or something, and make your
    //plot scaler if you want, and that's prolly good!
    //btw, w/ the star-commented-out stuff commented out (since it's unfinished), this WORKS ON ThinkUbun !

 //   void simulateData(Year& year, bool summerSloth) {

    //if(summerSloth) year.summerSlothAllowed=true;
    //else year.summerSlothAllowed=false;

    /////////// new untested ///////////
    int numpts = 5000;
    int lineStock, lineStock_init;
    float pdf_projInit, rando[numpts]; // <-- it may not like numpts in array thing

    //just do something randomy instead of summersloth:

    //make semi-gaussian distribution around 0 (around 0.5, then subtract 0.5):
    for(int i=0; i<numpts; i++) {
        rando[i] = (1./4.)*(rand()%1+rand()%1+rand()%1+rand()%1) - 0.5; // <-- actually, can you use modulus to fill bins, and have the array be num bin entries?
    }
    //then, have it plot in a canvas!
    /////////// end untested ///////////
    /*for (int businessDay = 0; businessDay<250; businessDay++) {
        //determine number of projects initiated on this day according to
        //this probability distribution function which sort of peaks around the summer:
        pdf_projInit = 0.5*exp(((businessDay - 125.)*(businessDay - 125.)) / (-2.*50.*50.));
        rando = 0.001*(rand() % 1000);

        year.projInitPerDay[businessDay]=0;
        //1st order probability for 1 project, etc.:
        if (rando < pdf_projInit) {
            loadProj(year, businessDay);
            year.projInitPerDay[businessDay]++;
        }
        if (rando < pdf_projInit*pdf_projInit) {
            loadProj(year, businessDay);
            year.projInitPerDay[businessDay]++;
        }
        if (rando < pdf_projInit*pdf_projInit*pdf_projInit) {
            loadProj(year, businessDay);
            year.projInitPerDay[businessDay]++;
        }
        //ignore 4th order and beyond

        if(summerSloth) lineStock_init = int(500. - 100.*exp(-((businessDay-125)*(businessDay-125))/(2.*100.))); // set this day's line-writing capacity as a constant 500 lines, with a dip around summer time due to people wanting to go outside
        else lineStock_init = 500;
        lineStock = lineStock_init;

        //find unfinished projects and work on them with priority given to the earliest ones initiated:
        for (int i = 0; i<year.p.size(); i++) {
            if(!year.p[i].finished) {
                year.p[i].linesUnfinished -= lineStock;
                if(year.p[i].linesUnfinished < 0) {
                    lineStock = abs(year.p[i].linesUnfinished);
                    year.p[i].linesUnfinished = 0;
                    year.p[i].finished=true;
                    year.p[i].dayFinished=businessDay;
                }
                else break; //done for the day
            }
        }
        year.linesDonePerDay[businessDay] = lineStock_init - lineStock;
    }*/

    return;
}
