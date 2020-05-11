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

  while(b!=10) 
  {
  Console k;
    k.ON();
    k.OFF();
  Control c;  
    c.choice(&Control.Channels_control);
    c.choice(&Control.Settings_control);
    c.choice(&Control.Volume_control);
  TV x;
    x.reaction(&Control.Console);
  Human z;
    z.choice(&Control.Console);
  }
    return 0;
}
