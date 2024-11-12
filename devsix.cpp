#include <iostream>

void inverse(char *chaine) {
    int longueur = 0;
    char *debut = chaine;
    char *fin = chaine;
    char temp;

    // Calcul de la longueur de la chaîne
    while (*fin) {
        fin++;
        longueur++;
    }

    // Positionner le pointeur fin sur le dernier caractère de la chaîne
    fin--;

    // Inversion de la chaîne
    while (debut < fin) {
        temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }
}

int main() {
    char chaine[]="jour";
    inverse(chaine);

    std::cout<< chaine <<std::endl;

    return 0;
}