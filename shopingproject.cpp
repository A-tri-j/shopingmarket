#include<iostream>
using namespace std;
int main (){
	char startvalue;
	char choiceagain;
	string paymenttype;
	float onlineshooping(void);
	startlevel:
	cout<<"please press S to start shopping"<<endl;
	cin>>startvalue;
	start:
	if(startvalue=='s'||startvalue=='S'){
		float totalamount=onlineshooping();
		cout<<"Total Bill Amount = "<<totalamount<<endl;
		 // Payment type selection
        paymentlevel:
        cout << "ENTER YOUR PAYMENT TYPE:" << endl;
        cout << "Use UPI - Type 'upi' || Cash on delivery - Type 'cash'" << endl;
        cin >> paymenttype;

        if(paymenttype=="upi" || paymenttype=="UPI"){
            cout << "PAYMENT DONE" << endl;
        }
        else if(paymenttype=="cash" || paymenttype=="CASH"){
            cout << "THANK YOU FOR PAYMENT" << endl;
        }
        else{
            cout << "Please type 'upi' or 'cash' for payment" << endl;
            goto paymentlevel;
        }
		shopagain:
		cout<<"Do you want shoping again yes or No !! "<<endl;
		cin>>choiceagain;
		if(choiceagain=='y'||choiceagain=='Y'){
			goto startlevel;
		}
		else if(choiceagain=='n'||choiceagain=='N'){
			cout<<"Thanks for shoping!! "<<endl;
		}
		else{
			cout<<"You have entered worng option, please type again "<<endl;
		goto shopagain;
		}
	}
	else {
		cout<<"You have entered worng option, please s "<<endl;
		goto start;
	}
}
float onlineshooping(){
	char choice;
	char item;
	int quantity;
	float billamount=0;
	cout<<"******************Welcome To Online Shoping ***************************"<<endl;
	cout<<"***************** Please Follow the Instruction************************"<<endl;
	cout<<"(1) please Enter m to order Mobile phone"<<endl;
	cout<<"(2) please Enter l to order Laptop"<<endl;
	cout<<"(3) please Enter d to order deskstop"<<endl;
	cout<<"(4) please Enter h to order Headphone"<<endl;
	cout<<"(5) please Enter s to order speaker"<<endl;
	cin>>choice;
	
	
	//*******************************Mobile phone******************
	
	if(choice=='m'||choice=='M'){
		mobilelevel:
		cout<<"Mobile details"<<endl;
		cout<<"(1) Apple ==>> Price :   65,000/- "<<endl;
		cout<<"(2) vivo ==>> Price :    20,000/- "<<endl;
		cout<<"(3) OPPO ==>> Price :    25,000/- "<<endl;
		cout<<"(4) Redmi ==>> Price :   15,000/- "<<endl;
		cout<<"(5) Realmi ==>> Price :  20,000/- "<<endl;
		cout<<"(6) Samgsung ==>> Price :30,000/- "<<endl;
		cout<<"Please Enter your choice = "<<endl;
		cin>>item;
		if(item=='1'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*65000;
		}
		else if(item=='2'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*20000;
		}
		else if(item=='3'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*25000;
		}
		else if(item=='4'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*15000;
		}
		else if(item=='5'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*20000;
		}
		else if(item=='6'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*30000;
		}
		else {
		cout<<"You have entered worng option, please type again  "<<endl;
		goto mobilelevel;
	}
	}
	
	
//	***********************************laptop*************************************


	if(choice=='l'||choice=='L'){
		laptoplevel:
		cout<<"LAPTOP details"<<endl;
		cout<<"(1) Apple ==>> Price :      1,00,000/- "<<endl;
		cout<<"(2) Hp ==>> Price :         50,000/- "<<endl;
		cout<<"(3) Lenovo ==>> Price :     75,000/- "<<endl;
		cout<<"(4) DELL ==>> Price :       45,000/- "<<endl;
		cout<<"(5) HP Victus ==>> Price :  60,000/- "<<endl;
		cout<<"(6) ASUS ==>> Price :       60,000/- "<<endl;
		cout<<"Please Enter your choice = "<<endl;
		cin>>item;
		if(item=='1'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*100000;
		}
		else if(item=='2'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*50000;
		}
		else if(item=='3'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*75000;
		}
		else if(item=='4'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*45000;
		}
		else if(item=='5'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*60000;
		}
		else if(item=='6'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*60000;
		}
		else {
		cout<<"You have entered worng option, please type again  "<<endl;
		goto laptoplevel;
	}
	}
	
	
	//*********************************Desktop*******************************************
	
	
	if(choice=='d'||choice=='D'){
		desktoplevel:
		cout<<"DESKTOP details"<<endl;
		cout<<"(1) Apple ==>> Price :      50,000/- "<<endl;
		cout<<"(2) Hp ==>> Price :         10,000/- "<<endl;
		cout<<"(3) Lenovo ==>> Price :     15,000/- "<<endl;
		cout<<"(4) DELL ==>> Price :       25,000/- "<<endl;
		cout<<"(5) Samgsumg ==>> Price :  5,000/- "<<endl;
		cout<<"(6) ASUS ==>> Price :       12,000/- "<<endl;
		cout<<"Please Enter your choice = "<<endl;
		cin>>item;
		if(item=='1'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*50000;
		}
		else if(item=='2'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*10000;
		}
		else if(item=='3'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*15000;
		}
		else if(item=='4'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*25000;
		}
		else if(item=='5'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*5000;
		}
		else if(item=='6'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*12000;
		}
		else {
		cout<<"You have entered worng option, please type again  "<<endl;
		goto desktoplevel;
	}
	}
	//******************************Headphone**************************************************
	if(choice=='H'||choice=='h'){
		headphonelevel:
		cout<<"Headphone details"<<endl;
		cout<<"(1) Apple ==>> Price :      20,000/- "<<endl;
		cout<<"(2) Samgsung ==>> Price :    3,000/- "<<endl;
		cout<<"(3) Redmi ==>> Price :       2,000/- "<<endl;
		cout<<"(4) Realmi ==>> Price :     1,000/- "<<endl;
		cout<<"(5) SONY ==>> Price :       7,000/- "<<endl;
		cout<<"(6) Boat ==>> Price :       3,000/- "<<endl;
		cout<<"Please Enter your choice = "<<endl;
		cin>>item;
		if(item=='1'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*20000;
		}
		else if(item=='2'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*3000;
		}
		else if(item=='3'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*2000;
		}
		else if(item=='4'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*1000;
		}
		else if(item=='5'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*7000;
		}
		else if(item=='6'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*3000;
		}
		else {
		cout<<"You have entered worng option, please type again  "<<endl;
		goto headphonelevel;
	}
	}
	
	
	//******************************speaker***************************************
	
	
	if(choice=='s'||choice=='S'){
		speakerlevel:
		cout<<"Speaker details"<<endl;
		cout<<"(1) BOAT ==>> Price :      5,000/- "<<endl;
		cout<<"(2) Hp ==>> Price :         7,000/- "<<endl;
		cout<<"(3) Lenovo ==>> Price :     5,000/- "<<endl;
		cout<<"(4) DELL ==>> Price :       5,000/- "<<endl;
		cout<<"(5) i Ball ==>> Price :     3,000/- "<<endl;
		cout<<"(6) SONY ==>> Price :       10,000/- "<<endl;
		cout<<"Please Enter your choice = "<<endl;
		cin>>item;
		if(item=='1'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*50000;
		}
		else if(item=='2'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*7000;
		}
		else if(item=='3'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*5000;
		}
		else if(item=='4'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*5000;
		}
		else if(item=='5'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*3000;
		}
		else if(item=='6'){
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+quantity*10000;
		}
		else {
		cout<<"You have entered worng option, please type again  "<<endl;
		goto speakerlevel;
	}
	}
	return billamount;
}
