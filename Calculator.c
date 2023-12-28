/*Calculator*/

#include <stdio.h>
#include <math.h>
#define clrscr() printf("\e[1;1H\e[2J")

//Funktion för addition
double addition(double tal1, double tal2){
    return tal1 + tal2;
}

//Funktion för subtraktion
double subraktion(double tal1, double tal2){
    return tal1 - tal2;
}

//Funktion multiplikation
double multiplikation(double tal1, double tal2){
    return tal1 * tal2;
}

//Funktion division
double division(double tal1, double tal2){
    return tal1 / tal2;
}

//Funktion kvadratroten
double kvadratrot (double tal1){
    return sqrt(tal1);
}


int main(){
    
    double tal1, tal2, svar;
    int val;
    
    clrscr();
    printf(" _____________________\n");
    printf("|  _________________  |\n");
    printf("| | JO  3.141592654 | |\n");
    printf("| |_________________| |\n");
    printf("|  __ __ __ __ __ __  |\n");
    printf("| |__|__|__|__|__|__| |\n");
    printf("| |__|__|__|__|__|__| |\n");
    printf("| |__|__|__|__|__|__| |\n");
    printf("| |__|__|__|__|__|__| |\n");
    printf("| |__|__|__|__|__|__| |\n");
    printf("| |__|__|__|__|__|__| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n\n\n");

    printf("Välkommen till miniräknaren!\n\n");
    printf("Välj ett av följande alternativ:\n");
    printf("Tryck 1 för att välja addition\n");
    printf("Tryck 2 för att välja subraktion\n");
    printf("Tryck 3 för att välja multiplikation\n");
    printf("Tryck 4 för att välja division\n");
    printf("tryck 5 för att välja roten ur\n");

    scanf("%d", &val);
    clrscr();
        if (val == 5)
        {
            printf("Välj ett tal som du vill ta roten ur\n");
            scanf("%lf", &tal1);
            svar = kvadratrot(tal1);
            printf("Svaret är: %.2lf\n", svar);
            return 0;
        }
        if (val == 1 || val == 2 || val == 3 || val == 4)
        {
            printf("Välj ett tal:\n");
            scanf("%lf", &tal1);
            printf("Välj ytterligare ett tal\n");
            scanf("%lf", &tal2);
        }
        if(val == 1){
            svar = addition(tal1, tal2);
            printf("Svaret är: %.2lf\n", svar);
        }
        else if (val == 2){
            svar = subraktion(tal1, tal2);
            printf("Svaret är: %.2lf\n", svar);
        }
        else if (val == 3){
            svar = multiplikation(tal1, tal2);
            printf("Svaret är: %.2lf\n", svar);
        }
        else if (val == 4)
        {
            if (tal2 == 0)
            {
                printf("Felaktigt val, 0 som nämnare tillåts ej.\n");
            }
        
            else
            {
                svar = division(tal1, tal2);
                printf("Svaret är: %.2lf\n", svar);
            }
        }    
      
    




return 0;

}
