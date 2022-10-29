#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main(){
    char s[100];
    int n = 0;

    do{
        int c = 0;
        int voc = 0;
        
        n = read(STDIN_FILENO, &s, 100);

        while (s[c] != '\0') {
            if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c] =='O' || s[c] == 'u' || s[c] == 'U')
                voc += 1;
            c++;
        }

        printf("El numero de vocales son: %d\n", voc);
    }while (n != 0);

    return 0;
}