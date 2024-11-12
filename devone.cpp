#include <stdio.h>

int longueur(const char *chaine) {
    int longueur = 0;
    while (chaine[longueur]) longueur++;
    return longueur;
}

int main() {
    char texte[] = "lol";
    printf("La longueur de la chaine est : %d\n", longueur(texte));
    return 0;
}
