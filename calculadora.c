#include <stdio.h>
#include <math.h>
 
int main(){
double num1, num2;
char operator;

printf("Digite o primeiro numero: ");
scanf("%lf", &num1);
printf("Digite um operador: ");
scanf(" %c", &operator);
printf("Digite o segundo numero: ");
scanf("%lf", &num2);

if (operator == '+'){
  printf("%lf %c %lf = %lf\n", num1, operator, num2, num1 + num2);
}
else if (operator == '-'){
  printf("%lf %c %lf = %lf\n", num1, operator, num2, num1 - num2);
}
else if (operator == '*'){
  printf("%lf %c %lf = %lf\n", num1, operator, num2, num1 * num2);
}
else if (operator == '/'){
  printf("%lf %c %lf = %lf\n", num1, operator, num2, num1 / num2);
}
else{
  printf("Operador invalido, tente novamente\n");
}

  return 0;
}

