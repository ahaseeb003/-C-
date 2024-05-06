#include<iostream>
#include<cstring>
using namespace std;
struct student{
	int reg_no;
	char name[20];
	char f_name[20];
	int grade;
};
int main(){
    student std;
    std.reg_no = 51124009  ;
    strcpy(std.name,"Haseeb");   
    strcpy(std.f_name,"Shakeel");
    std.grade = 10   ;
    student std2;
    std2.reg_no = 51124010   ;
    strcpy(std2.name,"Rahat");
    strcpy(std2.f_name,"Ali");
    std2.grade = 10   ;
    student std3;
    std3.reg_no = 51124011  ;
    strcpy(std3.name,"Bilal");
    strcpy(std3.f_name,"Sohail");
    std3.grade = 10   ;
    
    cout<<"Student name:\t"	<< std.name<<endl;
    cout<<"Roll no:\t"	<< std.reg_no<<endl;
    cout<<"Father  name:\t"	<< std.f_name<<endl;
    cout<<"Grade:\t"	<< std.grade<<endl;
    
    cout<<"Student name:\t"	<< std2.name<<endl;
    cout<<"Roll no:\t"	<< std2.reg_no<<endl;
    cout<<"Father  name:\t"	<< std2.f_name<<endl;
    cout<<"Grade:\t"	<< std2.grade<<endl;
    
    
    cout<<"Student name:\t"	<< std3.name<<endl;
    cout<<"Roll no:\t"	<< std3.reg_no<<endl;
    cout<<"Father  name:\t"	<< std3.f_name<<endl;
    cout<<"Grade:\t"	<< std3.grade<<endl;
    
    return 0;
}
