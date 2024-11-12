#include <iostream>
#include <cstring>

char *cherche_mot(const char *phrase, const char *mot) {
    int longueur_mot = std::strlen(mot);  // Longueur du mot à chercher

    if (longueur_mot == 0) {  // Vérifie si le mot est vide
        return (char *)phrase;  // Retourne le début de la phrase
    }

    while (*phrase) {  // Parcourt chaque caractère de la phrase
        if (std::strncmp(phrase, mot, longueur_mot) == 0) {  // Compare les caractères
            return (char *)phrase;  // Retourne le pointeur vers le début du mot trouvé
        }
        phrase++;  // Passe au caractère suivant
    }

    return NULL;  // Si le mot n'est pas trouvé, retourne NULL
}

int main() {
    const char *phrase = "Bonjour monde! Bonjours tout le monde!";
    const char *mot = "monde";
    char *resultat = cherche_mot(phrase, mot);

    if (resultat) {
        std::cout << "Le mot '" << mot << "' est retrouve " << resultat - phrase << std::endl;
    } else {
        std::cout << "Le mot '" << mot << "' n'a pas ete trouve dans la phrase." << std::endl;
    }

    return 0;
}
