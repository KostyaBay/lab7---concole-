#include <iostream>
using namespace std;

class Console
{
  public:
  bool a=0;
  void enter();
  void ON();
  void OFF();
};

class Control
{
  int c,d;
  public:
  virtual void choice();
};

  class Channels_control:public Control,Console
  {
    public:
    void choice(int b);
  };

  class Volume_control: public Control,Console
  {
    public:
    void choice(int b);
  };

class TV
{
   public:
    void reaction(int b);
  };
