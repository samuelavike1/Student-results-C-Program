#include<iostream>
using namespace std;

#define MAX 100

class student{
	public:
		string studName;
		string indexNo;
		string remarks;
		int marks;
		char grade;
	public:
		void getData();
		void calculate();
		void printDetials();
};

void student::getData(){
	cout<<"Enter Index number: ";
	cin>>indexNo;
	cout<<"Enter Name: ";
	cin>>studName;
	cout<<"Enter marks: ";
	cin>>marks;
}

void student::calculate(){
	switch(marks){
		case 70 ... 100:
			grade = 'A';
			remarks = "Excellent";
			break;
		case 60 ... 69:
			grade = 'B';
			remarks ="Very Good ";
			break;
		case 50 ... 59:
			grade = 'C';
			remarks = "Pass";
			break;
		case 0  ... 49:
			grade = 'D';
			remarks = "Fail";
			break;
		default:
			cout<<"Invalid input";
	}
}
void student::printDetials(){
	cout <<"Student details:\n";
    cout <<"Name: "<<studName <<endl;
    cout <<"index Number: " << indexNo <<endl;
    cout <<"Remarks: " <<remarks <<endl;
    cout <<"Marks: "<<marks <<endl;
    cout <<"Grade: "<<grade <<endl;
}

int main(){
	student std[MAX];
	int n;
	cout<<"Enter the number of students\n";
	cin>>n;

	for(int i = 0; i < n; i++){
		cout<<"Enter student details " <<i + 1 <<":\n";
		std[i].getData();
		std[i].calculate();
	}
	cout<<endl;

	for(int i = 0;i < n; i++){
        cout << "Details of student " << (i+1) << ":\n";
        std[i].printDetials();
        cout<<endl;
    }
    cout<<endl;
    

	return 0;
}
