#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUSES 100

typedef struct {
    char bus_no[20];
    char user_name[50];
    char route[100];
    int seat;
    
} Bus;
float time;
float payment;

int main() {
    Bus buses[MAX_BUSES];
    int num_buses = 0;

    while (num_buses < MAX_BUSES) {
        Bus new_bus;
        printf("********************************************WElCOME******************************************\n");
        printf("*************************************Thanks for Chooing Our Service*****************************\n");
        printf("Enter bus number: ");
        fgets(new_bus.bus_no, sizeof(new_bus.bus_no), stdin);
        new_bus.bus_no[strcspn(new_bus.bus_no, "\n")] = '\0';

        printf("Enter your name: ");
        fgets(new_bus.user_name, sizeof(new_bus.user_name), stdin);
        new_bus.user_name[strcspn(new_bus.user_name, "\n")] = '\0';

        printf("Enter your route: ");
        fgets(new_bus.route, sizeof(new_bus.route), stdin);
        new_bus.route[strcspn(new_bus.route, "\n")] = '\0';

        printf("Enter your Seat: ");
        scanf("%d", &new_bus.seat);
        printf("Enter your Timing: ");
        scanf("%f", &time);
        getchar();
        printf("Enter your PAyment: ");
        scanf("%f",&payment);
        buses[num_buses++] = new_bus;
        char choice;
        printf("\nDo you want to register another bus? (Y/N)\n");
        scanf("%c", &choice);
        getchar();

        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }

    printf("********************************************************Registered Buses:******************************************************************\n");
    for (int i = 0; i < num_buses; i++) {
        printf("Bus %d:\n", i + 1);
        printf("Bus number: %s\n", buses[i].bus_no);
        printf("Your name: %s\n", buses[i].user_name);
        printf("Route: %s\n", buses[i].route);
        printf("Seat Number: %d\n", buses[i].seat);
        printf("Paid: %d",payment);
        printf("\n");
    }

    return 0;
}
