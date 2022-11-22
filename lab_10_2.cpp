#include<iostream>
using namespace std;

class WindowImp

{  
  public:
  string info()
  {
  return "window";
  }
};
class LinuxImplementer:public WindowImp
{ public:
	string name()
	{
	return"hi! linus";
	}
};
class MacImplementer:public WindowImp
{
public:
	string name()
	{
	return "hi! mac";
	}
};

class window
{
	public:
	string apply()
{
		WindowImp W;
    cout<<"Window info: "<<W.info();
	}
	public:
	string info()
	 	{
	 return " hello! window";
		 }
};
 class MobileWindow : public window
{
public:
	string info()
	{
	 	return "Mobile window";
	 }
};
class DesktopWindow: public window
{
	
	 public:
	 	string info ()
	 	{
	 		return "Desktop Window";
		 }
};


int main()
{
	LinuxImplementer L;
	MacImplementer M;
 cout<<"linux "<<	L.name();
	 cout<<"Mac "<<M.name();
	window D;
	MobileWindow MW;
	DesktopWindow DW;
	cout<<"\n MobileWindow information: "<<MW.info();
     cout<<"\n DesktopWindow information: " <<DW.info();
	return 0;
}



