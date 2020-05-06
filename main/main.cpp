#include "console.h"

int main()
{
  cout<<"Push 0 to turn console OFF"<<endl;
  cout<<"Push 1 to turn console ON"<<endl;
  cout<<"Push 2 to moved to the next channel"<<endl;
  cout<<"Push 3 to moved to the previous channel"<<endl;
  cout<<"Push 4 to change brightness"<<endl;
  cout<<"Push 5 to change contrast"<<endl;
  cout<<"Push 6 to change the language"<<endl;
  cout<<"Push 7 to increased the sound"<<endl;
  cout<<"Push 8 to reduced sound"<<endl;
  cout<<"Push 10 to exit"<<endl;
  int a,b;
  Console k;
    k.enter();
    k.ON();
    k.OFF();
  while(b!=10) 
  { 
  cout<<"Enter button: ";
  cin>>b;
  Channels_control c;
    c.choice(b);
  Volume_control e;
    e.choice(b);
  TV x;
    x.reaction(b);
  Human z;
  z.choice(a);
  }
    return 0;
}
