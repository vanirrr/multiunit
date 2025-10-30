#include <stdio.h>

// Unit converting program for:
// KM -> miles ; CM -> Inches / Feet ; Celsius -> Farenheit

// Declaring functions for conversion


float cminch(int x);
float celfar(int x);
float pkg(int x);
float kmmile(int x);
void interface() {
    int choice;
    float a;
    while(1) {
        printf("Multi Unit Converter\n");
        printf("1. KM to Miles\n");
        printf("2. CM to Inches\n");
        printf("3. Celcius to Farenheit\n");
        printf("4. KG To Pounds (lbs)\n");
        printf("0. Exit Program\n");
        printf("Choose conversion to perform: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter your desired value to convert: ");
            scanf("%f", &a);
            float result = kmmile(a);
            printf("%.2f KM = %.2f Miles\n", a , result);
        }
        else if (choice == 2) {
            printf("Enter your desired value to convert: ");
            scanf("%f", &a);
            float result = cminch(a);
            printf("%.2f CM = %.2f Inches\n", a, result);
        }
        else if (choice == 3) {
            printf("Enter your desired value to convert: ");
            scanf("%f", &a);
            float result = celfar(a);
            printf("%.2f Celcius = %.2f Farenheit\n", a, result);

        }
        else if (choice == 4) {
            printf("Enter your desired value to convert: ");
            scanf("%f", &a);
            float result = pkg(a);
            printf("%.2f KG = %.2f Pounds \n", a, result);
        }
        else if (choice == 0) {
            printf("Leaving program! \n");
            break;
        }
        else {
            printf("Invalid Input! Try again \n");
        }
    }
}


float kmmile(int x) {
    return x * 0.621371;
}
float cminch(int x) {
    return x * 0.3937;
}
float celfar(int x){
    return (x * 9/5) + 32;
}
float pkg(int x) {
    return x * 2.20462;
}

int main() {
    interface();
    return 0;
}
