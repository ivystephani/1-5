#include <iostream>
// obrigat�rio no inicio para criar biblioteca 
using namespace std;

main () { 
	setlocale( LC_ALL, "portuguese");
	//parenteses � para fun��o; passar par�metros 
	
	float nota1, nota2, nota3, result;
	// n�meros decimais= reais 
	
	//inicio do processamento
	cout << "Informe a primeira nota:";
	cin >> nota1;
	//cin-recebe o valor que voce colocou; � de input.
	
	cout << "Informe a segunda nota:";
	cin>> nota2; 
	
	cout << "Informe a terceira nota:";
	cin >> nota3;
	
	result = (nota1+nota2+nota3) / 3; 
	 //fim do processamento
	
	
	cout << "Sua nota foi de:" << result << "\n\n\n\n\n\n";
	if ( result >= 7){
		cout << "Voc� foi aprovado";
		
	}else if (result >=5) {
		cout << " Voc� ficou de recupera��o";
		
	}else if (result <7){
		cout << "Voc� est� reprovado";
	} 
}
