#include "Proion.h"
#include "Pelatis.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <cstring>



using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int metProPin(ifstream &fin, Proion pinPro[5]);

int menuProionta(Proion pinPro[], int n);

int anaKodPro(Proion pinPro[], int n, int kodAna);



int main(int argc, char** argv) {

    Pelatis pelatis;
    Proion proionta[5];

    int i,kodikosPro,megethosPinPro;

    ifstream inFile;
    ofstream outFile;
    inFile.open("proionta4200.txt");
    outFile.open("agores4200.txt");


    megethosPinPro = metProPin(inFile,proionta);



    inFile.close();
    outFile.close();

    pelatis.reaData();



    system("pause");
	return 0;
}


int metProPin(ifstream &fin, Proion pinPro[]){
    int kodPro,i;
    char onomaProiontos[21];
    float timiProiontos;

    if (!fin.is_open())
        cout<<"Error opening input file!"<<endl;
    else{
        fin >> kodPro;
        i=0;
        while(!fin.eof()){
            fin >> onomaProiontos;
            fin >> timiProiontos;

            pinPro[i].setData(kodPro,onomaProiontos,timiProiontos);
            i++;

            fin >> kodPro;
        }
    }
	return i;
}

int menuProionta(Proion pinPro[], int n){

}

int anaKodPro(Proion pinPro[], int n, int kodAna){
}
