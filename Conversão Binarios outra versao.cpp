#include <bits/stdc++.h>
#include <cmath>

// Ismael Kentenich Mesquita Andrade;
// �talo Garcia Covas

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); // Usando a biblioteca para acentos.
	
	char op;
	int bin, i, sobra, num;
	double resultado;
	
	cout << "** MENU **" << endl;
	cout << "1 - Bin�rio para decimal." << endl;
	cout << "2 - Decimal para bin�rio." << endl;
	cout << "Escolha uma op��o: ";
	cin >> op;
	system("cls");
	
	switch (op) {
		case '1':
			cout << "Digite um n�mero bin�rio: ";
			cin >> bin;
			for (i=0; i<10; i++) {
				sobra = bin -((bin/10)*10);
				bin = bin / 10;
				resultado += sobra * pow(2,i);
			}
			cout << "O resultado �: " << resultado << endl;
			break;
		case '2':
			int bina[10];
			cout << "Digite um n�mero decimal: ";
			cin >> num;
			for (i=0; num>0; i++) {
				bina[i] = num%2;
				num = num/2;
			}	
			cout << "O resultado �: ";
			for(i=i-1; i>=0; i--){
				cout << bina[i];
			}	
			
	}

	return 0;
}