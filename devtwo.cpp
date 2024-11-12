#include <iostream>


void copie(char *dest, const char *source) {
    while (*source) {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0'; // Assure de copier le caractère nul à la fin de la chaîne
}


int main() {
    const char source[] = "le second c'est la copie";
    char dest[100];  // Assurez-vous que le tableau de destination est assez grand

    copie(dest, source);

    std::cout<< source <<std::endl;
    std::cout<< dest <<std::endl;

    return 0;
}
