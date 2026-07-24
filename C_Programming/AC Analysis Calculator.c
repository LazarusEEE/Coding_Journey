#include <stdio.h>
#include <math.h>

#define PI 3.14159f

int main(void)
{
    int choice;
    float Vm, Vrms;
    float f, w;
    float R, L, C;
    float X;
    float magnitude, angle;

    printf(" AC CIRCUIT ANALYZER\n\n");
    printf("1. Peak to RMS Voltage\n");
    printf("2. RMS to Peak Voltage\n");
    printf("3. Frequency to Angular Frequency\n");
    printf("4. Angular Frequency to Frequency\n");
    printf("5. Inductor Impedance\n");
    printf("6. Capacitor Impedance\n");
    printf("7. Phasor Magnitude and Angle\n\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nPeak Voltage(Vm): ");
            scanf("%f", &Vm);

            Vrms = Vm / sqrtf(2.0f);
            printf("RMS Voltage = %.2f V", Vrms);
            break;

        case 2:
            printf("\nRMS Voltage: ");
            scanf("%f", &Vrms);

            Vm = Vrms * sqrtf(2.0f);
            printf("Peak Voltage = %.2f V", Vm);
            break;

        case 3:
            printf("\nFrequency(Hz): ");
            scanf("%f", &f);

            w = 2.0f * PI * f;
            printf("Angular Frequency = %.2f rad/s", w);
            break;

        case 4:
            printf("\nAngular Frequency(rad/s): ");
            scanf("%f", &w);

            f = w / (2.0f * PI);
            printf("Frequency = %.2f Hz", f);
            break;

        case 5:
            printf("\nInductor Impedance\n");
            printf("Inductance(H): ");
            scanf("%f", &L);
            printf("Frequency(Hz): ");
            scanf("%f", &f);

            w = 2.0f * PI * f;
            X = w * L;
            printf("ZL = j%.2f Ohm", X);
            break;

        case 6:
            printf("\nCapacitor Impedance\n");
            printf("Capacitance(F): ");
            scanf("%f", &C);
            printf("Frequency(Hz): ");
            scanf("%f", &f);

            w = 2.0f * PI * f;
            X = 1.0f / (w * C);
            printf("ZC = -j%.2f Ohm", X);
            break;

        case 7:
            printf("\nPhasor Conversion\n");
            printf("Real Part(R): ");
            scanf("%f", &R);
            printf("Imaginary Part(X): ");
            scanf("%f", &X);

            magnitude = sqrtf(R * R + X * X);
            angle = atan2f(X, R) * (180.0f / PI);

            printf("Magnitude = %.2f", magnitude);
            printf("\nPhase Angle = %.2f degree", angle);
            break;

        default:
            printf("Invalid Choice");
            break;
    }

    return 0;
}
