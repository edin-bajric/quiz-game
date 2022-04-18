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

void print_smaller_menu(){
    printf("\n1. Programming Quiz | 2.Computer Science Quiz | 3. Mathematics Quiz | 4. Physics Quiz |\n");
    printf("5. Show Last Score | 6. Show Highest Score | 7. Show Options | 8. Exit\n");
}

void programming_quiz(){
    int prog_score = 0;
    char prog_ans;

    printf("Programming Quiz\n");
    printf("Choose your answer by typing the appropriate letter\n");

    //1.
    printf("\n1. How to display output in Java?\n");
    printf("a) print()\n");
    printf("b) System.out.println()\n");
    printf("c) printf()\n");
    printf("d) cout>>\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'b'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) System.out.println()\n", prog_ans);
    }

    //2.
    printf("\n2. Which programming language is the predecessor of C?\n");
    printf("a) C++\n");
    printf("b) B++\n");
    printf("c) B\n");
    printf("d) Mini C\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) B\n", prog_ans);
    }

    //3.
    printf("\n3. Which of the following is not a programming language?\n");
    printf("a) TypeScript\n");
    printf("b) Python\n");
    printf("c) Anaconda\n");
    printf("d) Java\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) Anaconda\n", prog_ans);
    }

    //4.
    printf("\n4. Which command is missing from the SQL line below?\n");
    printf("SELECT *\n______ CUSTOMER\n");
    printf("a) FROM\n");
    printf("b) SELECT\n");
    printf("c) WHERE\n");
    printf("d) ORDER BY\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'a'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: a) FROM\n", prog_ans);
    }

    //5.
    printf("\n5. Python is a ______ programming language.\n");
    printf("a) low-level\n");
    printf("b) mid-level\n");
    printf("c) high-level\n");
    printf("d) none of the above\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) high-level\n", prog_ans);
    }

    //6.
    printf("\n6. Which command will stop an infinite loop?\n");
    printf("a) Alt + C\n");
    printf("b) Shift + C\n");
    printf("c) Esc\n");
    printf("d) Ctrl + C\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'd'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) Ctrl + C\n", prog_ans);
    }

    //7.
    printf("\n7. Which of the following is the correct way of making a string in Java?\n");
    printf("a) String \"Text\";\n");
    printf("b) String text = 'text';\n");
    printf("c) String text = \"text\"\n");
    printf("d) String text = \"text\";\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'd'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) String text = \"text\";\n", prog_ans);
    }

    //8.
    printf("\n8. Which of the following is a valid define statement?\n");
    printf("a) #define MAX=200\n");
    printf("b) #define MAX 200\n");
    printf("c) # define MAX 200\n");
    printf("d) #define MAX 200;\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'b'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) #define MAX 200\n", prog_ans);
    }

    //9.
    printf("\n9. How many keywords are recognized by standard ANSI C?\n");
    printf("a) 30\n");
    printf("b) 24\n");
    printf("c) 32\n");
    printf("d) 36\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'c'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) 32\n", prog_ans);
    }

    //10.
    printf("\n10. What is the process of finding and fixing errors within a program called?\n");
    printf("a) Debugging\n");
    printf("b) Compiling\n");
    printf("c) Executing\n");
    printf("d) Scanning\n");
    printf("Your answer: \n");
    scanf(" %c", &prog_ans);

    if(prog_ans == 'a'){
        printf("Correct!\n");
        prog_score += 10;
    }
    else{
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: a) Debugging\n", prog_ans);
    }

    //score
    int prog_correct = prog_score / 10;
    printf("\nYour score: %d / 100\n", prog_score);
    printf("%d / 10 correct\n", prog_correct);

    print_smaller_menu();
}

