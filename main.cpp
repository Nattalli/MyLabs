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

    //����� ����
void menu(int N)
{   int *p;
    p=&N;
    char a;
    cout<<"����"<<endl<<"N=12"<<endl<<"������i�� 1 ��� ��������� ����� � ����i�����"<<endl<<"������i�� 2 �� ��������� ����� ����������������� �������"<<endl<<"������i�� 3 ��� ��i���� N"<<endl<<"������i�� i��� ����i�� �o� ���������� ������."<<endl;
    cin>>a;
    switch(a)//���� ������� �����
    { case '1' : hand( N )  ; break;
      case '2' : rand( N )  ; break;
      case '3' : {cout<<"����i�� ���� �������� �������y N"<<endl; cin>>*p ; menu(*p);}; break;
      default : cout<<"���i� � ��������"; break;
    }
}
