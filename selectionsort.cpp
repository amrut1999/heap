#include <iostream>
using namespace std;

struct Student { int roll; string name; float marks; };

int main() {
    Student s[10] = {
        {1,"Amit",78.5},{2,"Priya",89},{3,"Rohan",67.4},{4,"Sneha",92.2},
        {5,"Raj",56.9},{6,"Tina",81.3},{7,"Kiran",70},{8,"Meena",88.5},
        {9,"Vikas",60.7},{10,"Neha",95}
    };

    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<10;j++) if(s[j].marks<s[min].marks) min=j;
        swap(s[i],s[min]);
    }

    cout<<"Roll\tName\tMarks\n";
    for(int i=0;i<10;i++) cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].marks<<"\n";
}
