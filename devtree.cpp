#include <iostream>

void concatenation(char *dest, const char *source) {
    // Avance le pointeur dest jusqu'au caractère nul
    while (*dest) {
        dest++;
    }

    // Copie le contenu de source à la fin de dest
    while (*source) {
        *dest = *source;
        dest++;
        source++;
    }

    // Ajoute le caractère nul à la fin de la chaîne concaténée
    *dest = '\0';
}


int main() {
    const char source[] = "c'est ca";
    char dest[100] = "la concatenation ";  // Assurez-vous que le tableau de destination est assez grand

    concatenation(dest, source);

    std::cout<< source <<std::endl;
    std::cout<< dest <<std::endl;

    return 0;
}