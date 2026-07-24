#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void)
{
    int choice;
    double R, L, C, V, f;
    double XL, XC, Z, I;
    double phase, pf;

    printf("RLC CIRCUIT ANALYZER\n");
    printf("1. RL Circuit\n");
    printf("2. RC Circuit\n");
    printf("3. RLC Circuit\n");
    printf("4. Power Factor\n");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    printf("\nEnter Resistance R(Ohm): ");
    scanf("%lf", &R);
    printf("Enter Frequency(Hz): ");
    scanf("%lf", &f);
    printf("Enter Supply Voltage(V): ");
    scanf("%lf", &V);

    switch (choice)
    {
        case 1:
            printf("\nRL Circuit Analysis\n");
            printf("Enter Inductance(H): ");
            scanf("%lf", &L);

            XL = 2.0 * PI * f * L;
            Z = sqrt(R * R + XL * XL);
            I = V / Z;
            phase = atan(XL / R) * 180.0 / PI;
            pf = cos(phase * PI / 180.0);

            printf("\nInductive Reactance XL = %.2f Ohm", XL);
            printf("\nImpedance Z = %.2f Ohm", Z);
            printf("\nCurrent = %.2f A", I);
            printf("\nPhase Angle = %.2f degree", phase);
            printf("\nPower Factor = %.3f\n", pf);
            break;

        case 2:
            printf("\nRC Circuit Analysis\n");
            printf("Enter Capacitance(F): ");
            scanf("%lf", &C);

            XC = 1.0 / (2.0 * PI * f * C);
            Z = sqrt(R * R + XC * XC);
            I = V / Z;
            phase = -atan(XC / R) * 180.0 / PI;
            pf = cos(phase * PI / 180.0);

            printf("\nCapacitive Reactance XC = %.2f Ohm", XC);
            printf("\nImpedance Z = %.2f Ohm", Z);
            printf("\nCurrent = %.2f A", I);
            printf("\nPhase Angle = %.2f degree", phase);
            printf("\nPower Factor = %.3f\n", pf);
            break;

        case 3:
            printf("\nRLC Series Circuit Analysis\n");
            printf("Enter Inductance(H): ");
            scanf("%lf", &L);
            printf("Enter Capacitance(F): ");
            scanf("%lf", &C);

            XL = 2.0 * PI * f * L;
            XC = 1.0 / (2.0 * PI * f * C);
            Z = sqrt(R * R + (XL - XC) * (XL - XC));
            I = V / Z;
            phase = atan((XL - XC) / R) * 180.0 / PI;
            pf = cos(phase * PI / 180.0);

            printf("\nXL = %.2f Ohm", XL);
            printf("\nXC = %.2f Ohm", XC);
            printf("\nImpedance Z = %.2f Ohm", Z);
            printf("\nCurrent = %.2f A", I);
            printf("\nPhase Angle = %.2f degree", phase);
            printf("\nPower Factor = %.3f\n", pf);
            break;

        case 4:
            printf("\nPower Factor Calculation\n");
            printf("Enter Phase Angle: ");
            scanf("%lf", &phase);

            pf = cos(phase * PI / 180.0);
            printf("Power Factor = %.3f\n", pf);
            break;

        default:
            printf("Invalid Choice\n");
            break;
    }

    return 0;
}
