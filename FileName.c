
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int zadanie2();
int zadanie3();

int main()
{
    setlocale(LC_ALL, "RUS");

    char c;

    printf("Введите символ: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5':  case '6': case '7': case '8': case '9':
   
        printf("Это цифра\n");
        break;

    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
        printf("Это буква\n");
        break;

    default:
        printf("Неизвестный символ\n");
    }

    zadanie2();
    zadanie3();

    return 0;
}

int zadanie2()
{
    float x, y;
    char c;

    printf("Введите выражение : ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+': printf("=%f\n", x + y); 

    break;

    case '-': printf("=%f\n", x - y); 

    break;

    case '*': printf("=%f\n", x * y); 

    break;

    case '/': printf("=%f\n", x / y); 

    break;

    case '^': printf("=%f\n", pow(x, y)); 

    break;

    default:
        printf("Неизвестная операция!\n");
    }

    return 0;
}

int zadanie3()
{
    int n;

    printf("Введите число от 1 до 12: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:  printf("I\n");

    break;

    case 2:  printf("II\n"); 

    break;

    case 3:  printf("III\n"); 

    break;

    case 4:  printf("IV\n");

    break;

    case 5:  printf("V\n");

    break;

    case 6:  printf("VI\n");
        
    break;

    case 7:  printf("VII\n"); 

    break;
    case 8:  
        printf("VIII\n"); 

    break;

    case 9:  printf("IX\n"); 
        
    break;

    case 10: printf("X\n"); 

    break;

    case 11: printf("XI\n"); 
        
    break;

    case 12: printf("XII\n");

    break;

    default:
        printf("Ошибка\n");
    }

    return 0;
}
