#include "Proion.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

Proion::Proion(){
    this->kodPro = 999999;
    strcpy(perPro,"NO-ITEM");
    this->timPro = 0.0;
}

Proion::Proion(int kodPro1, char perPro1[], float timPro1){
    this->kodPro = kodPro1;
    strcpy(perPro,perPro1);
    this->timPro = timPro1;
}

void Proion::setData(int kodPro1, char perPro1[], float timPro1){
    this->kodPro = kodPro1;
    strcpy(perPro,perPro1);
    this->timPro = timPro1;
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
