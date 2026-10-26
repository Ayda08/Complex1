// Complexe1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.



#include <iostream>
#include "Complex.h"

int main() {
	Complex* c1 = new Complex(6, 7);
	Complex* c2 = new Complex(3, 1);
	c1->afficher();
	c2->afficher();
	Complex* c3 = new Complex(*c1 + *c2);
	double a = 8.5;
	Complex c4 = *c3 + a;
	c3->afficher();
	c4.afficher();
	delete c1;
	c1 = nullptr;
	delete c2;
	c2 = nullptr;
	delete c3;
	c3 = nullptr;
	Complex* c5 = new Complex(8, 4);
	Complex* c6 = new Complex(2, 6);
	c5->afficher();
	c6->afficher();
	Complex* c7 = new Complex(*c5 - *c6);
	c7->afficher();
	delete c5;
	c5 = nullptr;
	delete c6;
	c6 = nullptr;
	delete c7;
	c7 = nullptr;



}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
