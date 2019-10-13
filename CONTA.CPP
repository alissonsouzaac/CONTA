#include "Conta.h"
#include <iostream>
using namespace std;

Conta::Conta(){
	nomeCliete = "";
	salarioMensal = 0;
	numeroConta = 0;
	Saldo = 0;
}

Conta::Conta(string nomeC,int salarioM, int numeroC, int S ){
	nomeCliente = nomeC;
	salarioMensal = salarioM;
	numeroConta = numeroC;
	Saldo = S;
	
}
Conta::DefinirLimite(int Limite){
	Limite = 2*salarioMensal;
}

Conta::Depositar(int Saldo){
 Cout << "Valor do Deposito:"<< endl;
 cin >> dep;
 
 	Saldo = Saldo + dep;
	
}
Conta::Sacar(int Saldo){
 Cout << "Valor do saque:" << endl;
 cin >> saq;
 
	if(Saldo > saq){
	
	Saldo = Saldo - saq;
} else if (Saldo < saq){
	cout << "SaldoNaoDisponivelException." << endl;
}
	
}
Conta::getnumeroConta(){
	
	return numeroConta;
}
Conta::getLimite(){
	
	return Limite;
}

Conta::getsalarioMensal(){
	
	return salarioMensal;
}

Conta::getSaldo(){
	return Saldo;
}
