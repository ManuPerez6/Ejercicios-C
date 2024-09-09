//integrantes: Gonzalez Thomas, Pérez Manuel
#include <stdio.h>

int main()
{
    char c;
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
    for (int i = 0; i < 20; i++) 
    {
        printf("Introduce un caracter: \n");
        scanf(" %c", &c); 
        switch (c)
        {
            case 'a': a_count++; break;
            case 'e': e_count++; break;
            case 'i': i_count++; break;
            case 'o': o_count++; break;
            case 'u': u_count++; break;
        }
    }
    printf("\nSe ingresaron:\n");
    printf("%d 'a'\n", a_count);
    printf("%d 'e'\n", e_count);
    printf("%d 'i'\n", i_count);
    printf("%d 'o'\n", o_count);
    printf("%d 'u'\n", u_count);
    return 0;
}
//el código es funcional, no lo más óptimo, pero sirve, poneme 10 profe jajaja