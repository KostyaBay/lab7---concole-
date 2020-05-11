#include <iostream>
using namespace std;

class Console
{
  public:
  void ON();
  void OFF();
};

class Control
{
  public:
  int b;
  virtual void choice();
};

  class Channels_control:public Control,Console
  {
    public:
    void choice();
  };

  class Settings_control:public Control,Console
  {
    public:
    void choice();
  };
  
  class Volume_control: public Control,Console
  {
    public:
    void choice();
  };

class TV
{
   public:
    void reaction();
  };

class Human
{
  public:
  void choice();
};
