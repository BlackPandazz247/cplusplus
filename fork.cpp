#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
  int pid, x = 2;
  const int costante = 12;

  cout<<"1) Prima della fork\n";
  cout<<"Costante: "<< costante <<"\t\tX: "<< x <<endl;
  pid = fork();
  cout<<"\n2) Dopo la fork\n";

  if(pid == 0)
  {
    x = 24;
    cout<<"3)Sono il processo figlio, PID: "<< getpid() <<endl;
    cout<<"4)Costante: "<< costante <<"\t\tX: "<< x <<endl;
    exit(1);
  }
  else
  {
    x = 4;
    cout<<"3)Sono il processo padre, PID: "<< getpid() <<endl;
    cout<<"4)Costante: "<< costante <<"\t\tX: "<< x <<endl;
    exit(0);
  }
}