#include "Proion.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void Proion::setData(int kodPro1, char perPro1[], float timPro1){
    kodPro = kodPro1;
    //strcpy(perPro,perPro1);
    timPro = timPro1;
}

void Proion::printData(){
    cout<< kodPro <<",  "<< perPro <<",  "<< timPro << endl;
}

int Proion::getKodPro(){
    return kodPro;
}

char* Proion::getPerPro(){
    return perPro;
}

float Proion::getTimPro(){
    return timPro;
}
