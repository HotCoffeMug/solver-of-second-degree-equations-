/*
	Name: Risolutore di equazioni di secondo grado
	Copyright: GNU Public License
	Author: HotCoffeMug
	Date: 27/10/22
	Description: Resolve second degree equation using delta.
*/


#include <iostream> //importa libreria 'iostream'.
using namespace std;
#include <cmath> //importa libreria 'math.h'.
#include <string> //importa libreria 'string'.

//RISOLVI L'EQUAZIONE
void equazioni() {
    system("CLS");
    float a,b,c,delta,x1,x2,x,sicuro,reale,immaginario;
    
    string deltaMag0 = "Il delta e' maggiore di 0 quindi ci sono 2 soluzioni reali\n";
    string delta0 = "Il delta e' uguale a 0 quindi ci sono 2 soluzioni reali e coincidenti\n";
    string deltaMin0 = "Il delta e' minore di 0 quindi ci sono 0 soluzioni reali\n";
    string deltaMin0seisicuro = "Vuoi comunque risolverla? (s/n)\n";
    string deltaMin0seisicuroSI = "Ci sono 2 radici complesse e coniugate \n";
    
    cout << "Definisci il primo coefficiente (A): ";
    cin>>a;

    cout << "Definisci il secondo coefficiente (B): ";
    cin>>b;

    cout << "Definisci il terzo coefficiente (C): ";
    cin>>c;

    delta=b*b-4*a*c; //calcola il delta.
    
    cout << "\ndelta= " << delta << "\n";
    
    if (delta>0) {
    	cout << deltaMag0 << "\n";
    	x1 = -b+sqrt(delta)/(2*a);
    	x2 = -b-sqrt(delta)/(2*a);
    	cout << "x1 = " << x1 << "\nx2 = " << x2;
	}
	else if (delta==0) {
		cout << delta0 << "\n";
		x = -b/(2*a);
		cout << "x1,2 = " << x << "\n";
	}
    else {
    	cout << deltaMin0 << "\n";
    	cout << deltaMin0seisicuro;
    	cin>>sicuro;
    	
    	cout << sicuro;
    	
    	if (sicuro=='n') {
    		cout << "ok";
    		system("PAUSE");
		}
		else if (sicuro=='s') {
			reale=-b/ (2*a);
			immaginario=sqrt(-delta)/ (2*a);
			cout << deltaMin0seisicuro;
			cout << reale << " + i " << immaginario << " e " << reale << " -i " << immaginario;
			cout << "\n";
			system("PAUSE");
		}
    	
	}

}
//FINE RISOLVI L'EQUAZIONE

//PROGRAMMA PRINCIPALE.
int main() {
	cout << "Risolutore di equazioni di secondo grado generiche.\n";
    cout << "-Mario Marcotulli\n";
    cout << "\n";
    
    cout << "Premi INVIO per continuare...\n";
    cin.get();

    equazioni();

    return 0; //fine del programma con exit code 0.
}
//FINE PROGRAMMA PRINCIPALE.
