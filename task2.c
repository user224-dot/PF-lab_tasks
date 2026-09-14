#include <stdio.h>
int main(){
    int entry_test_score;
    float FCS_Percentage;
    float combined_score;
    printf("Enter your entry test score: ");
    scanf("%d",&entry_test_score);
    printf("Enter your FSC percentage: ");
    scanf("%f",&FCS_Percentage);
    combined_score = (entry_test_score*0.5 + FCS_Percentage*0.5);
    printf("Your combined result is: %f\n", combined_score);

    if(combined_score>=80){
        printf("You have been selected for CS program!");
    }
    else if (combined_score>=65 && combined_score<=79){
        printf("You have selected for SE program!");
    }
    else if (combined_score>=50 && combined_score<=64){
        printf("You have been selected for Information Technology program!");
    }
    else{
        printf("You are not selected for any program");
    }
    

    return 0;
}
