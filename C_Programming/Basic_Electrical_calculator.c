#include <stdio.h>

int main()
{
    int option;
    float voltage, current, resistance, power, energy, time;

    printf("   BASIC ELECTRICAL CALCULATOR   \n");

    printf("1. Voltage\n");
    printf("2. Current\n");
    printf("3. Resistance\n");
    printf("4. Power\n");
    printf("5. Energy\n");
    printf("6. END\n");

    printf("\nEnter: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            printf("\nVoltage (V = I x R)\n");
            printf("Enter Current (Amp): ");
            scanf("%f", &current);
            printf("Enter Resistance (Ohm): ");
            scanf("%f", &resistance);

            voltage = current * resistance;

            printf("Voltage = %.2f V\n", voltage);
            break;


        case 2:
            printf("\nCurrent (I = V / R)\n");
            printf("Enter Voltage (V): ");
            scanf("%f", &voltage);
            printf("Enter Resistance (Ohm): ");
            scanf("%f", &resistance);

            if(resistance != 0)
            {
                current = voltage / resistance;
                printf("Current = %.2f Amp\n", current);
            }
            else
                printf("Resistance cannot be zero!");

            break;


        case 3:
            printf("\nResistance (R = V / I)\n");
            printf("Enter Voltage (Volt): ");
            scanf("%f", &voltage);
            printf("Enter Current (Amp): ");
            scanf("%f", &current);

            if(current != 0)
            {
                resistance = voltage / current;
                printf("Resistance = %.2f Ohm\n", resistance);
            }
            else
                printf("Current cannot be zero!");

            break;


        case 4:
            printf("\nPower (P = V x I)\n");
            printf("Enter Voltage (Volt): ");
            scanf("%f", &voltage);
            printf("Enter Current (Amp): ");
            scanf("%f", &current);

            power = voltage * current;

            printf("Power = %.2f Watt\n", power);
            break;


        case 5:
            printf("\nEnergy Calculator (E = P x t)\n");
            printf("Enter Power (Watt): ");
            scanf("%f", &power);

            printf("Enter Time (Hour): ");
            scanf("%f", &time);

            energy = power * time;

            printf("Energy = %.2f Wh\n", energy);
            break;


        case 6:
            printf("Exiting Calculator...\n");
            break;


        default:
            printf("Invalid option\n");
    }


    return 0;
}