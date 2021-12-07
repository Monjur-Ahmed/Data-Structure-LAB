#include<bits/stdc++.h>
using namespace std;

struct profile
{
    string name;
    string id;
    float mid;
    float fin;
    float ct1,ct2,ct3;
    float bct1,bct2;
    float as1,as2;
    float CT, AS;
    float Att;
    float total;
    string grade;
};

int main()
{
    int n;
    int arr[3];
    string sid;
    cout<<"How many students:";
    cin>>n;
    struct profile students[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Student Name:";
        cin>>students[i].name;
        cout<<"ID:";
        cin>>students[i].id;
        cout<<"Mid marks:";
        cin>>students[i].mid;
        while(students[i].mid>30)
        {
            cout<<"Invalid Marks!Please enter marks within 0-30"<<endl;
            cin>>students[i].mid;
        }
        cout<<"Final marks:";
        cin>>students[i].fin;
         while(students[i].fin>40)
        {
            cout<<"Invalid Marks!Please enter marks within 0-40"<<endl;
            cin>>students[i].fin;
        }

        cout<<"Enter 3 Class Test Marks:";
        cin>>students[i].ct1>>students[i].ct2>>students[i].ct3;

        while(students[i].ct1>10 || students[i].ct2>10 || students[i].ct3>10 )
        {
            cout<<"Invalid Marks!Please enter marks within 0-10"<<endl;
            cin>>students[i].ct1>>students[i].ct2>>students[i].ct3;
        }

        cout<<"Enter 2 Assignment marks:";
        cin>>students[i].as1>>students[i].as2;

        while(students[i].as1>10 || students[i].as2>10)
        {
           cout<<"Invalid Marks!Please enter marks within 0-10"<<endl;
           cin>>students[i].as1>>students[i].as2;
        }

        cout<<"Attendence Marks:";
        cin>>students[i].Att;

         while(students[i].Att>10)
        {
           cout<<"Invalid Marks!Please enter marks within 0-10"<<endl;
           cin>>students[i].Att;
        }


        arr[0]=students[i].ct1;
        arr[1]=students[i].ct2;
        arr[2]=students[i].ct3;
        sort(arr,arr+3);

        students[i].bct1=arr[1];
        students[i].bct2=arr[2];

        students[i].CT=(students[i].bct1+students[i].bct2)/2.0;
        students[i].AS=(students[i].as1+students[i].as2)/2.0;
        students[i].total=students[i].mid+students[i].fin+ students[i].CT+students[i].AS+students[i].Att;

        if(students[i].total>=80)
        {
            students[i].grade="A+";
        }
        else if(students[i].total>=75 && students[i].total<80)
        {
            students[i].grade="A";
        }
        else if(students[i].total>=70 && students[i].total<75)
        {
            students[i].grade="A-";
        }
        else if(students[i].total>=65 && students[i].total<70)
        {
            students[i].grade="B+";
        }
        else if(students[i].total>=60 && students[i].total<65)
        {
            students[i].grade="B";
        }
        else if(students[i].total>=55 && students[i].total<60)
        {
            students[i].grade="B-";
        }
        else if(students[i].total>=50 && students[i].total<55)
        {
            students[i].grade="C+";
        }
        else if(students[i].total>=45 && students[i].total<50)
        {
            students[i].grade="C";
        }
        else if(students[i].total>=40 && students[i].total<45)
        {
            students[i].grade="D";
        }
        else
        {
            students[i].grade="F";
        }
    }
    cout<<"\nResult Calculated"<<endl;

    while(true)
    {
        cout<<"\nEnter ID to view Result(Press 0 to exit):";
        cin>>sid;
        if(sid=="0")
        {
            return 0;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(sid==students[i].id)
                {
                    cout<<"\nStudent name:"<<students[i].name<<endl;
                    cout<<"ID:"<<students[i].id<<endl;
                    cout<<"Mid Marks:"<<students[i].mid<<endl;
                    cout<<"Final Marks:"<<students[i].fin<<endl;
                    cout<<"Class Test:"<<students[i].CT<<endl;
                    cout<<"Best two CT:"<<students[i].bct1<<" "<<students[i].bct2<<endl;
                    cout<<"Assignment:"<<students[i].AS<<endl;
                    cout<<"Attendence:"<<students[i].Att<<endl;
                    cout<<"Total Marks:"<<students[i].total<<endl;
                    cout<<"Grade:"<<students[i].grade<<endl;
                    break;
                }
                else
                {
                    cout<<"ID Not found"<<endl;
                }

            }
        }
    }

}
