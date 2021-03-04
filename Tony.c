
#include <stdio.h>
#include <stdlib.h>

int user_value;

/* HEADERS */

void end_proc(void);
void input_error_proc(void);
void about_author(void);
void about_game(void);
void waking_up(void);
void going_out(void);
void whip_nay_nay(void);
void brush_teeth(void);
void have_breakfast(void);

/* FUNCTIONS */

void end_proc(void){
    printf("Quitting the program...\n\n");
    exit(0);
}

void input_error_proc(void){
    int ch;
    printf("invalid input\n");
    while((ch = getchar()) != '\n' && ch != EOF); //clear input
}

void about_author(void){
    printf("\n"
            "'This game was created by Gianpaolo Gutierrez.\n"
            "He is currently an inspiring Computer Engineering\n"
            "student studying at the University of Irvine'\n");
}

void about_game(void){
    printf("\n"
            "'The purose of this game is to practice C\n"
            "coding skills while having fun developing\n"
            "an IF (Intractive Fiction) game. This practice\n"
            "game was started March 2nd, 2021.'\n");
}

void waking_up(void){
    
    printf("\n"
            "Backstory:\n"
            "Tony works very long hours at his local convenient\n"
            "store. His manager hardly gives him any praise.\n"
            "Luckily, today is his day off. He's been looking\n"
            "forward for this day for a long time. Today is the day.\n");

            printf("\n We wake and first decide to...\n"
                    " (1) Hit the Whip and Nay Nay.\n"
                    " (2) Brush Teeth\n"
                    " (3) Have breakfast\n");

            printf("Your Choice:");
            1==scanf("%d", &user_value);

            switch(user_value){
                case 1:
                    whip_nay_nay();
                    break;        
                case 2:
                    brush_teeth();
                    break;        
                case 3: 
                    have_breakfast();
                    break;        
                default:
                    ("INVALID INPUT");                                   
            }    

}

void going_out(void){

    printf("\n"
            "Tony decides to leave his house for the day.\n"
            "He decides to go to...");

    printf("\n He decides to go to...\n"
            " (1) Go to the Store\n"
            " (2) Brazil\n"
            " (3) Canada\n");

    printf("Your Choice:");
    1==scanf("%d", &user_value);

    switch(user_value){
        case 1:
            whip_nay_nay();
            break;        
        case 2:
            brush_teeth();
            break;        
        case 3: 
            have_breakfast();
            break;        
        default:
            ("INVALID INPUT");                                   
    } 

}

void whip_nay_nay(void){

    printf("Tony decides to be 'hip' for once in his old\n"
            "age. He makes his stance, takes a deep breath,\n"
            "and reels his arm back. As he unleases the biggest\n"
            "whip and nay nay that anyone has ever seen. Tony\n"
            "hurts his wrists. Tony vows never to try that again\n");

    going_out();
}

void brush_teeth(void){
    
    printf("\n"
            "Tony decides not to.\n");

    going_out();        
}

void have_breakfast(void){
    printf("\n"
            "Tony has one of the best breakfast he eats in his\n"
            "miserable life. Frosted Cakes.\n");

    going_out();        
}

/* MAIN */

int main(void){
    int program;

    while(1){
        printf("\n"
            "\nWelcome to Tony's Day Off!\n\n"
            "Please choose an option!\n"
            " (1) Play Game!\n"
            " (2) About the Game!\n"
            " (3) About the Author!\n"
            " \n"
            "If you want to exit the program, press (e or 0).\n"
            "Your choice: ");

        if(1==scanf("%d", &program)){ //input number 
            if (program == 0){
                end_proc();
            } else if(program == 1){
                printf ("Starting Game...\n\n\n");
                waking_up();
            } else if(program==2) {
                about_game();
            } else if(program==3) {
                about_author();
            } else {
                input_error_proc();
            }
        } else {//input not number
            char ch, check;
            if(2 == scanf(" %c%c", &ch, &check) && ch == 'e' && check == '\n')
                end_proc();
            else
                input_error_proc();
        }
    }
    return 0;
}