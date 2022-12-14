/*
	Name: Risolutore di equazioni di secondo grado
	Copyright: GNU Public License
	Author: HotCoffeMug
	Date: 27/10/22
	Description: Resolve second degree equation using delta.
*/


#include <iostream> //importa libreria 'iostream'.
#include <cmath> //importa libreria 'math.h'.
#include <string> //importa libreria 'string'.
#include <complex> //importa libreria 'complex'.



//RISOLVI L'EQUAZIONE
void equazioni() {
    system("CLS");
    float a,b,c,delta,x1,x2,x;
    
    std::string deltaMag0 = "Il delta e' maggiore di 0 quindi ci sono 2 soluzioni reali\n";
    std::string delta0 = "Il delta e' uguale a 0 quindi ci sono 2 soluzioni reali e coincidenti\n";
    std::string deltaMin0 = "Il delta e' minore di 0 quindi non ci sono soluzioni reali\n";
    
    std::cout << "Definisci il primo coefficiente (A): ";
    std::cin>>a;

    std::cout << "Definisci il secondo coefficiente (B): ";
    std::cin>>b;

    std::cout << "Definisci il terzo coefficiente (C): ";
    std::cin>>c;

    delta=b*b-4*a*c; //calcola il delta.
    
    std::cout << "\ndelta= " << delta << "\n";
    
    if (delta>0) {
    	std::cout << deltaMag0 << "\n";
    	x1 = (-b+sqrt(delta))/(2*a);
    	x2 = (-b-sqrt(delta))/(2*a);
    	std::cout << "x1 = " << x1 << "\nx2 = " << x2;
    	std::cout << "\n";
    	system("PAUSE");
	}
	else if (delta==0) {
		std::cout << delta0 << "\n";
		x = -b/(2*a);
		std::cout << "x1,2 = " << x << "\n";
		std::cout << "\n";
		system("PAUSE");
	}
    else {
    	std::cout << deltaMin0 << "\n";

		std::cout << "\n";
		system("PAUSE");
	}

}
//FINE RISOLVI L'EQUAZIONE



//PROGRAMMA PRINCIPALE.
int main() {
	std::cout << "Risolutore di equazioni di secondo grado generiche.\n";
    std::cout << "-Mario Marcotulli\n";
    std::cout << "\n";
    
    system("PAUSE");

    equazioni();

    return 0; //fine del programma con exit code 0.
}
//FINE PROGRAMMA PRINCIPALE.
