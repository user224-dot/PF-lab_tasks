#include <stdio.h>
int main(){
    int zone_type;
    float speed;
    int zone_limit;
    int fine=0;
    printf("Enter zone type(1 = School Zone, 2 =  Highway, 3 = Residential Area): ");
    scanf("%d",&zone_type);
    printf("Enter driver's speed km/h: ");
    scanf("%f",&speed);
    switch(zone_type){
    case 1:
        zone_limit=30;
        break;
    case 2:
        zone_limit=100;
        break;
    case 3:
        zone_limit=50;
        break;
        
    default:
        printf("Invalid input!");
        return 0;

    }
    if (speed<=zone_limit){
        fine=0;
        printf("No violation. fine : rs.%d\n ",fine);
    }
    else if(speed-zone_limit>20){
        fine=1000*2;
        printf("Speed exceeded by more than 20km/h. fine(doubled) = rs.%d\n",fine);
    }
    else {
        fine=1000;
        printf("Speed exceeded. Fine =Rs.%d\n",fine);
    }
    return 0;
}
