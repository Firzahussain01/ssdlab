#include<iostream>
using namespace std;

class Plan{

private:
    double rate;

public:
Plan(){
rate = 0;
}
	
    void getrate()
	{
        rate=10;
    }

    void calculateBill(int units)
	{
    cout<<"Bill is "<<units*(this->rate)<<"\n";
    }
    
};

class DomesticPlan: public Plan
{

public:
    void getrate()
    {
        this->rate=200;
    }
};

class CommercialPlan: public Plan
{

public:
    void getrate()
    {
        this->rate=180;  
    }
};

class InstitutionalPlan: public Plan
{

public:
    void getrate()
    {
        this->rate=150; 
    }
};


class GetPlanFactory
{
	
public:
	DomesticPlan P1;
    CommercialPlan P2;
    InstitutionalPlan P3;

    void getPlan()
    {
        P1.getrate();
        P1.calculateBill(12);
        
        P2.getrate();
        P2.calculateBill(12);

        P3.getrate();
        P3.calculateBill(12);
    }
};

int main()
{
GetPlanFactory P;
P.getPlan();
}
