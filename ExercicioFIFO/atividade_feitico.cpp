#include <iostream>
#include <string>

using namespace std;

struct Feitico {
	
	string nome;
	int dificuldade;
	int dano_base;
	
};

int main() {
	
	float custo_mana_final;
	double multiplicador;
	
	Feitico Eletricidade;
	
	Eletricidade.nome = "Relampago em Cadeia";
	Eletricidade.dificuldade = 4;
	Eletricidade.dano_base = 75;
	
	if (Eletricidade.dificuldade == 1 || Eletricidade.dificuldade == 2) {
		
	    multiplicador = 1.0;
		
	} else if (Eletricidade.dificuldade == 3 || Eletricidade.dificuldade == 4) {
		
	    multiplicador = 1.5;
		
	} else {
		
		multiplicador = 2.0;
		
	}
	
	custo_mana_final = Eletricidade.dano_base * multiplicador;
	
	cout << "Nome do feitico: " << Eletricidade.nome << endl;
	
	cout << "------------------" << endl;
	cout << "------------------" << endl;
	
	cout << "Dificuldade: " << Eletricidade.dificuldade << endl;
	
	cout << "------------------" << endl;
	cout << "------------------" << endl;
	
	cout << "Dano base: " << Eletricidade.dano_base << endl;
	
	cout << "------------------" << endl;
	cout << "------------------" << endl;
	
	cout << "O custo da mana no final sera: " << custo_mana_final << endl;
	
	return 0;
}
