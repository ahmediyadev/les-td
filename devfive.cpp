#include <iostream>

char *cherche_char(const char *chaine, char caractere) {
    while (*chaine) {  // Parcourt chaque caractère de la chaîne
        if (*chaine == caractere) {  // Vérifie si le caractère actuel est celui recherché
            return (char *)chaine;  // Retourne un pointeur vers la première occurrence
        }
        chaine++;  // Passe au caractère suivant
    }
    return NULL;  // Si le caractère n'est pas trouvé, retourne NULL
}


int main() {
    const char *chaine = "Bonjour, monde!";
    char caractere = 'B';
    char *resultat = cherche_char(chaine, caractere);

    if (resultat != NULL) {
        std::cout << "Le caractere '" << caractere << "' est retrouver " << std::endl;
        /*std::cout << "Le caractere '" << caractere << "' trouve a la position : " << resultat - chaine << std::endl;*/
    } else {
        std::cout << "Le caractere '" << caractere << "' n'a pas ete trouve dans la chaine." << std::endl;
    }

    return 0;
}
