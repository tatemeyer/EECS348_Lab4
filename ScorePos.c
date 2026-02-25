// Football Score Possibilities
#include <stdio.h>


int calculate_determine(int score) {
    int possible_points[] = {1, 2, 3, 6};
    if (score == 1) {
        printf("The score of 1 is impossible to achieve in football. \n");
        return 0;
    }



}



void main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);
    calculate_determine(score);
    if (calculate_determine(score) == 0) {

    }
}