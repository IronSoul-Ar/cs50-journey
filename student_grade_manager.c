// This project will combine everything I learned during the first week in cs50!
#include <stdio.h>
#include <cs50.h>

string mention_age(int age);
float calc(float math, float physics, float info, float english);
string mention_note(float calculate, float scale);

int main(void){

    printf("Welcome to student grade manager! \n");
    printf("This program calculates your average grade across four subjects. \n");
    printf("The subjects are Math, Physics, Info, and English. \n");
    char answer;
    do{
        answer = get_char("Do you want to start the program (y/n): ");
    }while (answer != 'y' && answer != 'n');
    if (answer == 'y')
    {
        string name = get_string("What's your name? ");
        int age;
        do{
            age = get_int("Okay %s, How old are you? ", name);
        }while (age >= 100 || age <= 0);
        string mention1 = mention_age(age);
        printf("%s Okay, then let's start, please enter your grades.\n", mention1 );
        float scale;
        do{
            scale = get_float("First, what is the grading scale? ");
        }while (scale <= 0);
        float math;
        do{
            math = get_float("Math: ");
        }while (math > scale || math < 0);
        float physics;
        do{
            physics = get_float("Physics: ");
        }while (physics > scale || physics < 0);
        float info;
        do{
            info = get_float("Info: ");
        }while (info > scale || info < 0);
        float english;
        do{
            english = get_float("English: ");
        }while (english > scale || english < 0);
        float calculate = calc(math, physics, info, english);
        string mention2 = mention_note(calculate, scale);
        printf("You got a %.2f in the result. %s \n", calculate, mention2);
    }
    else
    {
        printf("okay bye \n");
    }
}


string mention_age(int age){
    if (age < 13)
    {
        return "So, you are currently in childhood.";
    }
    else if (age < 18)
    {
        return "So, you are currently in your teenage years.";
    }
    else if (age == 18)
    {
        return "So, you have become mature now.";
    }
    else if (age < 25)
    {
        return "So, you are in the early stages of adulthood.";
    }
    else if (age < 65)
    {
        return "So, you are an adult.";
    }
    else
    {
        return "So, you are in your senior years.";
    }
}

float calc(float math, float physics, float info, float english){
    return (math + physics + info + english)/4;
}


string mention_note(float calculate, float scale){
    if (calculate < (scale/2) + (scale*10/100))
    {
    return "You failed, try again and do your best. ";
    }
    else if (calculate < (scale/2) + (scale*20/100))
    {
    return "You pass, good job!";
    }
    else if (calculate < (scale/2) + (scale*30/100))
    {
    return "Good result, keep improving! ";
    }
    else if (calculate < (scale/2) + (scale*40/100))
    {
    return "Very good result, well done! ";
    }
    else
    {
    return "Excellent, keep it up! ";
    }
}
