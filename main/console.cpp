#include "console.h"

void Console:: ON(Control *control)
  {
  control->ON();
   if(b==1)
    {
     cout<<"console ON"<<endl;
    }
  }
void Console:: OFF(Control *control)
  {
  control->OFF();
    if(b==0)
    {
      cout<<"console OFF"<<endl;
    }
  }

void Control:: choice(int b)
  {
     cout<<"Enter button: ";
     cin>>b;
  }
void Channels_control:: choice(Control *control)
{
  control->choice();
  if((b==2)||(b==3))
  {
  cout<<"You push the button - Channels_control"<<endl;
  }
};

void Settings_control:: choice(Control *control)
{
  control->choice();
  if((b==4)||(b==5)||(b==6))
  {
  cout<<"You push the button - Settings_control"<<endl;
  }
};

void Volume_control:: choice(Control *control)
{
  control->choice();
  if((b==7)||(b==8))
  {
  cout<<"You push the button - Volume_control"<<endl;
  }
};

void TV:: reaction(Console *console)
    {
  console->reaction();
    switch(b)
    {
   case 0:
      cout <<"console OFF"<<'\n';
      break;
   case 1: 
       cout <<"console ON"<< '\n';
       break;
   case 2: 
       cout <<"Got signal"<<'\n'<<"You have moved to the next channel"<< '\n'; 
       break; 
   case 3:
       cout <<"Got signal"<<'\n'<<"You have moved to the previous channel"<< '\n';
       break;
   case 4:
       cout <<"Got signal"<<'\n'<<"You changed the brightness"<< '\n';
       break;
   case 5:
       cout <<"Got signal"<<'\n'<<"You changed the contrast"<< '\n';
       break;
   case 6:
       cout <<"Got signal"<<'\n'<<"You change the language"<<'\n';
       break;
   case 7:
       cout <<"Got signal"<<'\n'<<"You increased the sound"<<'\n';
       break;
   case 8:
       cout <<"Got signal"<<'\n'<<"You have reduced sound"<<'\n';     
       break;       
   case 10: 
       cout<<"The work is completed! Close this window."<<'\n';
       break;
    default:
       cout<<"ERROR"<<endl;
       break;
    }
    }
void Human:: choice(Console *console) 
{
  console->choice();
  switch(b)
  {
    case 0:
    cout<<"Dear Human: TV OFF"<<'\n';
    break;
    case 1:
    cout<<"Dear Human: TV ON"<<'\n';
    break;
  }
};   
