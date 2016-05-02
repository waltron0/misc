#include "simulator.h"
#include "year.h"
//#include "main.h"
//#include <iostream>
#include <QTextEdit>//String>

Simulator::Simulator()
{

}

void Simulator::simit() {//QTextEdit& textBox) {//QString& textBoxText) {

    //textBoxText = "Simmed";
    //textBox.setText("Simulated");
    //std::cout << "simin \n";// << endl;

    //well, I think you need to have Year defined in its own file so you can include it
    //simulate 2014 with summer sloth
    Year year2014;
    simulateData(year2014, true);
    outputAnalysis(year2014);

    //simulate 2015 with some kind of program that prevents summer sloth:
    Year year2015;
    simulateData(year2015, false);
    outputAnalysis(year2015);

    return;
}
