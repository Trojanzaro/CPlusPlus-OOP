#ifndef PROION_H
#define PROION_H

class Proion
{
	private:
		int kodPro;
		char perPro[21];
		float timPro;

	public:
		void setData(int kodPro1, char perPro1[], float timPro1);
		void printData();
		int getKodPro();
		char* getPerPro();
		float getTimPro();
};
#endif
