// Algorithm_stl.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>
#include <deque>
#include <stack>
#include <array>
#include <queue>
using namespace std;



int main()
{/******************Question 1***************/
    deque <string> Deq;
	string s;
	for (auto i = 0; i < 4; i++)
	{
		cout << "Donner un mot: " << endl;
		cin >> s;
		Deq.push_back(s);
	}
	cout << "Affichage: " << endl;
	for (auto i : Deq) {
		cout << i<< "\t";
	}
	/******** Copier les mot dans une liste *********/
	list <string> Li;
	for (auto i : Deq)
	{
		Li.push_back(i);
	}
	cout << "\n Affichage de la liste :" << endl;
	for (auto i : Li)
	{
		cout << i << "\t";
	}

	Li.sort();
	cout << "\n Affichage de la liste triée :" << endl;
	for (auto i : Li)
	{
		cout << i << "\t";
	}
	/********************Question 2 *******************/

	array<char,25> chaine;
	stack<char> Stack;
	char c;
	int i = 0;
	cout << "\nEntrer une phrase : ";
	c=getchar();
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			chaine.at(i) = c;
			i++;
			Stack.push(c);
		}
	}
	i = 0;
	cout << endl;
	while (!Stack.empty()) {
		if (chaine.at(i) != Stack.top()) {
			cout << "la phrase est non palindrome" << endl;
			exit(0);
		}
		i++;
		Stack.pop();
	}
	cout << "la phrase est palindrome" << endl;
	/******************************Question 3*************/
	priority_queue<string> Q;
	int n;
	string mot;
	c=getchar();
	cout << "Entrer le nombre de mot : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nle mot  " << i + 1 << " : ";
		cin >> mot;
		Q.push(mot);
	}
	cout << endl << "Affichage de queue " << endl;
	while (!Q.empty()) {
		cout << Q.top() << endl;
		Q.pop();
	}

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
