
//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************
#include<fstream>
#include<ctype.h>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <string>


//CLASS USED IN PROJECT
class account {
	int acno;
	int day;
	int month;
	int year;
	char name[50];
	char faculty[51];
	char course[52];
	char university[53];
	char email[54];
	char physical[55];
	int deposit;
	int yos;
	int years;
	long contact;
	char type;
	public:
	void create_account2();//function to get savings account data from user
	void create_account();//function to get current account data from user
	void show_account();//function to show data on screen
	void modify();   //function to get new data from user
	void dep(int);//function to accept amount and add to balance amount
	void draw(int);//function to accept amount and subtract from balance amount
	void report();//function to show data in tabular format
	int retacno();//function to return account number
	int retdeposit();//function to return balance amount
	char rettype();//function to return type of account
};


//savings account
void account::create_account2() {
repeat:
	std::cout<<"\nYou chose to create a Savings Account.\nPress S to continue:\n";
	std::cin>>type;
	if(type=='S') {
		goto good;
	}else if(type=='s') {
		goto good;
	}else {
		std::cout<<"\nPlease Select letter S\n";
		goto repeat;
	}
good:
	std::cout<<"\nEnter The account No.\n";
	std::cin>>acno;

nam:
	std::cout<<"\n\nEnter The Name of The account Holder : \n";
	std::cin>>name;

	type=toupper(type);
naj:
	std::cout<<"\nEnter your Faculty Name:\n";
	std::cin>>faculty;

	std::cout<<"\nEnter your Course name:\n";
	std::cin>>course;

wrong:
	std::cout<<"\nEnter your Year of Study:\n";
	std::cin>>yos;
	if(yos==1) {
		goto foo;
	}else if(yos==2) {
		goto foo;
	}else if(yos==3){
		goto foo;
	}else if (yos==4) {
		goto foo;
	}else if (yos==5) {
		goto foo;
	}else if (yos==6) {
		goto foo;
	}else {
		std::cout<<"\nInvalid Study Year\n";
		goto wrong;
	}
foo:	
	std::cout<<"\nEnter your University Name:\n";
	std::cin>>university;
	std::cout<<"\nEnter your Email address\n";
	std::cin>>email;
	std::cout<<"\nEnter your Contact\n";
	std::cin>>contact;
res:
	std::cout<<"\nEnter your Physical Residence\n";
	std::cin>>physical;
ret:
	std::cout<<"\nEnter The Initial amount(Minimum amount is 500 for Savings Account) :\n ";
	std::cin>>deposit;
	if (deposit>500) {
		goto ben;
	}else {
		std::cout<<"\nLow Deposit. Please Make the right deposit\n";
		goto ret;
	}
ben:
	std::cout<<"\n\n\nAccount Created..\n\n";
}


//current account creation

