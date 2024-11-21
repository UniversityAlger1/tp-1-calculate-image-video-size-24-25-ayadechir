#include "config/grayScaleImage.h"

// Parameters:
//   w: width of the image
//   h: height of the image
// Return value:
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
    // Total size in bytes 
    return (float)(w * h);
}

int main() {
    int width, height;

    // Input for width and height
    printf("Enter the width of the image: ");
    scanf("%d", &width);

    printf("Enter the height of the image: ");
    scanf("%d", &height);

    // Calculate the size
    float size = grayScaleImage(width, height);
    printf("The size of the grayscale bitmap image is: %.2f bytes\n", size);

    return 0;
}

