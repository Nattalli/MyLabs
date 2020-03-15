#include <iostream>
#include <cstdlib>
#include "LALA.h"
#include <clocale>
#include <ctime>

using namespace std;

void menu(int N);
void *menu2( int N, int parray);
void *zam(int N, int parray);
void *sorte(int N, int parray);


int main()
{   setlocale(LC_CTYPE, "rus");
    int N=12;
    menu(N);
    return 0;}

    //перше меню
void menu(int N)
{   int *p;
    p=&N;
    char a;
    cout<<"Меню"<<endl<<"N=12"<<endl<<"Натиснiть 1 щоб заповнити масив з клавiатури"<<endl<<"Натиснiть 2 що заповнити масив псевдовипадковими числами"<<endl<<"Натиснiть 3 щоб змiнити N"<<endl<<"Натиснiть iншу клавiшу щoб заверишити роботу."<<endl;
    cin>>a;
    switch(a)//вибір способу вводу
    { case '1' : hand( N )  ; break;
      case '2' : rand( N )  ; break;
      case '3' : {cout<<"Введiть нове значення елементy N"<<endl; cin>>*p ; menu(*p);}; break;
      default : cout<<"Вихiд з програми"; break;
    }
}
