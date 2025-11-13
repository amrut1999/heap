#include<iostream>

using namespace std;
struct student{
    int r;
    string n;
    float m;
};
int main(){
    student s[10]={
        {1,"priya",89.9},{2,"sunil",56.7},{3,"amit",78},
        {4,"raghav",90.45},{5,"megha",70},{6,"neha",93.6},
        {7,"kiran",85.9},{8,"meena",45.89},{9,"raj",88},
        {10,"rohan",95.0}
    };
    for(int i=0;i<10;i++){
        cout<<"\t"<<s[i].r<<"\t"<<s[i].n<<"\t"<<s[i].m<<"\n";
    }
int k;
cout<<"enter roll no:";
cin>>k;
for(int i=0;i<10;i++){
    if(s[i].r=k){
        cout<<s[i].r<<" "<<s[i].n<<" "<<s[i].m;
        return 0;
    }
    else{
        cout<<"not found";
    }
}
}