#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
	string name ="Car";
	string model ="HH65";
	int year =1998;
	string colour ="Blue";
	
	public:
	string info()
	 	{
	 		return "hello! vehicle class";
		 }
};

    class Bus : public Vehicle
{
	string name = "ART";
	string model ="CC54";
	string colour = "green";
	
	 public:
	 	string info()
	 	{
	 		return  "hello! Bus class";;
		 }
};
class Bike: public Vehicle
{
	string name = "Heavybike";
	string model ="AS64";
	string colour = "Black";
	
	 public:
	 	string info( )
	 	{
	 		return "hello! Bike class";
		 }
};

class Workshop

{    public:
  string apply()
  {
  	Vehicle v;
	cout<<"\nVehicle information: "<< v.info();
  }
	string name()
	{
			return "hello! Workshop class";
	}
};
class Produce:public Workshop
{ public:
		string name( )
	{
	return "hello! Produce class";
	}
};
class Assemble:public Workshop
{
	public:
		string name( )
	{
	return "hello! Assemble class";
	}
};

 int main()
 {
 	Bus b;
 	Bike k;
   cout<<"\n Bus information: "<<b.info();
     cout<<"\n Bike information: " <<k.info();
 	Workshop w;
 	w.apply();
 	Produce p;
 	Assemble a;
 	cout<<"\n Workshop  information: " <<w.name();
    cout<<"\n Workshop  information: "<<p.name();
 	cout<<"\n Workshop  information: "<<a.name();
 	return 0;
	
 }

