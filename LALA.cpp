#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <iomanip>

using namespace std;

void menu(int N);
void menu2(  int parray[] , int N);
void zam(int parray[] , int );
void sorte(int parray[] , int );

//���� � ���������
void hand( int N )
{
    int *parray = new int [N];
    int b;
    int s = 0;
    for(int i = 0;i < N; ++i)
    {cout<<"�����i�� ������� - "<<i+1<<endl;
     cin>>b;
      parray[i]=b;
      };
      cout<<endl;
    //��������� ������
                for ( int j=0; j<N; j++)
                {cout<<setw(5)<<right<<parray[j]<<"   ";
                if((j+1)%5==0)cout<<endl;
                }
                cout<<endl;
menu2( parray , N );
}

int rand( int N )//���� ����������������� �������
{ srand(time(NULL));
  int *parray= new int[N];
 if (N == 0) {cout<<"ERROR"<<endl<<"����i�� ���� �������� N"<<endl; cin>>N;}//���������� ������
   for(int k=0; k<N; ++k)
   { parray[k]=rand()%100;
   }

  //��������� ������
              for ( int j=0; j<N; j++)
                {cout<<setw(5)<<right<<parray[j]<<"   ";
                if((j+1)%5==0)cout<<endl;
                }
                cout<<endl;
                menu2( parray ,  N);

   }

   void menu2(int parray[] , int N ) {//���� ���� ��������� ������
   cout<<"����i�� ��� �i� ������ ���������� ���������:"<<endl<<"1-������ �������"<<endl<<"2-���������� ������"<<endl<<"3-���������� �� ������� ����"<<endl<<"Q-���i� � ��������"<<endl;
   char w;
   cin>>w;
       switch(w)//���� ����� ����������� ������
    { case '1' : zam(parray , N)  ; break;
      case '2' : sorte(parray , N)  ; break;
      case '3' : menu(N)  ; break;
      case 'q' : cout<<"���i� � ��������"; break;
      default : {cout<<"ERROR"<<endl; menu2( parray ,  N);}; break;
    }
   }


//����� ��������

void zam(int parray[] , int N)
{  int max = parray[0];
int min = parray[0];
for(int i=1; i<N; i++)
  {if(parray[i]<min) min=parray[i];  }
    int b;
    for(int i=1; i<N; i++)
  {if(parray[i]>max) max=parray[i];  }
   cout<<"����i�� �������� ������ ��������"<<endl;
   cin>>b;
   cout<<endl;
    for(int i=0; i<N; i++)
   if (parray[i]==min)parray[i]=b;
   for(int i=0; i<N; i++)
   if (parray[i]==max)parray[i]=b;
   for ( int i=0; i<N; ++i)
                {cout<<setw(5)<<right<<parray[i]<<"   ";
                if((i+1)%5==0)cout<<endl;
                }
                cout<<endl;
delete [] parray;
 menu2( parray ,  N);
}



//���������� ����� ���������
      void sorte( int parray[] , int N)
      {  int temp = 0;
      bool exit = false;

      while(!exit)
      {

          exit = true ;
          for ( int i=0; i<(N-1); i++)
          if(parray[i]>parray[i+1]){
            temp = parray[i];
            parray[i]=parray[i+1];
            parray[i+1] = temp;
            exit = false;}}
             for ( int j=0; j<N; j++)
                {cout<<setw(5)<<right<<parray[j]<<"   ";
                if((j+1)%5==0)cout<<endl;
                }
                cout<<endl;
              delete [] parray;
           menu2( parray ,  N);}
