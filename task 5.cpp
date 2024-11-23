#include <iostream>
using namespace std;

int main() 
{
	float s1,s2,s3,avarage, sum;
	cout<<"Enter your maths marks: "<<s1;
	cin>>s1;
	cout<<"\nEnter your English marks: "<<s2;
	cin>>s2;
	cout<<"\nEnter your Pf marks: "<<s3;
	cin>>s3;
	sum=s1+s2+s3;
	avarage=sum/3;
  if (avarage >= 90) {
  cout<<"\nGrade A";
} else if (avarage >= 80) {
  cout<<"\nGrade B";
} else if (avarage >= 70) {
  cout<<"\nGrade C";
} else if (avarage >= 60) {
  cout<<"\nGrade D";
} else {
  cout<<"Grade F";
}

	return 0;
}

