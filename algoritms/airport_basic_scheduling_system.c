#include <stdio.h>
#include <stdlib.h>

// prototypes
void filter_by(int filter_param);
int show_main_menu(void);
void main_controller(int choose);

// global arrays
int n_flight[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, n_tickets[12];

char* origin[12] = {"India", "China", "USA", "Brazil", "Brazil", "Brazil", "USA", "Japan", "India", "China", "USA", "USA"},
destiny[12] = {"USA", "Brazil", "Brazil", "USA", "USA", "Japan", "India", "China", "USA", "Brazil", "Brazil", "Brazil", "China"};

int main(void) {
  int choose;
  time_t t;

  //srand setup
  srand((unsigned) t);

  //  n_tickets setup
  for (int i = 0; i < 12; i++) {
    n_tickets[i] = rand() % 50;
  }
    n_tickets[5] = 0;

  do {
    choose = show_main_menu();
    main_controller(choose);
  } while (choose != 3);

  printf("\nGoodbye...");
  exit(0);
  
  return 0;
}

int show_main_menu(void) {
  int main_choose;
  
  printf("-------- Welcome to airport schedule system --------\n");
  printf("Choose a option\n1. Consult\n2. Schedule\n3. Exit\n>: ");
  do {
    scanf("%d", &main_choose);

    if(main_choose < 1 || main_choose > 3) {
      printf("\n\nChoose a valid option!\n>: ");
    }
  } while(main_choose < 1 || main_choose > 3);

  return main_choose;
}

int show_consult_menu(void) {
  int consult_choose;
  
  printf("\nChoose by filter\n1. Flights number\n2. Flights origin\n3. Flights destiny\n>: ");
  do {
    scanf("%d", &consult_choose);

    if(consult_choose < 1 || consult_choose > 3) {
      printf("\n\nChoose a valid option!\n>: ");
    }
  } while(consult_choose < 1 || consult_choose > 3);

  return consult_choose;
}

int show_schedule_menu(void) {
  int schedule_n_flight, ticket_index = -1;
  
  printf("\nInput the flight number\n>: ");
  do {
    scanf("%d", &schedule_n_flight);

    for (int i = 0; i < 12; i++) {
      if (schedule_n_flight == n_flight[i]) {
        ticket_index = i;
      }
    }
    
    if(ticket_index == -1) {
      printf("\n\nUndefined flight number! Input another\n>: ");
    }
  } while(ticket_index == -1);

  return ticket_index;
}

void main_controller(int choose) {
  int consult_choose, ticket_index;
  
  switch (choose) {
    case 1:
      consult_choose = show_consult_menu();
      filter_by(consult_choose);
      
    break;

    case 2:
      ticket_index = show_schedule_menu();
      
      if(n_tickets[ticket_index] == 0) {
        printf("Full flight!");
      } else {
        n_tickets[ticket_index]--;
        printf("Succesful schedule!");
      }
    
    break;
  }

  printf("\n\n");
}

void filter_by(int filter_param) {
  switch (filter_param) {
    case 1:
      printf("Flight number\tNumber of tickets");
      for (int i = 0; i < 12; i++) {
        printf("\n%d\t\t\t\t%d", n_flight[i], n_tickets[i]);
      }
      
    break;

    case 2:
      printf("\nOrigin\tNumber of tickets");
      for (int i = 0; i < 12; i++) {
        printf("\n%s\t\t%d", origin[i], n_tickets[i]);
      }
      
    break;

    case 3:
      printf("\nDestiny\t\tNumber of tickets");
      for (int i = 0; i < 12; i++) {
        printf("\n%s\t\t%d", origin[i], n_tickets[i]);
      }
      
    break;
  }

  printf("\n\n");
}