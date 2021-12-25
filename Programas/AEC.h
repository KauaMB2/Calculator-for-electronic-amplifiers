#ifndef __AEC_H_
#define __AEC_H_
using namespace std;
int IniciarAEC(){
	float Ieq = 0, Rb2 = 0, Rb1 = 0, Re = 0, Ib2 = 0;
	float B = 0, Icq = 0, Vcc = 0, Vre = 0, Ibq = 0, Rc = 0, Vceq = 0;
	cout << "Maravilha! Você escolheu a opção 1(Amplificador Emissor Comum)\n\n";
	cout << "Temos:\n";
	cout << "Icq = Corrente que vai até o coletor do transistor\n";
	cout << "B = Ganho em corrente(contínua) do transistor\n";
	cout << "Ieq = Corrente na base do transistor\n";
	cout << "Ieq = Corrente que flui no emissor\n";
	cout << "Ibq = Icq(Aproximado)\n";
	cout << "Vre = Tensão em cima do resistor Re\n";
	cout << "Vre = 0,1.Vcc\n";
	cout << "Geralmente, adota-se: Ib2 = 10.Ibq";
	cout << "Rc = Resistor do coletor do trans-istor\n";
	cout << "Re = Resistor do emissor do transistor\n";
	cout << "Rb1 = Resistor 1 da base do transistor\n";
	cout << "Rb2 = Resistor 2 da base do transistor\n";
	cout << "Vcc = tensão de alimentação\n\n";
	cout << "Entre com a tensão de alimentação\n";
	cin >> Vcc;
	cout << "Vcc: ";
	Vre = 0.1*Vcc;
	cout << "Entre com o valor de Icq e B\n";
	cout << "Icq: ";
	cin >> Icq;
	cout << "B: ";
	cin >> B;
	Ibq = Icq/B;
	cout << "Entre com o valor de Vceq:";
	cin >> Vceq;
	Rc = (Vcc - Vceq - Vre)/Icq;
	Ieq = Icq;
	Re = Vre/Ieq;
	Ib2 = 10*Ibq;
	Rb2 = (0.7 + Vre)/Ib2;
	Rb1 = (Vcc - 0.7 - Vre)/(Ib2 + Ibq);
	cout << "Resistor RC: " << Rc << "Ohms\n";
	cout << "Resistor Re: " << Re << "Ohms\n";
	cout << "Resistor Rb1: " << Rb1 << "Ohms\n";
	cout << "Resistor Rb2: " << Rb2 << "Ohms\n";
}
#endif
