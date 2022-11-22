#include<iostream>
using namespace std;
class Bank{
	 string name;
	string city;
	
	public:
	 string display(){
	 	
	 	cout<< "Bank Details: \n"<<"Meezan\t"<<"islamabad ";
	 	cout<<endl;
	 }
};

class Payment{
	private:
	int amount;
	int payment;
	
	public:
		void setamount(int s){
			amount = s;
		}
		
		int getamount(){
			return amount;
		}
		
		void setpayment(int d){
			payment = d;
		}
		
		int getpayment(){
			return payment;
		}
     int display1(){
     	
    cout<<"enter amount: ";
    	cin>>amount;
    	
    		cout<<"\n enter payment: ";
    	cin>>payment;
    	
    	 cout<<"Payment class";
	}
};

class Cash :public Payment{
	int amount;
	int payment;
	public:
		string display2(){
			
			 cout<<"\n Payment via Cash:";
		}		
};
class ATM_Card :public Payment{
	int amount;
	int payment;
	 public:
	 	
		string display3(){
			
			cout<<"\n Payment via  ATM_Card:";
		}		
};
class Online_Transaction :public Payment{
	int amount;
	int payment;
		public:
		string display4()
		{
			cout<<"\n Payment via Online_Transaction:";	
		}	
};

int main()
{
	Bank b;
	b.display();
	Payment p;
	p.display1();
	if(p.getamount()>p.getpayment())
	{
	Cash c;
    c.display2();
	}
	if(p.getamount()>=p.getpayment())
	{
    ATM_Card a;
    a.display3();
}
if(p.getamount()<p.getpayment())
	{
    Online_Transaction o;
    o.display4();
	}
	return 0;
}
