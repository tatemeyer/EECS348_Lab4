/*Temperature Conversion Utility
Prompt user for temp
choose scale (F, C, K)
choose target scale
convert -> display -> Categorize -> advice
*/
#include <stdio.h>

float Convert_Temp(float temp, char scale, char target_scale) {
    float converted_temp;
    float temp_in_c;
    switch(scale) {
        case 'F':
            temp_in_c = ((temp - 32) * 5.0) / 9.0;
            break;
        case 'C':
            temp_in_c = temp;
            break;
        case 'K':
            temp_in_c = temp - 273.15;
            break;
        default:
            printf("Invalid scale input. Please enter F, C, or K.\n");
            return -1; 
    }
    switch(target_scale) {
        case 'F':
            converted_temp = (temp_in_c * (9.0 / 5.0)) + 32;
            break;
        case 'C':
            converted_temp = temp_in_c;
            break;
        case 'K':
            converted_temp = temp_in_c + 273.15;
            break;
        default:
            printf("Invalid target scale input. Please enter F, C, or K.\n");
            return -1; 
    }
    return temp_in_c, converted_temp;
}


void main() {
    float temp;
    char scale, target_scale;
    char scales[3] = {'F', 'C', 'K'};
    
    printf("Enter the temperature (float):");
    scanf("%f", &temp);
    printf("Enter the scale (F, C, K):");
    scanf(" %c", &scale);
    printf("Enter the target scale (F, C, K):");
    scanf(" %c", &target_scale);

    float temp_in_c, converted_temp = Convert_Temp(temp, scale, target_scale);
    if (converted_temp == -1) {
        return;
    }
    printf("Temperature in Celsius: %.2f C\n", temp_in_c);
    printf("Converted Temperature: %.2f %c\n", converted_temp, target_scale);
    if (temp_in_c >= 35) {
        printf("Extreme heat! Stay hydrated. \n");
    }
    else if (temp_in_c >= 25) {
        printf("Hot weather! wear shorts. \n");
    }
    else if (temp_in_c >= 10) {
        printf("Comfortable weather! Enjoy the day. \n");
    }
    else if (temp_in_c >= 0) {
        printf("Cold weather! Wear a jacket. \n");
    }
    else if (temp_in_c < 0){
        printf("Freezing weather! Stay warm. \n");
    }

}
