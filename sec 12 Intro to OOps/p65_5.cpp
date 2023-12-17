#include <iostream>
using namespace std;
class student
{
private:
    int rollNum;
    string name;
    double marks[3];
    // string subjects[3];  //can use this but will use character array
    char subjects[3][20];
    double totalM = 0;

public:
    void setRollNum(int roll_num)
    {
        rollNum = roll_num;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSubjects(char sub[3][20]);
    void getSubjects();
    void setMarks(double marks[]);
    void getMarks();
    double totalMarks();
    char grade();
};

void student::setSubjects(char sub[3][20])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            subjects[i][j] = sub[i][j];
        }
    }
}

void student ::getSubjects()
{
    cout << "\nEntered subjects are :: ";
    for (int i = 0; i < 3; i++)
    {
        cout << subjects[i] ;
        if(i<2)  {cout<<",";}
    }

}

void student ::setMarks(double marks[])
{
    for (int i = 0; i < 3; i++)
    {
        this->marks[i] = marks[i];
    }
}

void student ::getMarks()
{
    cout << "\nEntered marks are :: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Marks in " << subjects[i] << " = " << marks[i] << endl;
    }
}
double student ::totalMarks()
{
    for (int i = 0; i < 3; i++)
    {
        totalM += marks[i];
    }
    return totalM;
}
char student :: grade()
 {
 float average=totalMarks()/3;//dont write here totalM as then you first need to 
 if(average > 60)         //call totalMarks in main in order to get totalM
 return 'A';
 else if(average>=40 && average<60)
 return 'B';
 else
 return 'C';
 }
    

int main()
{
    student s;
    int rollnum;
    string name;
    char subjects[3][20];
    double marks[3];
    cout << "Enter the roll_number ::";
    cin >> rollnum;
    s.setRollNum(rollnum);

    cout << "Enter the name ::";
    cin >> name;
    s.setName(name);

    cout << "\nEnter the 3 subjects " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> subjects[i];
    }
    s.setSubjects(subjects);
    s.getSubjects();

    cout << "\n\nEnter the marks out of 100 " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }
    s.setMarks(marks);
    s.getMarks();
    cout<<"Total Marks obtained :: "<<s.totalMarks()<<endl;
    cout<<"Grade of student :: "<<s.grade()<<endl;
}

// cout<<"Entered names are :: ";
// for(int i=0;i<3;i++){
//     cout<<name[i];
// }




//his code
// Program with a Class for Student 
// #include<iostream>
// using namespace std;
// class Student
// {
// private:
//  int roll;
//  string name;
//  int mathMarks;
//  int phyMarks;
//  int chemMarks;
// public:
//  Student(int r,string n,int m,int p,int c)
//  {
//  roll=r;
//  name=n;
//  mathMarks=m;
//  phyMarks=p;
//  chemMarks=c;
//  }
//  int total()
//  {
//  return mathMarks+phyMarks+chemMarks;
//  }
//  char grade()
//  {
//  float average=total()/3;
//  if(average > 60)
//  return 'A';
//  else if(average>=40 && average<60)
//  return 'B';
//  else
//  return 'C';
//  }
 
// };
// int main()
// {
//  int roll;
//  string name;
//  int m,p,c;
//  cout<<"Enter Roll number of a Student: ";
//  cin>>roll;
//  cout<<"Enter Name of a Student:";
//  cin>>name;
//  cout<<"Enter marks in 3 subjects";
//  cin>>m>>p>>c;
//  Student s(roll,name,m,p,c);
//  cout<<"Total Marks:"<<s.total()<<endl;
//  cout<<"Grade of Student:"<<s.grade()<<endl;
 
// }