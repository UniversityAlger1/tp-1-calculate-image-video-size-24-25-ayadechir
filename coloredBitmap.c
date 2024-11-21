#include <stdio.h>
#include <string.h>

// Function to calculate the size of a colored Bitmap image
// Parameters:
//   w: width of the image
//   h: height of the image
//   unit: the unit for the result ('bt', 'ko', 'mo', 'go')
// Return value:
//   The size of the colored Bitmap image in the specified unit
float coloredBitmap(int w, int h, const char* unit) {
    // Calculate the size in bits
    long long size_in_bits = w * h * 3 * 8;  // 3 bytes per pixel, each byte = 8 bits

    // Convert the size to the requested unit
    if (strcmp(unit, "bt") == 0) {
        return (float)size_in_bits;  // Size in bits
    } else if (strcmp(unit, "ko") == 0) {
        return (float)(size_in_bits / 1000);  // Size in kilobits (1 kilobit = 1000 bits)
    } else if (strcmp(unit, "mo") == 0) {
        return (float)(size_in_bits / 1000000);  // Size in megabits (1 megabit = 1,000,000 bits)
    } else if (strcmp(unit, "go") == 0) {
        return (float)(size_in_bits / 1000000000);  // Size in gigabits (1 gigabit = 1,000,000,000 bits)
    } else {
        printf("Unknown unit: %s\n", unit);
        return -1;  // Invalid unit
    }
}

int main() {
    int width, height;
    char unit[3];

    // Input for width, height, and unit
    printf("Enter the width of the image: ");
    scanf("%d", &width);

    printf("Enter the height of the image: ");
    scanf("%d", &height);

    printf("Enter the unit ('bt', 'ko', 'mo', 'go'): ");
    scanf("%s", unit);

    // Calculate the size
    float size = coloredBitmap(width, height, unit);

    if (size != -1) {
        printf("The size of the colored bitmap image is: %.2f %s\n", size, unit);
    }

    return 0;
}

