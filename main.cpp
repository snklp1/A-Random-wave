#include <iostream>
#include<cstdlib>
#include<ctime>

#include <time.h>

using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while(goal>clock());

}


int main(){

  char text[200];
  cout<<"Author : snklp1"<<endl;
  cout << "*** Welcome to the Wave Generator. A really small C++ program. ***"<< endl<<endl;
  cout<<"Enter the Unitary symbol (Ex= | , >< , |#> , |_| , etc)"<<endl;
  cout<<"Your symbol :  ";
  cin.getline(text, sizeof(text));

  cout<<"Enter your preferred speed (Choose b/w 1 - 10) :  ";
  int speed;
  cin>>speed;


  int h;
  h = (rand() % 10)+1;
  srand((unsigned) time(0));
  int n=0;
  unsigned int yu = 750/speed;
  while(n<45)
  {
      h = (rand()%71)+1;
      for(int i=0;i<h;i++)
      {
          for(int j=0;j<i;j++)
          {
                cout<<text;
                delay(yu/i);
          }
          cout<<endl;
      }
      for(int m=h;m>0;m--)
      {
          for(int n=0;n<m;n++)
          {
              cout<<text;
              delay(yu/m);
          }
          cout<<endl;
      }
      n++;
      cout<<endl;
  }
  return 0;
}

