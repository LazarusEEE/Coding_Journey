#include <stdio.h>
#include <math.h>

#define PI 3.14159f

int main(void)
{
    int elect;
    float V, I, angle;
    float P, Q, S;
    float Rth, Xth;

    printf(" POWER SYSTEM CALCULATOR\n\n");
    printf("1. Real Power (P)\n");
    printf("2. Reactive Power (Q)\n");
    printf("3. Apparent Power (S)\n");
    printf("4. Volt-Ampere Calculation\n");
    printf("5. Impedance Matching\n\n");

    printf("Enter elect: ");
    scanf("%d", &elect);

    switch (elect)
    {
        case 1:
            printf("\nReal Power Calculation\n");
            printf("Voltage(V): ");
            scanf("%f", &V);
            printf("Current(A): ");
            scanf("%f", &I);
            printf("Phase Angle(degree): ");
            scanf("%f", &angle);

            P = V * I * cosf(angle * PI / 180.0f);
            printf("Real Power = %.2f Watt", P);
            break;

        case 2:
            printf("\nReactive Power Calculation\n");
            printf("Voltage(V): ");
            scanf("%f", &V);
            printf("Current(A): ");
            scanf("%f", &I);
            printf("Phase Angle(degree): ");
            scanf("%f", &angle);

            Q = V * I * sinf(angle * PI / 180.0f);
            printf("Reactive Power = %.2f VAR", Q);
            break;

        case 3:
            printf("\nApparent Power Calculation\n");
            printf("Voltage(V): ");
            scanf("%f", &V);
            printf("Current(A): ");
            scanf("%f", &I);

            S = V * I;
            printf("Apparent Power = %.2f VA", S);
            break;

        case 4:
            printf("\nVolt-Ampere Calculation\n");
            printf("RMS Voltage: ");
            scanf("%f", &V);
            printf("RMS Current: ");
            scanf("%f", &I);

            S = V * I;
            printf("VA Rating = %.2f VA", S);
            break;

        case 5:
            printf("\nImpedance Matching\n");
            printf("Source Resistance Rth: ");
            scanf("%f", &Rth);
            printf("Source Reactance Xth: ");
            scanf("%f", &Xth);

            printf("\nLoad Impedance should be:");
            printf("\nResistance = %.2f Ohm", Rth);
            printf("\nReactance = %.2f Ohm", -Xth);
            break;

        default:
            printf("Invalid Choice");
            break;
    }

    return 0;
}
