#include<bits/stdc++.h>
using namespace std;

struct studentProfile
{
    char name[20],sex[10];
    long long int id;
    int date,month,year;
    long long unixTime;
    float score;
} students[20];

class Student
{
public:
    void input()
    {
        cout<<"Enter 20 Students information"<<endl;
        for(int i=0; i<20; i++)
        {
            cout<<"\nEnter information for student: "<<i+1<<endl;
            cout<<"Enter student name: ";
            cin>>students[i].name;
            cout<<"Enter student Sex: ";
            cin>>students[i].sex;
            cout<<"Enter student ID: ";
            cin>>students[i].id;
            cout<<"Enter Date of Birth(dd/mm/yy): ";
            scanf("%d/%d/%d",&students[i].date,&students[i].month,&students[i].year);
            cout<<"Enter student Score: ";
            cin>>students[i].score;
	    students[i].unixTime =  ((((students[i].year*12)+students[i].month)*30)+students[i].date);

            cout<<"========================================"<<endl;
        }
    }
    void highestScore()
    {
        int  maximum = students[0].score;
        int position;
        for(int i=0; i<20; i++)
        {
            if(students[i].score>=maximum)
            {
                maximum = students[i].score;
                position=i;
            }
        }
        cout<<"\nDisplaying Hight Scorer Student's Information"<<endl;
        cout<<"========================================"<<endl;
        cout<<"Name: "<<students[position].name<<endl;
        cout<<"Sex: "<<students[position].sex<<endl;
        cout<<"ID: "<<students[position].id<<endl;
        printf("Date of Birth: %d/%d/%d\n",students[position].date,students[position].month,students[position].year);
        cout<<"Score: "<<students[position].score<<endl;

    }
    void youngestStudent();
    void proportionOfGirl();
    void showAll();

};

void Student::showAll()
{
	cout<<"Showing All Student's Information"<<endl;
	for(int i = 0; i<20; i++)
	{
		cout<<"Name : "<<students[i].name<<endl;
		cout<<"Sex : "<<students[i].sex<<endl;
		cout<<endl;
	}
}

void Student::proportionOfGirl()
{

	int numOfGirl = 0;
	for(int i = 0; i<20; i++)
	{
		if(strcmp(students[i].sex, "female") == 0)
			numOfGirl++;
	}


	int numOfBoy = 20 - numOfGirl;

	for(int i = 20; i>1; i--)
	{
		if(numOfBoy%i == 0 && numOfGirl%i == 0)
		{
			numOfBoy /=i;
		       	numOfGirl /=i;
			break;
		}
	}

	cout<<"The Proportion of girs in the class"<<endl;
	cout<<"==================================="<<endl;
	cout<<"girl : boy ="<<numOfGirl<<" : "<<numOfBoy<<endl;


}

void Student::youngestStudent()
{
	int position = 0;
	long long min = students[0].unixTime;
	for(int i = 0; i<20; i++)
	{
		if(students[i].unixTime > min)
		{
			min = students[i].unixTime;
			position = i;
		}
	}

	cout<<"Displaying The Youngest Student's Information"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Name :"<<students[position].name<<endl;
	cout<<"Sex :"<<students[position].sex<<endl;
	cout<<"ID :"<<students[position].id<<endl;
	cout<<"BOD :"<<students[position].date<<"-"<<students[position].month<<"-"<<students[position].year<<endl;
	cout<<"Score :"<<students[position].score<<endl;


}



int main()
{

    Student a;
    a.input();

    a.highestScore();
    a.youngestStudent();
    a.proportionOfGirl();
}