void computer_science_quiz() {
    int comps_score = 0;
    char comps_ans;

    printf("Computer Science Quiz\n");
    printf("Choose your answer by typing the appropriate letter\n");

    //1.
    printf("\n1. Which of these was the first fully supported 64-bit operating system?\n");
    printf("\na) Windows Vista");
    printf("\nb) Mac");
    printf("\nc) Linux");
    printf("\nd) Windows XP");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'c') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) Linux\n", comps_ans);
    }

    //2.
    printf("\n2. 1 Terabyte (Tb) =\n");
    printf("\na) 1024 Gb");
    printf("\nb) 1000 Gb");
    printf("\nc) 1200 Gb");
    printf("\nd) 1275 Gb");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'a') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: a) 1024 Gb\n", comps_ans);
    }

    //3.
    printf("\n3. Based on their development, arrange the following computer programing languages in ascending order.\n");
    printf("1) Perl\n2) Python\n3) Ruby\n4) Java Script\n");
    printf("\na) 2, 1, 3, 4");
    printf("\nb) 1, 2, 3, 4");
    printf("\nc) 1, 2, 4, 3");
    printf("\nd) 3, 1, 2, 4");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'b') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) 1, 2, 3, 4\n", comps_ans);
    }

    //4.
    printf("\n4. Which of the following is a communication system that transfers data between components inside a computer?\n");
    printf("\na) RAM");
    printf("\nb) Processor");
    printf("\nc) LAN");
    printf("\nd) Bus");
    printf("\nYour Answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'd') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) Bus\n", comps_ans);
    }

    //5.
    printf("\n5. Which language is directly understood by the computer without the need for a translation program?\n");
    printf("\na) Machine language");
    printf("\nb) High level language");
    printf("\nc) BASIC language");
    printf("\nd) Assembly language");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'a') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: a) Machine language\n", comps_ans);
    }

    //6.
    printf("\n6. What does GUI stand for?\n");
    printf("\na) Graphical User Interim");
    printf("\nb) Geographical User Interruption");
    printf("\nc) Graphical User Interface");
    printf("\nd) Gain Upper Intensity");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'c') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) Graphical User Interface\n", comps_ans);
    }

    //7.
    printf("\n7. Which computer program converts assembly language to machine language?\n");
    printf("\na) Interpreter");
    printf("\nb) Compiler");
    printf("\nc) Comparator");
    printf("\nd) Assembler");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'd') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) Assembler\n", comps_ans);
    }

    //8.
    printf("\n8. What Linux command is used to count the total number of lines, words and characters contained in a file?\n");
    printf("\na) countw");
    printf("\nb) wcount");
    printf("\nc) wc");
    printf("\nd) count p");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'c') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) wc\n", comps_ans);
    }

    //9.
    printf("\n9. What Linux command is used to remove a directory?\n");
    printf("\na) rdir");
    printf("\nb) rmdir");
    printf("\nc) remove");
    printf("\nd) rd");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'b') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) rmdir\n", comps_ans);
    }

    //10.
    printf("\n10. What is a process?\n");
    printf("\na) A program written in a high level programming language kept on a disk");
    printf("\nb) Contents of the main memory");
    printf("\nc) A job in secondary memory");
    printf("\nd) A program in execution");
    printf("\nYour answer:\n");
    scanf(" %c", &comps_ans);

    if (comps_ans == 'd') {
        printf("Correct!\n");
        comps_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) A program in execution\n", comps_ans);
    }

    //score
    int comps_correct = comps_score / 10;
    printf("\nYour score: %d / 100\n", comps_score);
    printf("%d / 10 correct\n", comps_correct);

    print_smaller_menu();

}

