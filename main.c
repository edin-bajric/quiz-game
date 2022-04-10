#include <stdio.h>

void print_menu(){
    printf("+--------------Quiz Game--------------+");
    printf("\n| Options:                            |");
    printf("\n+-------------------------------------+");
    printf("\n| 1. Programming Quiz                 |");
    printf("\n| 2. Computer Science Quiz            |");
    printf("\n| 3. Mathematics Quiz                 |");
    printf("\n| 4. Physics Quiz                     |");
    printf("\n| 5. Show Last Score                  |");
    printf("\n| 6. Show Highest Score               |");
    printf("\n| 7. Show Options                     |");
    printf("\n| 8. Exit                             |");
    printf("\n+-------------------------------------+");
}
void programming_quiz(){
    printf("Programming Quiz\n");
}

void computer_science_quiz(){
    printf("Computer Science Quiz\n");
}

void mathematics_quiz(){
    printf("Mathematics Quiz\n");
}

void physics_quiz(){
    printf("Physics Quiz\n");
}

int main(void) {
    int choice;
    int loop = 1;
    print_menu();

    while (loop) {
        printf("\nEnter your choice [1-8]: \n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Programming Quiz selected\n");
                while (1){
                    char option;
                    printf("Press 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        programming_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("Programming Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 2:
                printf("Computer Science Quiz selected\n");
                while(1){
                    char option;
                    printf("Press 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        computer_science_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("Computer Science Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 3:
                printf("Mathematics Quiz selected\n");
                while(1){
                    char option;
                    printf("Press 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        mathematics_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("Mathematics Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 4:
                printf("Physics Quiz selected\n");
                while(1){
                    char option;
                    printf("Press 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        physics_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("Physics Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                print_menu();
                break;

            case 8:
                loop = 0;
                break;

            default:
                printf("Error: Select a valid option [1-8]");
                break;
        }

    }

    return 0;
}