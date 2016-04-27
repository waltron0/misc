#include "thing.h"

Thing::Thing()
{
    thing->thingValue=0;
}

void Thing::copyEditBox()
{
    //this->setText(textthing);
    textDisplayScale->setText(textEditScale->toPlainText());

    return;
}
