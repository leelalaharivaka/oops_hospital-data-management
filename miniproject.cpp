#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

void menu();
void pascode();
void cpascode();

using namespace std;
class one{
	public:
		virtual void get()=0;
		virtual void show()=0;
		
};
class info:public one{
	public:
		char name[50],time[50];
		int num, age;
		void get()
		{
			system("cls");
			cin.sync();
			cout<<"\n enter the patient name =";
			cin.getline(name,50);
			cout<<"\n enter the appointment time =";
			cin.getline(time,50);
			cout<<"\n enter age = ";
			cin>>age;
			cout<<"\n enter appointment no =";
			cin>>num;
			
		}
		void show(){
			cout<<"\n name = "<<name;
			cout<<"\n age = "<<age;
			cout<<"\n n0 = "<<num;
			cout<<"\n time = "<<time;
			
		}
};
class rana:public info{
	public:
		info a1;
		void get(){
			system("cls");
			ofstream out("rana.txt",ios:: app|ios::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"your entry has been saved ";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("rana.txt");
			if(in==NULL){
				cout<<"\n\nno data in the file ";
				cout<<"\n\n\t\tpress any key to continue : ";
				getch();
				menu();
			}
			else{
				while(!in.eof()){
					in.read((char*)&a1,sizeof(a1));
					a1.show();
				}
				in.close();
				getch();
				menu();
     			}
		}
};
class waqar:public info{
	public:
		info a1;
		void get(){
			system("cls");
			ofstream out("waqar.txt",ios:: app|ios::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"your entry has been saved ";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("waqar.txt");
			if(in==NULL){
				cout<<"\n\nno data in the file ";
				cout<<"\n\n\t\tpress any key to continue : ";
				getch();
				menu();
			}
			else{
				while(!in.eof()){
					in.read((char*)&a1,sizeof(a1));
					a1.show();
				}
				in.close();
				getch();
				menu();
     			}
		}
	
	
};
class ahmad:public info{
	public:
		info a1;
		void get(){
			system("cls");
			ofstream out("ahmad.txt",ios:: app|ios::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"your entry has been saved ";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("ahmad.txt");
			if(in==NULL){
				cout<<"\n\nno data in the file ";
				cout<<"\n\n\t\tpress any key to continue : ";
				getch();
				menu();
			}
			else{
				while(!in.eof()){
					in.read((char*)&a1,sizeof(a1));
					a1.show();
				}
				in.close();
				getch();
				menu();
     			}
		}
	
};
class staff:public one{
	public:
		char all[999];
		char name[50],age[20],sal[30],pos[20];
		void get(){
			ofstream out("staff.txt",ios::app);
			{
				system("cls");
				cin.sync();
				cout<<("\nEnter name = ");
				cin.getline(name,50);
				cout<<("\nEnter age = ");
				cin.getline(age,20);
				cout<<("\nEnter salary = ");
				cin.getline(sal,30);
				cout<<("\nEnter working position = ");
				cin.getline(pos,20);
			}
			out<<"\n name ="<<name<<"\nage"<<age<<"\nsalary"<<sal<<"\n working position\n"<<pos;
			out.close();
			cout<<"\n\n your information has been saved :\n\t\t press any key to continue ";
			getch();
			menu();
			
		}
		void show(){
			ifstream in("staff.txt");
			if(!in){
				cout<<"file open error";
				
			}
			while(!(in.eof())){
				in.getline(all,999);
				cout<<all<<endl;
			}
			in.close();
			cout<<"\n\n\t\tpress any key to continue : ";
			getch();
			menu();
			
		}
};
class information{
	public:
	   void drinfo()
	   {
            system("cls");
            system("color F3");
            cout<<"\n=======================================================\n";
            cout<<"\n\n\t\t(Three Doctor Available) \n\n \t\t[Infotmation And Timing Are Given Below]\n";
            cout<<"--------------------------------------------------------------\n";
            cout<<"\t\tDr Available:\n";
			cout<<"\t\tDr. Rana (skin specialist)\n\n";
			cout<<"\t\t\t [[Timing]]:\n\n";
			cout<<"\tMonday To Friday\t\t9AM TO 5PM\n";
			cout<<"\tSatuday         \t\t9AM TO 1PM\n";
			cout<<"\tSunday          \t\t off\n";
			cout<<"\n--------------------------------------------------------------\n";
			cout<"\t\tDr. waqar (child specialist)\n\n";
			cout<<"\t\t\t [[Timing]]:\n\n";
			cout<<"\tMonday To Friday\t\t2PM TO 10PM\n";
			cout<<"\tSatuday         \t\t8AM TO 1PM\n";
			cout<<"\tSunday          \t\t12PM TO 9PM\n";
			cout<<"\n--------------------------------------------------------------\n";
			cout<<"\t\tDr. ahmad (DVM)\n\n";
			cout<<"\t\t\t [[Timing]]:\n\n";
			cout<<"\tMonday To Friday\t\t8AM TO 5PM\n";
			cout<<"\tSatuday         \t\t10AM TO 1PM\n";
			cout<<"\tSunday          \t\t off\n";
			cout<<"\n--------------------------------------------------------------\n";
			cout<<"\n\n\t\tpress any key to continue : ";
			getch();
			menu();
       }

};

void call_dr(){
	system("cls");
	int choice;
	cout<<"\n\n\n\t\t\tpress 1 for dr rana  \n\n\n\t\t\tpress 2 for dr waqar  \n\n\n\t\t\t press 3 for dr ahmad";
	cin>>choice;
	one *ptr;
	rana s3;
	waqar s4;
	ahmad s5;
	if(choice==1){
		ptr=&s3;
		ptr->get();
	}
	if(choice==2){
		ptr=&s4;
		ptr->get();
	}
	if(choice==3){
		ptr=&s5;
		ptr->get();
	}
	else{
		cout<<"sorry inavalid choice : ";
	}
	
}
void pinfoshow(){
	system("cls");
	int choice;
	cout<<"\n\n\n\t\t\tpress 1 for dr rana  \n\n\n\t\t\tpress 2 for dr waqar  \n\n\n\t\t\t press 3 for dr ahmad";
	cin>>choice;
	one *ptr;
	rana s3;
	waqar s4;
	ahmad s5;
	if(choice==1){
		ptr=&s3;
		ptr->show();
	}
	else if(choice==2){
		ptr=&s4;
		ptr->show();
	}
	else if(choice==3){
		ptr=&s5;
		ptr->show();
	}
	else{
		cout<<"sorry inavalid choice : ";
		getch();
		menu();
	}
	
	
}
void menu(){

	system("cls");
	system("color FC");
	cout<<"\n";
	cout<<"\n";
	cout<<"\t\t  |  ++++++++++++++++++++++++ MAIN MENU  ++++++++++++++++++++++   |   \n";
	cout<<"\t\t  |                     HOSPITAL MANGEMENT SYSTEM                 |   \n";
	cout<<"\t\t  |  ===========================================================  |   \n";
	cout<<"\n-----------------------------------------------------------------------  \n";
	cout<<"\t\t     please select any option      \n";
	
	cout<<"\n\n\t1-\t\tPress 1 For Available Doctor Information\n\n";
    cout<<"\t2-\t\tPress 2 for Doctor Appointment\n\n";
    cout<<"\t3-\t\tPress 3 for Saving Staff information\n\n";
    cout<<"\t4-\t\tPress 4  for Checking Patient Appointment Menu:\n\n";
    cout<<"\t5-\t\tPress 5 for Checking  Staff Information Menu:\n\n"; 
    cout<<"\t6-\t\tPress 6 for Change Password or Create password :\n\n";
	cout<<"\t7-\t\t[ Press 7 for LOGOUT ]\n";
	cout<<"\n==========================================================================\n";
	cout<<"\n\n\t\t please enter your choice :";
	information a1;
	one *ptr;
	staff a2;
	int a;
	cin>>a;
	if(a==1){
		a1.drinfo();
	}
	else if(a==2){
		call_dr();
	}
	else if(a==3){
		ptr=&a2;
		ptr->get();
	}
	else if(a==4){
		pinfoshow();
	}
	else if(a==5){
		ptr=&a2;
		ptr->show();
	}
	else if(a==6){
		cpascode();
	}
	else if(a==7){
		pascode();
	}
	else{
		cout<<"sorry invalid choice ";
	}

}

void pascode(){
	system("cls");
	char p1[50],p2[50],p3[50];
	system("color FC");
	ifstream in("password.txt");
	{
		cin.sync();
		cout<<"\n\n\n\n\n\n\n\t\t\t enter the password :";
		cin.getline(p1,50);
		in.getline(p2,50);
		if(strcmp(p2,p1)==0){
			menu();
		}
		else{
			cout<<"\n\n\n\t\t\t incorrect passcode please try again \n";
			
			pascode();
		}
		
	}
	in.close();
	
	
}


void cpascode(){
	char n[50];
	system("cls");
	ofstream out("password.txt");
	{
		cin.sync();
		cout<<"\n\n\n\t\t enter the new password: ";
		cin.getline(n,50);
		out<<n;
	}
	out.close();
	cout<<"\t\t your new password has been saved \n\t\t press any key to return menu";
	getch();
	menu();
}

int main(){
	pascode();
	system("pause");
}
