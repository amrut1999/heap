#include <iostream>
using namespace std;

struct Student { int roll; string name; float marks; };

int main() {
    Student s[10] = {
        {1,"Amit",78.5},{2,"Priya",89.0},{3,"Rohan",67.4},{4,"Sneha",92.2},
        {5,"Raj",56.9},{6,"Tina",81.3},{7,"Kiran",70.0},{8,"Meena",88.5},
        {9,"Vikas",60.7},{10,"Neha",95.0}
    };

    // Bubble Sort by marks
    for(int i=0;i<9;i++)
        for(int j=0;j<9-i;j++)
            if(s[j].marks>s[j+1].marks) swap(s[j],s[j+1]);

    // Display
    cout<<"Roll\tName\tMarks\n";
    for(int i=0;i<10;i++)
        cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].marks<<"\n";
}
