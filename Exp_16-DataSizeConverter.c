#include <stdio.h>

void convertDataSize(double size, int fromUnit, int toUnit) {
    const double conversionFactors[] = {1, 1024, 1024 * 1024, 1024 * 1024 * 1024, 1024.0 * 1024 * 1024 * 1024};
    
    double sizeInBytes = size * conversionFactors[fromUnit];

    double convertedSize = sizeInBytes / conversionFactors[toUnit];

    printf("\nConverted Size: %.2lf\n", convertedSize);
}

int main() {
    int fromUnit, toUnit;
    double size;

    printf("Data Size Units:\n");
    printf("1. Bytes\n");
    printf("2. Kilobytes (KB)\n");
    printf("3. Megabytes (MB)\n");
    printf("4. Gigabytes (GB)\n");
    printf("5. Terabytes (TB)\n");

    printf("\nEnter the size: ");
    scanf("%lf", &size);

    printf("Enter the unit of the size (1-5): ");
    scanf("%d", &fromUnit);

    printf("Enter the unit to convert to (1-5): ");
    scanf("%d", &toUnit);

    if (fromUnit < 1 || fromUnit > 5 || toUnit < 1 || toUnit > 5) {
        printf("Invalid unit selection. Please choose between 1 and 5.\n");
        return 1;
    }

    convertDataSize(size, fromUnit - 1, toUnit - 1);

    return 0;
}
