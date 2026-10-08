#include <stdio.h>

int main(void)
{
    int zone;
    double w, fee;

    printf("Zone (1-3): ");
    scanf("%d", &zone);
    printf("Weight (kg): ");
    scanf("%lf", &w);

    switch (zone)
    {
        case 1:
            if (w <= 1)       fee = 40;
            else if (w <= 5)  fee = 70;
            else if (w <= 10) fee = 120;
            else              fee = 200;
            break;
        case 2:
            if (w <= 1)       fee = 60;
            else if (w <= 5)  fee = 110;
            else if (w <= 10) fee = 180;
            else              fee = 300;
            break;
        case 3:
            if (w <= 1)       fee = 350;
            else if (w <= 5)  fee = 800;
            else if (w <= 10) fee = 1500;
            else              fee = 2500;
            break;
        default:
            printf("Error: invalid zone code %d\n", zone);
            return 1;
    }
    printf("Delivery fee = %.0f Baht\n", fee);
    return 0;
}
