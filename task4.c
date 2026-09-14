#include <stdio.h>
int main(){
    int gym_type, time_slot;
    float fee;
    printf("Enter the gym_type (1-student,2-Regular,3-senior citizen): ");
    scanf("%d",&gym_type);
    printf("Enter your timing(1-Morning,2-Evening): ");
    scanf("%d",&time_slot);

    switch(gym_type){
    case 1:
        fee=2000;
        break;

    case 2:
        fee=3500;
        break;

    case 3:
        fee=2500;
        break;

    default:
        printf("Wrong input!");
        return 0;

    }
    if (time_slot==1){
        fee=fee*0.85;
    }
    else if(time_slot==2){
        fee=fee;
    }
    else{
        printf("Invlaid slot!");
        return 0;
    }
    
    
    printf("Final monthly fee= Rs %.2f",fee);
    return 0;

}
