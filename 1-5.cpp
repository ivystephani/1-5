#include <iostream>
// obrigatório no inicio para criar biblioteca 
using namespace std;

main () { 
	setlocale( LC_ALL, "portuguese");
	//parenteses é para função; passar parâmetros 
	
	float nota1, nota2, nota3, result;
	// números decimais= reais 
	
	//inicio do processamento
	cout << "Informe a primeira nota:";
	cin >> nota1;
	//cin-recebe o valor que voce colocou; é de input.
	
	cout << "Informe a segunda nota:";
	cin>> nota2; 
	
	cout << "Informe a terceira nota:";
	cin >> nota3;
	
	result = (nota1+nota2+nota3) / 3; 
	 //fim do processamento
	
	
	cout << "Sua nota foi de:" << result << "\n\n\n\n\n\n";
	if ( result >= 7){
		cout << "Você foi aprovado";
		
	}else if (result >=5) {
		cout << " Você ficou de recuperação";
		
	}else if (result <7){
		cout << "Você está reprovado";
	} 
}