void account::create_account() {
again:
	std::cout<<"\nYou chose to create a Current account,\nPress C to continue : \n";
	std::cin>>type;
	if(type=='C') {
		goto kol;
	}else if(type=='c') {
		goto kol;
	}else{
		std::cout<<"\nWrong selection. Please select Letter C\n";
		goto again;
	}
kol:
	std::cout<<"\nEnter The account No.\n";
	std::cin>>acno;
	if(acno>0) {
		goto conti;
	}else if(acno<1) {
		std::cout<<"Invalid Acc No!!";
		goto kol;
	}else {
		std::cout<<"Invalid Acc No!!";
		goto kol;
	}
conti:
	std::cout<<"\n\nEnter The Name of The account Holder : \n";
	std::cin>>name;
	type=toupper(type);

wrog:
	std::cout<<"\nEnter your Year of Study:\n";
	std::cin>>yos;
	if(yos==1) {
		goto foos;
	}else if(yos==2) {
		goto foos;
	}else if(yos==3){
		goto foos;
	}else if (yos==4) {
		goto foos;
	}else if (yos==5) {
		goto foos;
	}else if (yos==6) {
		goto foos;
	}else {
		std::cout<<"\nInvalid Study Year\n";
		goto wrog;
	}
foos:	
	std::cout<<"\nEnter your Course name:\n";
	std::cin>>course;

	std::cout<<"\nEnter your University Name:\n";
	std::cin>>university;

	std::cout<<"\nEnter your Email address\n";
	std::cin>>email;
da:
	std::cout<<"\nEnter Your Day of birth\n";
	std::cin>>day;
	switch(day) {
		case 1 ... 31:
			goto mo;
			break;
		default:
			std::cout<<"\nGive a valid day!!!\n";
			goto da;
			break;
	}
	
	
mo:
	std::cout<<"\nEnter Your Month of birth\n";
	std::cin>>month;
	switch(month) {
		case 1 ... 12:
			goto datt;
			break;
		default:
			std::cout<<"\nGive a valid month!!!\n";
			goto mo;
	}
	
	
datt:
	std::cout<<"\nEnter Your Year of birth\n";
	std::cin>>years;
	switch(years) {
		case 1940 ... 2009:
			goto yu;
			break;
		default:
			std::cout<<"\nGive a valid Year!!!\n";
			goto datt;
			break;
	}

yu:
	std::cout<<"\nEnter your Contact\n";
	std::cin>>contact;
no:
	std::cout<<"\nEnter The Initial amount(Not less than Kshs.1000 for Current Account) : \n";
	std::cin>>deposit;
	if (deposit>999) {
		goto comp;
	}else{
		std::cout<<"\nLow Deposit. Please make the right Deposit Amount.\n";
		goto no;
	}
comp:
	std::cout<<"\n\n\nAccount Created..";
	std::cout<<"\n\nYou have been issued with a cheque book.\nPlease collect it at our nearest Premier bank branch";
}



void account::show_account() {
	std::cout<<"\nAccount No. : "<<acno;
	std::cout<<"\nAccount Holder Name : "<<name;
	std::cout<<"\nType of Account : "<<type;
	std::cout<<"\nBalance amount : "<<deposit;
	std::cout<<"\nFaculty Name : "<<faculty;
	std::cout<<"\nCourse Name : "<<course;
	std::cout<<"\nUniversity Name : "<<university;
	std::cout<<"\nEmail Address : "<<email;
	std::cout<<"\nContact No: "<<contact;
	std::cout<<"\nPhysical Address : "<<physical;
	std::cout<<"\nDate of Birth : "<<day<<"-"<<month<<"-"<<years;
}




void account::modify() {
	std::cout<<"\nThe account No."<<acno;
	std::cout<<"\n\nEnter The Name of The account Holder : "<<name;
	std::cout<<"\nThe Faculty Name. "<<faculty;
	std::cout<<"\nCourse Name: "<<course;
	std::cout<<"\nUniversity Name: "<<university;
	std::cout<<"\nPhysical Address"<<physical;
	std::cout<<"\nBalance : "<<deposit;
	std::cout<<"\nType of account: "<<type;	
	std::cout<<"\nEmail Address: ";
	std::cin>>email;
	std::cout<<"\nContact: ";
	std::cin>>contact;
	contact=toupper(contact);	
	
}

void account::dep(int x) {
		deposit+=x;	
}

void account::draw(int x) {
	deposit-=x;
}

void account::report() {
	std::cout<<"Account Number: "<<acno<<std::setw(10)<<"\n"<<"Account Holder Name: "<<name<<std::setw(10)<<"\n"
	<<"Account Type: "<<type<<std::setw(6)<<"\n"<<"Account Balance: "<<deposit<<"\n"
	<<"University: "<<university<<std::setw(20)<<"\n"<<"Faculty: "<<faculty<<std::setw(20)
	<<"\n"<<"Year of Study: "<<yos<<std::setw(20)<<"\n"<<"Course: "<<course<<std::setw(30)<<"\n"<<
	"Physical Address: "<<physical<<std::setw(20)<<"\n"<<"Contact: "<<contact<<std::setw(20)<<"\n"
	<<"Email Address: "<<email<<std::setw(30)<<"\n"<<std::endl;
	
}

