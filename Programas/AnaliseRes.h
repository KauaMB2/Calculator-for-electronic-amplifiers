#ifndef __ANALISERES_H_
#define __ANALISERES_H_
#include "AmpOp.h"
#include "AEC.h"
using namespace std;
int IniciarAnaliseRes(char valor[10]){
	char res[10];
	system("cls");
	switch(valor[0]){
		case '1':
			IniciarAEC();
			break;
		case '2':
			IniciarAO();
			break;
		default:
			cout << "Valor inválido\n";
			cout << "Selecione um dos dispositivos abaixo para fazer algum cálculo:\n";
			cout << "[1] = Amplificador emissor comum\n";
			cout << "[2] = Amplificadores operacionais\n";
			cout << "Os valores permitidos são somente 1 e 2!\n";
			cout << "Digite novamente\n";
			cin >> res;
			IniciarAnaliseRes(res);
	}
}
#endif
