
// bmifull.c
//
// Yuxin Wang

#include <stdio.h>
#include <stdlib.h>

int main() {
    int height, weight;
    
    printf("Height> ");
    if (scanf("%d", &height) != 1) {
        fprintf(stderr, "Height is not a positive integer\n");
        return 1;
    }
    if (height <= 0) {
        fprintf(stderr, "Height is not a positive integer\n");
        return 1;
    }
    
    printf("Weight> ");
    if (scanf("%d", &weight) != 1) {
        fprintf(stderr, "Weight is not a positive integer\n");
        return 1;
    }
    if (weight <= 0) {
        fprintf(stderr, "Weight is not a positive integer\n");
        return 1;
    }
    
    double bmi = 703.0 * weight / (height * height);
    printf("The BMI for height %d and weight %d is %.6f\n", 
           height, weight, bmi);
    
    if (bmi < 18.5) {
        printf("This is underweight -- but consult a doctor before doing anything!\n");
    } else if (bmi < 25) {
        printf("This is in a healthy range – but consult a doctor before doing anything!\n");
    } else if (bmi < 30) {
        printf("This is overweight – but consult a doctor before doing anything!\n");
    } else if (bmi < 35) {
        printf("This is class I obese – but consult a doctor before doing anything!\n");
    } else if (bmi < 40) {
        printf("This is class II obese – but consult a doctor before doing anything!\n");
    } else {
        printf("This is class III obese – but consult a doctor before doing anything!\n");
    }
    
    return 0;
}
