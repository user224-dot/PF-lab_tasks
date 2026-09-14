#include <stdio.h>
int main(){
    int heart_rate;
    float temperature;
    printf("Enter heart rate: ");
    scanf("%d",&heart_rate);
    printf("Enter temperature: ");
    scanf("%f",&temperature);
    if (heart_rate>120 || temperature>39){
        printf("Crtical condition-immediate action!");
    }
    else if((heart_rate>=100 && heart_rate<=120)&&(temperature>=37.5&& temperature<=39)){
        printf("Urgent");
    }
    else{
        printf("Patient is normal");
    }
    return 0;
}
