#include <iostream>
#include <cctype>


void to_upper(char *chaine) {
    while (*chaine) {  // Parcourt chaque caractère de la chaîne
        if (islower(*chaine)) {  // Vérifie si le caractère est une lettre minuscule
            *chaine = toupper(*chaine);  // Convertit le caractère en majuscule
        }
        chaine++;  // Passe au caractère suivant
    }
}




void to_lower(char *chaine) {
    while (*chaine) {  // Parcourt chaque caractère de la chaîne
        if (isupper(*chaine)) {  // Vérifie si le caractère est une lettre majuscule
            *chaine = tolower(*chaine);  // Convertit le caractère en minuscule
        }
        chaine++;  // Passe au caractère suivant
    }
}

int main(){
    char chaine[]="bonne";

    to_upper(chaine);

    std::cout<<chaine<<std::endl;
}