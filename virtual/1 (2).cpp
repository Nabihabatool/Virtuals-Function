#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class garment{
	private:
		char name[20];
	public:
        int getname(){
        	cout<<"Clothing store"<<endl;
		};
	    virtual int calculateprice()=0;

};

class upper:garment{
	protected:
			int collerSize;
	public:
		
	virtual int getCollersize()=0;
	
};

class lower:garment{
	protected:
			int waist;
		public:
		
			virtual int getWaist()=0;
	
};

class shirt:upper{
	public:
	int calculateprice(){
		int ShirtPrice = collerSize*20 + 10;
	};
	int getCollersize(){
	int collerSizeofupper;
		cout<<"Collor Size:"<<endl;
		 collerSize= collerSizeofupper-1;
		cin>>collerSize;
	};
};
class pajama:lower{
	public:
	int calculateprice(){
		int Pajamaprice = waist*15 + 50;
	};
	int getWaist(){
		int waistofpajama;
		cout<<"Enter Waist of Pajama"<<endl;
		waist = waistofpajama–2;
		cin>>waist;
	};
};
class trouser:lower{
	public:
	int calculateprice(){
	int Trouserprice = waist*20+100;

	};
	 int getWaist(){
	 	int waistoftrouser;
		cout<<"Enter Waist of Trouser "<<endl;
		waist = waistoftrouser–3;
		cin>>waist;
		
	};
};
int main() {
	upper u;
	u.getname();
	u.calculateprice();
	u.getCollersize();
	lower l;
	l.calculateprice();
	l.getWaist();
	shirt s;
	pajama p;
	trouser t;
		int a=1,b=2,c=3;
        	cout<<"Enter 1 for Shirts"<<endl;
        	cin>>a;
        	cout<<"Enter 2 for Trousers"<<endl;
        	cin>>b;
        	cout<<"Enter 3 for Pajama"<<endl;
        	cin>>c;
        	
        int i;
		for(i=1;i=10;i++){
     	cout<<"Enter no of Shirts you want (10 shirts are availaible)"<<endl;
       	cin>>i;
       	int j;
        for(j=1;j=10;j++){
        		cout<<"Enter no of trousers you want (10 trousers are availaible)"<<endl;
       	cin>>i;
		}
		int k;
        for(k=1;k=10;k++){
        		cout<<"Enter no of pajama you want (10 pajama are availaible)"<<endl;
       	cin>>k;
		}
		
	return 0;
}
