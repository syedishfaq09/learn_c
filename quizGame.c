#include <stdio.h>

int main()
{
    int score = 0;
    char answer;
    int marks = 1;
   

    printf("Welcome to the Quiz Game!\n\n");
    printf("There are 25 questions in Quiz.\n");
    printf("[Each correct answer gives you 4 points.]\n\n");

    // Question 1

    printf("\nQ1: Which country is known as the Land of the Rising Sun?\n");
    printf("A) China\nB) Korea\nC) Japan\nD) Thailand\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else 
    {
        printf("Wrong! the correct answer is,Japan.\n");
    }

    // Question 2

    printf("\nQ2: Which programming language is known for its simplicity and readability?\n");
    printf("A) C++\nB) Java\nC) Python\nD) Assembly\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Python.\n");
    }

    // Question 3

    printf("\nQ3: What does HTML stand for?\n");
    printf("A) HighText Machine Language\nB) HyperText Markup Language\nC) HyperText Markdown Language\nD) None\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Hypertext markup language.\n");
    }

    // Question 4

    printf("\nQ4: Which part stores data permanently?\n");
    printf("A) RAM\nB) ROM\nC) Hard Disk\nD) Cache\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Hard disk.\n");
    }

    // Question 5

    printf("\nQ5: Which is not an operating system?\n");
    printf("A) Linux\nB) Windows\nC) Python\nD) macOS\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Python.\n");
    }

    // Question 6

    printf("\nQ6: Which company developed the Android OS?\n");
    printf("A) Apple\nB) Samsung\nC) Google\nD) Microsoft\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Google.\n");
    }

    // Question 7

    printf("\n7: What is phishing?\n");
    printf("A) A game\nB) Data cleaning\nC) Cyber fraud\nD) File saving method\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Cyber fraud.\n");
    }

    // Question 8

    printf("\nQ8: 1 Byte = ? bits\n");
    printf("A) 4\nB) 8\nC) 16\nD) 32\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, 8.\n");
    }

    // Question 9

    printf("\nQ9: First computer programmer?\n");
    printf("A) Ada Lovelace\nB) Charles Babbage\nC) Alan Turing\nD) Steve Wozniak\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Ada Lovelace.\n");
    }

    // Question 10

    printf("\nQ10: Which language is used to style web pages?\n");
    printf("A) HTML\nB) JavaScript\nC) CSS\nD) SQL\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, CSS.\n");
    }

    // Question 11

    printf("\nQ11: What is malware?\n");
    printf("A) Hardware\nB) Software\nC) Malicious software\nD) None\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Malicious software.\n");
    }

    // Question 12

    printf("\nQ12: The more you take, the more you leave behind. What am I?\n");
    printf("A) Holes\nB) Footsteps\nC) Time\nD) Shadows\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Footsteps.\n");
    }

    // Question 13

    printf("\nQ13:Which number should come next in the pattern? 2, 3, 5, 8, 12,...\n");
    printf("A) 16\nB) 17\nC) 18\nD) 19\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("correct\n");
    }
    else
    {
        printf("Wrong! the correct answer is, 17.\n");
    }

    // Question 14

    printf("\nQ14: Which language is used to create web pages?\n");
    printf("A) C\nB) Java\nC) HTML\nD) Python\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is CSS.\n");
    }

    // Question 15

    printf("\nQ15. Which Surah is called the Heart of the Qur'an?\n");
    printf("A) Surah Fatiha\nB) Surah Yaseen\nC) Surah Ikhlas\nD) Surah Baqarah\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Surah yaseen.\n");
    }

    // Question 16

    printf("\nQ16. Who was the first Caliph of Islam?\n");
    printf("A) Umar (r.a)\nB) Uthman (r.a)\nC) Abu Bakr (r.a)\nD) Ali (r.a)\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Abu Bakr (r.a).\n");
    }

    // Question 17

    printf("\nQ17. Which Prophet is known as Khaleelullah (Friend of Allah)?\n");
    printf("A) Musa\nB) Isa\nC) Ibrahim\nD) Dawood\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Ibrahim.\n");
    }

    // Question 18

    printf("\nQ18. What is the meaning of Islam?\n");
    printf("A) Peace\nB) Obedience\nC) Submission\nD) Truth\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is,Peace.\n");
    }

    // Question 19

    printf("\nQ19. Which Prophet built the Kaaba with his son?\n");
    printf("A) Ibrahim\nB) Isa\nC) Dawood\nD) Yusuf\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Ibrahim.\n");
    }

    // Question 20

    printf("\nQ20. How many Makki Surahs are there in, Qur'an?\n");
    printf("A) 86\nB) 114\nC) 28\nD) 99\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is 86.");
    }

    // Question 21

    printf("\nQ21. Who compiled the Qur'an into one book form?\n");
    printf("A) Umar(r.a)\nB) Uthman (r.a)\nC) Ali (r.a)\nD) Abu Bakr (r.a)\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Uthman (r.a).\n");
    }

    // Question 22

    printf("\nQ23. How many years did the Prophet (PBUH) receive revelations?\n");
    printf("A) 13\nB) 23\nC) 10\nD) 40\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, 23.\n");
    }

    // Question 23

    printf("\nQ23: Which one of the following is the odd one out?\n");
    printf("A) Apple\nB) Mango\nC) Banana\nD) Carrot\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Carrot.\n");
    }

    // Question 24
    printf("\nQ24: Find the odd pair?\n");
    printf("A) Pen - Write\nB) Knife - Cut\n3) Brush - Paint\nD) Book - Read\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, Book - Read.\n");
    }

    // Question 25

    printf("\nQ25: What is the missing number in the pattern? 7, 13, 20, ...\n");
    printf("A) 25\nB) 31\nC) 33\nD) 37\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b')
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong! the correct answer is, 30.\nSolution:\n[2*3+1=7\n3*4+1=13\n4*5+1=21\n5*6+1=31]");
    }

    // Final score
     marks = score*4;

    printf("\nYou scored %d out of 25!\nYour score is %d\n", score,marks);
    if (marks >=95 && marks <= 100)
        printf("👑 Perfect! You are a true mastermind!\n");
    else if (marks >= 80 && marks < 95)
        printf("💡 Great job! You know a lot.\n");

    else if (marks >= 40 && marks < 80)
        printf("☹ Keep Learning and improving.\n");

    else
        printf("Don't worry.Review and try again!\n");

    return 0;
}