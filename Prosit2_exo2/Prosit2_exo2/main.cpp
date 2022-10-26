#include "pch.h"

void main(void)
{
	int serv;
	cout << "Bonjour, quel service voulez-vous utiliser ? Tappez 1 ou 2" << endl;
	cin >> serv;
	if (serv == 1)
	{
		service1* of1;
		of1 = new service1();
		of1->gpcs1s1();
		service1* of2;
		of2 = new service1();
		of2->gpcs1s2();
	}
	else if (serv == 2)
	{
		service2* of3;
		of3 = new service2();
		of3->gpcs2s1();
	}
	else
	{
		cout << "Vous n'avez pas donné de bon numéro" << endl;
	}
	
}