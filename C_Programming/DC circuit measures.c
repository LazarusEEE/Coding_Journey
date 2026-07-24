#include <stdio.h>
#include<math.h>

int main()
{
    int pick;
    float R1, R2, R3, RT;
    float Vin, Vout;
    float It, I1;
    float Rab, Rbc, Rca, Ra, Rb, Rc;
    float V, R = 0, I;

    printf(" DC CIRCUIT ANALYSER\n");
    printf("1. Series Resistance\n");
    printf("2. Parallel Resistance\n");
    printf("3. Voltage Divider\n");
    printf("4. Current Divider\n");
    printf("5. Delta to Wye Conversion\n");
    printf("6. Source Transformation\n");

    printf("\nEnter pick number: ");
    scanf("%d", &pick);


    switch(pick)
    {

    case 1:
        printf("\nSeries Resistance\n");

        printf("Enter R1: ");
        scanf("%f", &R1);

        printf("Enter R2: ");
        scanf("%f", &R2);

        printf("Enter R3: ");
        scanf("%f", &R3);

        RT=R1+R2+R3;

        printf("Total Resistance = %.2f Ohm", RT);
        break;


    case 2:
        printf("\nParallel Resistance\n");

        printf("Enter R1: ");
        scanf("%f", &R1);

        printf("Enter R2: ");
        scanf("%f", &R2);

        printf("Enter R3: ");
        scanf("%f", &R3);


        RT=1/(1/R1+1/R2+1/R3);

        printf("Total Resistance = %.2f Ohm", RT);
        break;



    case 3:
        printf("\nVoltage Divider\n");

        printf("Input Voltage: ");
        scanf("%f", &Vin);

        printf("R1: ");
        scanf("%f", &R1);

        printf("R2: ");
        scanf("%f", &R2);


        Vout=Vin*(R2/(R1+R2));

        printf("Output Voltage = %.2f Volt", Vout);
        break;



    case 4:
        printf("\nCurrent Divider\n");

        printf("Total Current: ");
        scanf("%f", &It);

        printf("R1: ");
        scanf("%f", &R1);

        printf("R2: ");
        scanf("%f", &R2);


        I1=It*(R2/(R1+R2));

        printf("Current through R1 = %.2f Amp", I1);

        break;



    case 5:

        printf("\nDelta to Wye Conversion\n");

        printf("Rab: ");
        scanf("%f", &Rab);

        printf("Rbc: ");
        scanf("%f", &Rbc);

        printf("Rca: ");
        scanf("%f", &Rca);


        Ra=(Rab*Rca)/(Rab+Rbc+Rca);

        Rb=(Rab*Rbc)/(Rab+Rbc+Rca);

        Rc=(Rbc*Rca)/(Rab+Rbc+Rca);


        printf("Ra = %.2f Ohm\n",Ra);
        printf("Rb = %.2f Ohm\n",Rb);
        printf("Rc = %.2f Ohm\n",Rc);

        break;



    case 6:

        printf("\nVoltage Source to Current Source\n");

        printf("Voltage(V): ");
        scanf("%f", &V);

        printf("Resistance(Ohm): ");
        scanf("%f", &R);

        if(R == 0) {
            printf("Resistance must be nonzero.\n");
        } else {
            I = V / R;
            printf("Equivalent Current Source = %.2f Amp", I);
        }

        break;



    default:

        printf("Incorrect pick");

    }


    return 0;
}