int account::retacno() {
	return acno;
}

int account::retdeposit() {
	return deposit;
}

char account::rettype() {
	return type;
}



//function to write in file
void write_account() {
	account ac;
	std::ofstream outFile;
	outFile.open("account.dat",std::ios::binary|std::ios::app);
	ac.create_account();
	outFile.write((char *) &ac, sizeof(account));
	outFile.close();
}

//function to write in file
void write_account2() {
	account ac;
	std::ofstream outFile;
	outFile.open("account.dat",std::ios::binary|std::ios::app);
	ac.create_account2();
	outFile.write((char *) &ac, sizeof(account));
	outFile.close();
}

//function to read specific record from file
void display_sp(int n) {
	account ac;
	int flag=0;
	std::ifstream inFile;
	inFile.open("account.dat",std::ios::binary);
		if(!inFile) {
				std::cout<<"File could not be open !! Press any Key...";
				return;
			}
	std::cout<<"\nBALANCE DETAILS\n";
			
	while(inFile.read((char *) &ac, sizeof(account))) {
		if(ac.retacno()==n) {
			ac.show_account();
			flag=1;
		}
	}
	inFile.close();
		if(flag==0)
			std::cout<<"\n\nAccount number does not exist";
}

//function to modify record of file
void modify_account(int n) {
	int found=0;
	account ac;
	std::fstream File;
	File.open("account.dat",std::ios::binary|std::ios::in|std::ios::out);
		if(!File) {
		std::	cout<<"File could not be open !! Press any Key...";
			return;
		}
	while(File.read((char *) &ac, sizeof(account)) && found==0) {
		if(ac.retacno()==n) {
			ac.show_account();
			std::cout<<"\n\nEnter The New Details of account"<<std::endl;
			ac.modify();
			int pos=(-1)*sizeof(account);
			File.seekp(pos,std::ios::cur);
			File.write((char *) &ac, sizeof(account));
			std::cout<<"\n\n\t Record Updated";
			found=1;
		}
	}
	File.close();
		if(found==0)
		std::cout<<"\n\n Record Not Found ";
}

