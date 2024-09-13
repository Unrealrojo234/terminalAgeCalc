#include <stdio.h>
//Age calculator program
int main(){
    int yearBorn;
    int currentYear;
    printf("\nWhich year were you born:");
    scanf("\n%d", &yearBorn);

    printf("\nThe Current Year: ");
    scanf("\n%d",&currentYear);

    //Calcs
    int age = currentYear-yearBorn;

    printf("\nYour are %d years old\n", age);
    return 0;
}
