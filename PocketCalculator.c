#include <stdio.h>

int Add(double n1, double n2)
{
  double res=0.00;

  res= n1+n2;

printf("%fd\n", res );

  return res;


}
int Subtract(double n1, double n2)
{
  double res=0.00;

  res= n1-n2;
printf("%fd\n", res );
  return res;
}
int Multiply(double n1, double n2)
{
  double res=0.00;

  res= n1*n2;
printf("%fd\n", res );
  return res;
}
float Divide(double n1, double n2)
{
  if (n2 == 0)
  {
    return 0;
  }


  double res=0.00;

  res= n1/n2;
  printf("%fd\n", res );

  return res;
}


double GetOperand(){
  double number = 0.00;


  printf("Number: ");

  scanf("%f", &number);

  return number;
}


void Choice(double n1, double n2,int choice){
  double sum = 0.00;

  if (choice == 1)
   {
      Add(n1, n2);

  }
  else if (choice == 2)

  {
     Subtract(n1, n2);

  }
  else if (choice == 3)
  {
     Multiply(n1, n2);

  }
  else if (choice == 4)
  {
       Divide(n1, n2);

  }

}

void Calculator()
 {


  int choice = 0;

  while (choice != -1) {

    printf("Choose one of the following operations:\n" );
    printf("Add (1)\n");
    printf("Subtract (2)\n");
    printf("Multiply (3)\n");
    printf("Divide (4)\n");
    printf("Stop program (-1)\n");
    printf("Enter your choice: ");

    scanf("%d", &choice );
    if (choice == -1) {
      printf("Programm stoped\n");

      return;
    }


    double  n1= GetOperand();


    double n2 = GetOperand();


    Choice(n1, n2, choice);

}
}

int main(int argc, char const *argv[]) {

  printf("Pocket Calculator\n");

  printf("==================\n" );


  Calculator();


  return 0;
}
