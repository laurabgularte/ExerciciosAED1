#include <stdio.h>


//programa feito atraves de um curso no freecodecamp, feito em ingles pra treinar o idioma

int main(){

char grade;

printf("Please enter your grade (from A to F) to see how you did in the test: ");
scanf(" %c", &grade);

switch(grade){
case 'A':
printf("Congrats! You did great");
break;
case 'B':
printf("Congrats! You did alright");
break;
case 'C':
printf("You did poorly");
break;
case 'D':
printf("You did very bad");
break;
case 'F':
printf("You failed");
break;

default:
printf("Invalid grade");
}

return 0;
}
