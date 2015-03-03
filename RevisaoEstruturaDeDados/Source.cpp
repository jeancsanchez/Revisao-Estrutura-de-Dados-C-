#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
using namespace std;
void primo();
void somatorio();
int fatorial(int);
int mdc(int, int);
string decimal_binario(int);
int main()
{
	setlocale(LC_ALL, "ptbr");
	int opcao, x, y;
	cout << "\n\t****************************************";
	cout << "*\n\t****** Digite o numero da revisao: ******\t\n\t*";
	cout << "****************************************";
	cout<<"\n\t 1)Numero Primo\t\t2)Somatorio\n\n\t 3)Fatorial\t\t4)MDC\n\n\t 5)Decimal para Binario\t6)SAIR\n";
	cout << "\n\t\t\tOpcao: ";
	cin >> opcao;
	cout << "\n";

	switch (opcao)
	{
	case 1:
		cout << "*** NUMERO PRIMO ***\n";
		primo();
		break;
	case 2:
		cout << "*** SOMATORIO ***\n";
		somatorio();
		break;
	case 3: 
		cout << "*** FATORIAL ***\n";
		cout << "Digite um numero positivo:\n";
		cin >> x;
		cout<<"O fatorial do numero: "+to_string(x)+" eh: "+to_string(fatorial(x))<<endl;
		main();
		break;
	case 4:
		cout << "*** MDC ***\n";
		cout << "Digite dois numeros positivos:\n";
		cin >> x;
		cout << "\n";
		cin >> y;
		cout << "O MDC de " + to_string(x) + " e " + to_string(y) +" eh "+to_string(mdc(x,y)) << endl;
		main();
		break;
	case 5:
		cout << "*** DECIMAL PARA BINARIO ***\n";
		cout << "Digite um numero:\n";
		cin>> x;
		cout << "O numero " + to_string(x) + " em binario: ";
		cout<<decimal_binario(x) << endl;
		main();
	case 6:
		return 0;
	default:
		cout << "\t\t OPCAO INEXISTENTE!!!\n";
		main();
		break;
	}

	return 0;
}
void primo()
{
	int contador=0, divisor, n;
	cout << "Digite um numero:\n";
	cin >> n;
	for (divisor = n; divisor >= 1; divisor--)
	{
		if (n%divisor == 0)
		{
			contador++;
		}
	}
	if (contador == 2)
	{
		cout << "Numero primo!\n" << endl;
	}
	else
	{
		cout << "Numero NAO primo!\n" << endl;
	}
	system("pause");
	main();
}
void somatorio()
{
	int s = 0, m , n;
	cout << "Digite o numero de incio:\n";
	cin >> m; cout << "\n";
	cout << "Digite o numero final:\n";
	cin >> n; cout << "\n";
	for (int i = m; i <= n; i++)
	{
		s += i;
	} // De 1 a 10 tem que dar 55;
	string saida = "O somatorio de todos os numeros de " + to_string(m);
	string saida1 = " ate " + to_string(n);
	string saida2 = " eh: " + to_string(s);
	cout <<saida + saida1 + saida2<< endl;
	main();
}
int fatorial(int x)
{
	int fatorial = 1;
	for (int i = 1; i <= x; i++)
	{
		fatorial *= i;
	}
	return fatorial;
	// Recursivo:
	//if (x == 0)
	//return 1;
	//return x*fatorial(x - 1);
}
int mdc(int x, int y)
{
	if (x == y)
		return x;
	if (x > y)
		return mdc(x - y, y);
	return mdc(y, x);
}
string decimal_binario(int x)
{
	string binario = "";
	int resto = 0;
	while (x !=0)
	{
		resto = x % 2;
		x = x/2;
		binario = to_string(resto)+binario;
	}
	return binario;
}