//function to delete record of file
void delete_account(int n) {
	account ac;
	std::ifstream inFile;
	std::ofstream outFile;
	inFile.open("account.dat",std::ios::binary);
		if(!inFile) {
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
	outFile.open("Temp.dat",std::ios::binary);
	inFile.seekg(0,std::ios::beg);
		while(inFile.read((char *) &ac, sizeof(account))) {
			if(ac.retacno()!=n) {
				outFile.write((char *) &ac, sizeof(account));
			}
		}
	inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	std::cout<<"\n\n\tRecord Deleted ..";
}

//function to display all accounts deposit list
void display_all() {
	account ac;
	std::ifstream inFile;
	inFile.open("account.dat",std::ios::binary);
		if(!inFile) {
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
	std::cout<<"\n\n\tACCOUNT HOLDER LIST\n\n";
	std::cout<<"=============================\n";
	std::cout<<"ACCOUNTS\n";
	std::cout<<"=============================\n";
		while(inFile.read((char *) &ac, sizeof(account))) {
			ac.report();
		}
	inFile.close();
}

//function to deposit and withdraw amounts
void deposit_withdraw(int n, int option) {
	int amt;
	int found=0;
	account ac;
	std::fstream File;
	File.open("account.dat", std::ios::binary|std::ios::in|std::ios::out);
		if(!File) {
			std::cout<<"File could not be open !! Press any Key...";
			return;
		}
	while(File.read((char *) &ac, sizeof(account)) && found==0) {
		if(ac.retacno()==n) {
			ac.show_account();
				if(option==1) {
					std::cout<<"\n\n\tTO DEPOSIT AMOUNT ";
ry:
					std::cout<<"\n\nEnter The amount to be deposited";
					std::cin>>amt;
					if(amt>=0) {
						ac.dep(amt);
						goto low;
					}else {
						std::cout<<"\nYou Cannot deposit a negative Number.\n Give a Positive number";
						goto ry;
					}
					
				}
				if(option==2) {
					std::cout<<"\n\n\tTO WITHDRAW AMOUNT ";
hy:
					std::cout<<"\n\nEnter The amount to be withdrawn";
					std::cin>>amt;
						if(amt>=0) {
							int bal=ac.retdeposit()-amt;
									if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C')){
										std::cout<<"Insufficient balance";
										goto hy;
										}else{
											ac.draw(amt);
										}
						}else{
							std::cout<<"You Cannot make a Negative Withdrawal.\nPlease make a Positive withdrawal.\n";
							goto hy;
						}
low:							
		int pos=(-1)* sizeof(ac);
		File.seekp(pos,std::ios::cur);
		File.write((char *) &ac, sizeof(account));
		std::cout<<"\n\n\t Record Updated";
		found=1;
       }
	}
	File.close();
		if(found==0)
			std::cout<<"\n\n Record Not Found ";
}
}

//INTRODUCTION FUNCTION
void intro() {
	std::cout<<"\n\n\n\t\t\t\t    PREMIER";
	std::cout<<"\n\n\t\t\t\tBANK MANAGEMENT";
	std::cout<<"\n\n\t\t\t\t    SYSTEM";
	std::cout<<"\n\n\n\n\t\t\t     MADE BY : CRAFTY LTD";
	std::cout<<"\n\n\t\t\t  P.O BOX : 512-01001 NAIROBI";
	getch();
}



// THE MAIN FUNCTION OF PROGRAM
using namespace std;
int main() {
		
		int ac;
		char ch;
		int num;
		system("cls");
		intro();
		
	do {
		system("cls");
		cout<<"\a\n\n\n\tMAIN MENU";
		cout<<"\n\n\t00. INTRODUCTION PAGE";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\n\t06. DELETE AN ACCOUNT";
		cout<<"\n\n\t07. MODIFY AN ACCOUNT";
		cout<<"\n\n\t08. EXIT";
		cout<<"\n\n\tSelect Your Option (1-8) \n";
		cin>>ch;
		system("cls");
		
		
		
		
	switch(ch) {
		case '0':
				intro();
				break;
		case '1':
				choose:
				cout<<"\nSelect the Type of account you want to create:\n\t[1]CURRENT ACCOUNT \n\t[2]SAVINGS ACCOUNT\n";
				cin>>ac;
				if(ac==1) {
					write_account();	
				}else if(ac==2) {
					write_account2();
				}else {
					cout<<"\nPlease make the correct choice";
					goto choose;
				}
				
				break;
		case '2':
				cout<<"\n\n\tEnter The account No. : "; cin>>num;
				deposit_withdraw(num, 1);
				break;
		case '3':
				cout<<"\n\n\tEnter The account No. : "; cin>>num;
				deposit_withdraw(num, 2);
				break;
		case '4':
				cout<<"\n\n\tEnter The account No. : "; cin>>num;
				display_sp(num);
				break;
		case '5':
				display_all();
				break;
		case '6':
				cout<<"\n\n\tEnter The account No. : "; cin>>num;
				delete_account(num);
				break;
		case '7':
				cout<<"\n\n\tEnter The account No. : "; cin>>num;
				modify_account(num);
				break;
		case '8':
				cout<<"\n\n\tPREMIER BANK.....your caring partner";
				break;
 		default :cout<<"\a";
		}
		
			getch();
	}while(ch!='8');
		return 0;
}




//END OF PROJECT
