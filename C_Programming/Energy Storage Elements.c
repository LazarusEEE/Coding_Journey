#include <stdio.h>

int main(void)
{
    int choice;
    float L1, L2, L3, LT;
    float C1, C2, C3, CT;
    float I, V, Energy;

    printf(" ENERGY STORAGE CALCULATOR\n\n");
    printf("1. Inductor Series\n");
    printf("2. Inductor Parallel\n");
    printf("3. Capacitor Series\n");
    printf("4. Capacitor Parallel\n");
    printf("5. Inductor Stored Energy\n");
    printf("6. Capacitor Stored Energy\n\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nInductor Series Combination\n");
            printf("Enter L1(H): ");
            scanf("%f", &L1);
            printf("Enter L2(H): ");
            scanf("%f", &L2);
            printf("Enter L3(H): ");
            scanf("%f", &L3);

            LT = L1 + L2 + L3;
            printf("Total Inductance = %.4f H", LT);
            break;

        case 2:
            printf("\nInductor Parallel Combination\n");
            printf("Enter L1(H): ");
            scanf("%f", &L1);
            printf("Enter L2(H): ");
            scanf("%f", &L2);
            printf("Enter L3(H): ");
            scanf("%f", &L3);

            LT = 1.0f / (1.0f / L1 + 1.0f / L2 + 1.0f / L3);
            printf("Total Inductance = %.4f H", LT);
            break;

        case 3:
            printf("\nCapacitor Series Combination\n");
            printf("Enter C1(F): ");
            scanf("%f", &C1);
            printf("Enter C2(F): ");
            scanf("%f", &C2);
            printf("Enter C3(F): ");
            scanf("%f", &C3);

            CT = 1.0f / (1.0f / C1 + 1.0f / C2 + 1.0f / C3);
            printf("Total Capacitance = %.6f F", CT);
            break;

        case 4:
            printf("\nCapacitor Parallel Combination\n");
            printf("Enter C1(F): ");
            scanf("%f", &C1);
            printf("Enter C2(F): ");
            scanf("%f", &C2);
            printf("Enter C3(F): ");
            scanf("%f", &C3);

            CT = C1 + C2 + C3;
            printf("Total Capacitance = %.6f F", CT);
            break;

        case 5:
            printf("\nInductor Stored Energy\n");
            printf("Enter Inductance(H): ");
            scanf("%f", &L1);
            printf("Enter Current(A): ");
            scanf("%f", &I);

            Energy = 0.5f * L1 * I * I;
            printf("Stored Energy = %.4f Joule", Energy);
            break;

        case 6:
            printf("\nCapacitor Stored Energy\n");
            printf("Enter Capacitance(F): ");
            scanf("%f", &C1);
            printf("Enter Voltage(V): ");
            scanf("%f", &V);

            Energy = 0.5f * C1 * V * V;
            printf("Stored Energy = %.4f Joule", Energy);
            break;

        default:
            printf("Invalid Choice");
            break;
    }

    return 0;
}
