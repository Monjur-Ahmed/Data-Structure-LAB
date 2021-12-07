#include <bits/stdc++.h>
using namespace std;

class Student{
protected:
	string name;
	string id;
	float score;
public:

	Student()
	{
		this->name = "no Name";
		this->id = "no id";
		this->score = 0.00;
	}

	Student(string name, string id, float score)
	{
		 this->name = name;
		 this->id = id;
		 this->score = score;
	}



	void output()
	{
		cout<<"Name : "<<this->name<<"\n";
		cout<<"Id : "<<this->id<<"\n";
		cout<<"Score : "<<this->score<<"\n";

	}

};

class Gradute: public Student{
private:
	string superVisor;
public:

	Gradute()
	{
		this->superVisor = "No Supervisor";
	}
	Gradute(string name, string id, float score, string supName)
	{
		this->name = name;
		this->id = id;
		this->score = score;
		this->superVisor = supName;
	}


	void output()
	{
		cout<<"Name : "<<this->name<<"\n";
		cout<<"Id : "<<this->id<<"\n";
		cout<<"Score : "<<this->score<<"\n";
		cout<<"Super Visor Name: "<<this->superVisor<<"\n";
	}

};
int main()
{
	string name, id, sName;
	float score;
	cin>>name>>id>>score;
	cin>>sName;
	Gradute g1(name, id, score, sName);
	cout<<"Task 1"<<endl;
	g1.output();
	cout<<endl;
	cout<<endl;

	// task 2;
	cout<<"Task 2"<<endl;
	Gradute g2;
	g2.output();
	cout<<endl;
	cout<<endl;

	//task 3;
	cout<<"Task 3"<<endl;
	Gradute g3("Milon", "124", 40.60, "Barek");
	g3.output();



	return 0;
}
