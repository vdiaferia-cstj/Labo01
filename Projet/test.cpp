// But : Utiliser git et GitHub en affichant un message à l'écran
// Auteur : Vincent Diaferia
// Date : 3 septembre 2002

#include <iostream> // Pour permettre au programme d'intéragir avec l'utilisateur cout,cin

int main()
{

	//Convertir les accents tapés dans Windows pour qu'ils soient lisibles dans la console
	setlocale(LC_ALL,"");
	
	//Afficher un message à l'écran
	std::cout << "Bienvenue à tous!";

	return 0;
}
