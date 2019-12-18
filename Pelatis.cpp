#include "Proion.h"
#include "Pelatis.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void Pelatis::reaData(){
    cout << "Dwste kwdiko pelati: ";
    cin >> kodPel;
    cout << "Dwste onomateponimo pelati: ";
    cin >> onoma;
    cout << "Midenismos posou agorwn\n\n";
    posoAgorwn = 0;
    cout << "LISTA DIATHESIMON PROIONTON\n";
    cout << "=============================\n";

}
int Pelatis::getKodPel(){
    return kodPel;
}
char* Pelatis::getOnoma(){
    return onoma;
}

float Pelatis::getPosoAgorwn(){
    return posoAgorwn;
}

void Pelatis::agoraProiontos(Proion ant, int qty){
    posoAgorwn += ant.getTimPro() * qty;
}

int Pelatis::metaforika(){
    if (posoAgorwn>500)
        cout << "Dwrean metaforika gia agores anw twn 500e."<<endl;
    else
        posoAgorwn += 50;
        cout<<"Metaforika 50e."<<endl;

}

