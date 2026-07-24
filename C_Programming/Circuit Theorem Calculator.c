#include <stdio.h>

int main(void)
{
    int select;
    float V, Vs, R, R1, R2, Rth, Vth, RL;
    float In, Pmax;
    float I1, I2;
    float I;

    printf(" CIRCUIT THEOREM ANALYZER\n\n");
    printf("1. Thevenin Equivalent\n");
    printf("2. Norton Equivalent\n");
    printf("3. Maximum Power Transfer\n");
    printf("4. Superposition Theorem\n");
    printf("5. Node Voltage Method\n");
    printf("6. Mesh Current Method\n\n");

    printf("Enter select: ");
    scanf("%d", &select);

    switch (select)
    {
        case 1:
            printf("\nTHEVENIN EQUIVALENT\n");
            printf("Enter source voltage Vs: ");
            scanf("%f", &Vs);
            printf("Enter resistor R1 (series): ");
            scanf("%f", &R1);
            printf("Enter resistor R2 (output resistor): ");
            scanf("%f", &R2);

            if (R1 <= 0.0f || R2 <= 0.0f) {
                printf("Invalid resistor values\n");
                break;
            }

            Vth = Vs * R2 / (R1 + R2);
            Rth = R1 + R2;

            printf("\nEquivalent Voltage Vth = %.2f V", Vth);
            printf("\nEquivalent Resistance Rth = %.2f Ohm", Rth);
            break;

        case 2:
            printf("\nNORTON EQUIVALENT\n");
            printf("Enter Vth: ");
            scanf("%f", &Vth);
            printf("Enter Rth: ");
            scanf("%f", &Rth);

            In = Vth / Rth;
            printf("Norton Current = %.2f Amp\n", In);
            printf("Norton Resistance = %.2f Ohm", Rth);
            break;

        case 3:
            printf("\nMAXIMUM POWER TRANSFER\n");
            printf("Enter Vth: ");
            scanf("%f", &Vth);
            printf("Enter Rth: ");
            scanf("%f", &Rth);

            RL = Rth;
            Pmax = (Vth * Vth) / (4.0f * Rth);

            printf("Load Resistance = %.2f Ohm\n", RL);
            printf("Maximum Power = %.2f Watt", Pmax);
            break;

        case 4:
            printf("\nSUPERPOSITION THEOREM\n");
            printf("Enter effect of Source 1: ");
            scanf("%f", &I1);
            printf("Enter effect of Source 2: ");
            scanf("%f", &I2);

            I = I1 + I2;
            printf("Total Response = %.2f", I);
            break;

        case 5:
            printf("\nNODE VOLTAGE METHOD\n");
            printf("Enter Current Source: ");
            scanf("%f", &I);
            printf("Enter Resistance: ");
            scanf("%f", &R);

            V = I * R;
            printf("Node Voltage = %.2f Volt", V);
            break;

        case 6:
            printf("\nMESH CURRENT METHOD\n");
            printf("Enter Voltage Source: ");
            scanf("%f", &V);
            printf("Enter Loop Resistance: ");
            scanf("%f", &R);

            I = V / R;
            printf("Mesh Current = %.2f Amp", I);
            break;

        default:
            printf("Invalid select");
            break;
    }

    return 0;
}
