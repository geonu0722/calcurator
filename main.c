/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int Add();
int Sub();
int Mul();
int Div();
void Menu() {
    
    int num;
	printf("Please choose what you want");
	printf("1. add\n");
	printf("2. subtract\n");
	printf("3. multiply\n");
	printf("4. divide\n");
	printf("5. exit\n\n\n\n\n");
	printf("Select : ");
	scanf("%d", &num);
	switch(num){
	    case 1:
	        printf("You choose add\n");
	        Add();
	        break;
	    case 2:
	        printf("You choose subtract\n");
	        Sub();
	        break;
	    case 3:
	        printf("You choose multiply\n");
	        Mul();
	        break;
	    case 4:
	        printf("You choose divide\n");
	        Div();
	        break;
	    case 5:
	        printf("You choose exit\n");
	        break;
	   default:
	        printf("You choose wrong number\n");
	        Menu();
	}
};

int main()
{
	printf("------------------------\n");
	printf("        Calculator      \n");
	printf("------------------------\n\n\n\n");
    Menu();
    
	return 0;
}
