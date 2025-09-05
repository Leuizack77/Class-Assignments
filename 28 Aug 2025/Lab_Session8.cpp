#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Stud
{
    public:
        int roll;
        string name;
        string dob;
        int marks;

    void display() const
    {
        cout<< "Roll: "<<roll
        <<", Name: "<<name
        <<", DOB: "<<dob
        <<", Marks: "<<marks<<endl;
    }
};

bool sortRoll(const Stud &a , const Stud &b)
{
    return a.roll<b.roll;
}

bool sortDOB(const Stud &a , const Stud &b)
{
    return a.dob<b.dob;
}

bool sortMarks(const Stud &a , const Stud &b)
{
    return a.marks>b.marks;
}

int main()
{
    vector<Stud> students = 
    {
        {102,"Leuizack","2002-12-22",400},
        {101,"Abhishek","2003-01-03",450},
        {103,"Pranit","2008-04-12",500},
        {106,"Anuj","2004-06-22",450},
        {107,"Parth","2007-08-23",350},
        {105,"Jay","2005-12-17",400},
        {104,"Akshay","2001-09-02",500},
        {109,"Akash","1999-11-26",500},
        {108,"Devansh","2000-04-08",300},
        {110,"Harsh","2002-08-12",350},
    };

    sort(students.begin(),students.end(),sortRoll);
    cout<< "\nSorted by Roll No.: \n" << endl;
    for(const auto &s : students) s.display();

     sort(students.begin(),students.end(),sortMarks);
    cout<< "\nSorted by Marks: \n" << endl;
    for(const auto &s : students) s.display();

     sort(students.begin(),students.end(),sortDOB);
    cout<< "\nSorted by DOB: \n" << endl;

    for(const auto &s : students) s.display();

    return 0;
}