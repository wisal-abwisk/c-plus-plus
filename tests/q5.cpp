/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 4)
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int rNum1, rNum2, rNum3, rNum4, rNum5, rNum6, num1, num2, num3, num4, num5, num6;
	int min_num, max_num
	cout<<"\t LOTTO GAME \n"<<endl;
	rNum1 = rand(); 
	rNum2 = rand(); 
	rNum3 = rand(); 
	rNum4 = rand(); 
	rNum5 = rand(); 
	rNum6 = rand(); 
	cout<<"Enter your 6  lottery numbers between 1 and 40 (press enter after every number) :";
	cin>>num1>>num2>>num3>>num4>>num4>>num5>>num6;
	if( ((num1>min_num && num1<max_num) ||(num2>min_num && num2<max_num) || (num3>min_num && num3<max_num) || (num4>min_num && num4<max_num) || (num5>min_num && num5<max_num) || (num6>min_num && num6<max_num) )&& (num1!=num2 || num1!=num3 || num1!=num4 || num1!=num5 || num5!=num6 || num2!=num3 || num2!=num4 || num2!=num5 || num2!=num6 || num3!=num4 || num3!=num5 || num3!=num6 || num4!=num5 || num4!=num6 || num5!=num6 || num1!=num1 || num2!=num2 || num3!=num3 || num4!=num4 || num5!=num5 || num6!=num6) )
	{
		cout<<"The lottery numbers generated by computer are : "<<rNum1<<"  "<<rNum2<<"  "<<rNum3<<"  "<<rNum4<<"  "<<rNum5<<"  "<<rNum6;
		if(num1==rnum1 || num1==rnum2 || num1==rnum3 || num1==rnum4 || num1==rnum || num2!=num3 || num2!=num4 || num2!=num5 || num2!=num6 || num3!=num4 || num3!=num5 || num3!=num6 || num4!=num5 || num4!=num6 || num5!=num6 || num1!=num1 || num2!=num2 || num3!=num3 || num4!=num4 || num5!=num5 || num6!=num6)
		{
			num1++;
		}
	}
	else
	{
		cout<<"Your Numbers are not within range"<<endl;
	} 
