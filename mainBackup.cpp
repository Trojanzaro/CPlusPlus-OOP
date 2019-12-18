#include "Proion.h"
#include "Pelatis.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

////int metProPin(ifstream &fin, Proion pinPro[]); 

//int menuProionta(Proion pinPro[], int n);

//int anaKodPro(Proion pinPro[], int n, int kodAna);

int main(int argc, char** argv) {
	
	int i, kodikosPro,thesi,megethos;
	
	Proion proionta[5];
	
	FILE *fin;
	
	Pelatis pelatis;
	
	fin=fopen("proionta.txt","r");
	
	megethos=diavasmaProionton(fin,proion);
	
	pelatis.readData();

	for(i=0;i<5;i++) proion[i].printData();

		cout<<"\nDwse  kodiko proiontos (0 gia telos): ";
		cin>>kodikosPro;
	
	while(kodikosPro!=0){	
		thesi=anazitisiKodikou(proion, kodikosPro);
		if(thesi==-1)
			cout<<"\nO kodikos den uparxei sti lista! \n\n";
		else{
			customer.agoraProiontos(proion[thesi]);
			cout<<"\n...H agora egine sunexiste...\n";			
			cout<<"==================================\n";
		}
		
		for(i=0;i<5;i++) proion[i].printData();
			cout<<"\n==================================\n=================================="<<endl;
			cout<<"\nDwse kodiko proiontos h \"0\" gia oloklirwsh ths paragelias: ";
			cin>>kodikosPro;
			cout<<"\n===============================================";
	}
	customer.printData();
	customer.metaforika();

	return 0;
}

/*
int metPropin(ifstream &fin, Proion pinPro[]){
	
}

int menuProionta(Proion pinPro[], int n){
	
}

int anaKodPro(Proion pinPro[], int n, int kodAna){
} */

*/
