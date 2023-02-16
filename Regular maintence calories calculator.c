#include<stdio.h>

int main() {
    float weight, height, age, bmr, activityLevel, maintenanceCalories;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in cm: ");
    scanf("%f", &height);

    printf("Enter your age in years: ");
    scanf("%f", &age);

   
    bmr = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);

    printf("\nChoose your activity level:\n");
    printf("1. Sedentary (little or no exercise)\n");
    printf("2. Lightly active (light exercise or sports 1-3 days a week)\n");
    printf("3. Moderately active (moderate exercise or sports 3-5 days a week)\n");
    printf("4. Very active (hard exercise or sports 6-7 days a week)\n");
    printf("5. Super active (very hard exercise or sports, physical job or training twice a day)\n");
    printf("Enter your choice (1-5): ");
    scanf("%f", &activityLevel);

    switch((int)activityLevel) {
        case 1:
            maintenanceCalories = bmr * 1.2;
            break;
        case 2:
            maintenanceCalories = bmr * 1.375;
            break;
        case 3:
            maintenanceCalories = bmr * 1.55;
            break;
        case 4:
            maintenanceCalories = bmr * 1.725;
            break;
        case 5:
            maintenanceCalories = bmr * 1.9;
            break;
        default:
            printf("Invalid input. Please choose a number between 1 and 5.\n");
            return 1;
    }


    printf("\nYour maintenance calories are: %0.2f\n", maintenanceCalories);

    return 0;
}
