#ifndef Conta_H
#define Conta_H
#include <string>
#include "Iconta.h"
using namespace std;

class Conta : public Iconta {
	// Private section
	public:
		// Public Declarations
	Conta();
	Conta(string nomeC,int salarioM, int numeroC, int S );	
	string nomeCliente;
	int salarioMensal;
	int numeroDaConta;
	int Saldo;
	int Limite;	
   	int getLimite();
	int getsalarioMensal();
	int getnumeroConta();
	int getSaldo();
	void DefinirLimite(int Limite);	
	
	private: 
	string setnomeCliente();
	void	setsalarioMensal(int salarioM);
	void	setnumeroConta(int numeroC);
	void	setSaldo(int S); 	
        setConta(string nomeC,int salarioM, int numeroC, int S);	
};

#endif