void mathematics_quiz(){
    int math_score = 0;
    char math_ans;

    printf("Mathematics Quiz\n");
    printf("Choose your answer by typing the appropriate letter\n");

    //1.
    printf("\n1. What is the factorial value of 0?\n");
    printf("\na) -1");
    printf("\nb) 0");
    printf("\nc) 1");
    printf("\nd) Not defined");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'c') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) 1\n", math_ans);
    }

    //2.
    printf("\n2. 1 is a prime number.\n");
    printf("\na) True");
    printf("\nb) False");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'b') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) False\n", math_ans);
    }

    //3.
    printf("\n3. What is the value of sin at 0?\n");
    printf("\na) 0");
    printf("\nb) 1");
    printf("\nc) 0.84147");
    printf("\nd) 0.5");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'a') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: a) 0\n", math_ans);
    }

    //4.
    printf("\n4. Which formula is used to calculate the area of a rectangle?\n");
    printf("\na) A = a + b");
    printf("\nb) A = a - b");
    printf("\nc) A = a / b");
    printf("\nd) A = a * b");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'd') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) A = a * b\n", math_ans);
    }

    //5.
    printf("\n5. Which number is written MCMLXXVIII in Roman numerals?\n");
    printf("\na) 2053");
    printf("\nb) 15198");
    printf("\nc) 1986");
    printf("\nd) 1978");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'd') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) 1978\n", math_ans);
    }

    //6.
    printf("\n6. How many sides does a dodecahedron have?\n");
    printf("\na) 12");
    printf("\nb) 24");
    printf("\nc) 14");
    printf("\nd) 20");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'a') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: a) 12\n", math_ans);
    }

    //7.
    printf("\n7. In a right-angled triangle, what is the name give to the longest side?\n");
    printf("\na) Tangent");
    printf("\nb) Hypotenuse");
    printf("\nc) Parabola");
    printf("\nd) Hyperbola");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'b') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) Hypotenuse\n", math_ans);
    }

    //8.
    printf("\n8. Who defined zero?\n");
    printf("\na) Plato");
    printf("\nb) Archimedes");
    printf("\nc) John von Neumann");
    printf("\nd) Brahmagupta");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'd') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: d) Brahmagupta\n", math_ans);
    }

    //9.
    printf("\n9. What are the first 10 digits of Pi?\n");
    printf("\na) 3.142573494");
    printf("\nb) 3.141596283");
    printf("\nc) 3.141592653");
    printf("\nd) 3.276351926");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'c') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: c) 3.141592653\n", math_ans);
    }

    //10.
    printf("\n10. Which of these philosophers is not a famous Greek mathematician?\n");
    printf("\na) Archimedes");
    printf("\nb) Homer");
    printf("\nc) Euclid");
    printf("\nd) Pythagoras");
    printf("\nYour answer:\n");
    scanf(" %c", &math_ans);

    if (math_ans == 'b') {
        printf("Correct!\n");
        math_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: b) Homer\n", math_ans);
    }

    //score
    int math_correct = math_score / 10;
    printf("\nYour score: %d / 100\n", math_score);
    printf("%d / 10 correct\n", math_correct);

    print_smaller_menu();
}

void physics_quiz(){
    int phy_score = 0;
    char phy_ans;

    printf("Physics Quiz\n");
    printf("Choose your answer by typing the appropriate letter\n");

    //1.
    printf("\n1. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //2.
    printf("\n2. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //3.
    printf("\n3. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //4.
    printf("\n4. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //5.
    printf("\n5. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //6.
    printf("\n6. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //7.
    printf("\n7. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //8.
    printf("\n8. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //9.
    printf("\n9. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //10.
    printf("\n10. \n");
    printf("\na) ");
    printf("\nb) ");
    printf("\nc) ");
    printf("\nd) ");
    printf("\nYour answer:\n");
    scanf(" %c", &phy_ans);

    if (phy_ans == 'a') {
        printf("Correct!\n");
        phy_score += 10;
    }
    else {
        printf("Incorrect!\n");
        printf("Your answer: %c\nCorrect answer: \n", phy_ans);
    }

    //score
    int phy_correct = phy_score / 10;
    printf("\nYour score: %d / 100\n", phy_score);
    printf("%d / 10 correct\n", phy_correct);

    print_smaller_menu();
}

int main(void) {
    int choice, loop = 1;
    print_menu();

    while (loop) {
        printf("\nEnter your choice [1-8]: \n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Programming Quiz selected\n");
                while (1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        programming_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nProgramming Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 2:
                printf("Computer Science Quiz selected\n");
                while(1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        computer_science_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nComputer Science Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 3:
                printf("Mathematics Quiz selected\n");
                while(1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        mathematics_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nMathematics Quiz closed\n");
                        print_menu();
                        break;
                    }
                }
                break;

            case 4:
                printf("Physics Quiz selected\n");
                while(1){
                    char option;
                    printf("\nPress 'C' to continue or press 'E' to exit: \n");
                    scanf(" %c", &option);

                    if(option == 'C'){
                        physics_quiz();
                        break;
                    }
                    else if(option == 'E'){
                        printf("\nPhysics Quiz closed\n");
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
