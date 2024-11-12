#include <iostream>

int compare(const char *chaine1, const char *chaine2) {
    while (*chaine1 && (*chaine1 == *chaine2)) {
        chaine1++;
        chaine2++;
    }
    return *(unsigned char *)chaine1 - *(unsigned char *)chaine2;
}

int main() {
    const char chaine1[]="bonjour";
    const char chaine2[]="bonjou";
    std::cout<<compare(chaine1,chaine2)<<std::endl;


    return 0;
}