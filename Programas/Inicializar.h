#ifndef __INICIALIZAR_H_
#define __INICIALIZAR_H_
#include "AnaliseRes.h"
using namespace std;
int Inicio(){
	char res[10];
	cout << "Selecione um dos dispositivos abaixo para fazer algum cálculo:\n";
	cout << "[1] = Amplificador emissor comum\n";
	cout << "[2] = Amplificadores operacionais\n";
	cin >> res;
	IniciarAnaliseRes(res);
}
#endif
