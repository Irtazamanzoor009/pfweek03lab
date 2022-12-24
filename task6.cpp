#include<iostream>
using namespace std;
int main()
{
float matric_marks;
float inter_marks;
float ecat_marks;
string name;

cout<<"Enter your name: ";
cin>>name;

cout<<"Enter Matric marks: ";
cin>>matric_marks;

cout<<"Enter Inter marks: ";
cin>>inter_marks;

cout<<"Enter Ecat marks: ";
cin>>ecat_marks;

cout<<endl;

float percentage_matric = (matric_marks*100)/1100;
float weightage_matric = percentage_matric * 0.1;
cout<<"Weightage of matric marks: "<<weightage_matric<<endl;

float percentage_inter = (inter_marks*100)/550;
float weightage_inter = percentage_inter * 0.4;
cout<<"Weightage of inter marks: "<<weightage_inter<<endl;

float percentage_ecat = (ecat_marks*100)/400;
float weightage_ecat = percentage_ecat * 0.5;
cout<<"Weightage of ecat marks: "<<weightage_ecat<<endl;

cout<<endl;

float Total_aggregate = weightage_matric + weightage_inter + weightage_ecat;
cout<<"Your total aggregate is: "<<Total_aggregate<<endl;

return 0;
}
