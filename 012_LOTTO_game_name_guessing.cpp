/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 5)
   LOTTO GAME
*/
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int rNum1, rNum2, rNum3, rNum4, rNum5, rNum6, num1, num2, num3, num4, num5, num6;  //same are the same numbers, rNum are the random numbers, num are the input numbers
	const int min_num=1, max_num=40;
	int sameNum=0 ;
	srand(time(0));
	rNum1 = rand()%40+1; 
	rNum2 = rand()%40+1; 
	rNum3 = rand()%40+1; 
	rNum4 = rand()%40+1; 
	rNum5 = rand()%40+1; 
	rNum6 = rand()%40+1;
	cout<<"\t LOTTO GAME \n"<<endl; 
	cout<<"Enter your first lottery number between 1 and 40 :";
	cin>>num1;
	cout<<"Enter your second lottery number between 1 and 40 :";
	cin>>num2;
	cout<<"Enter your third lottery number between 1 and 40 :";
	cin>>num3;
	cout<<"Enter your fourth lottery number between 1 and 40 :";
	cin>>num4;
	cout<<"Enter your fifth lottery number between 1 and 40 :";
	cin>>num5;
	cout<<"Enter your sixth lottery number between 1 and 40 :";
	cin>>num6;
	if(rNum1==rNum2 || rNum1==rNum3 || rNum1==rNum4 ||rNum1==rNum5 ||rNum1==rNum6 )	//changes the numbers into new number anytime the numbers are printed the same
	{
		rNum1=(rand()+1)%40+1;
	}
	if(rNum2==rNum3 || rNum2==rNum4 ||rNum2==rNum5 ||rNum2==rNum6)
	{
		rNum2=(rand()+2)%40+1;
	}
	if(rNum3==rNum4 ||rNum3==rNum5 ||rNum3==rNum6)
	{
		rNum3=(rand()+3)%40+1;
	}
	if(rNum4==rNum5 ||rNum4==rNum6)
	{
		rNum4=(rand()+4)%40+1;
	}
	if(rNum5==rNum6)
	{
		rNum5=(rand()+5)%40+1;
	}
	if( (num1<min_num || num1>max_num) || (num2<min_num || num2>max_num) || (num3<min_num || num3>max_num) || (num4<min_num || num4>max_num) || (num5<min_num || num5>max_num) || (num6<min_num || num6>max_num)) //minimum is 1 and maximun is 40
	{
		cout<<"INVALID ENTRY!"<<endl;
	}
	else
	{
		if(num1==num2 || num1==num3 || num1==num4 || num1==num5 || num1==num6 || num2==num3 || num2==num4 || num2==num5 || num2==num6 || num3==num4 || num3==num5 || num3==num6 || num4==num5 || num4==num6 || num5==num6)
		{
			cout<<"You can't enter the same numbers. \ngoodbye"<<endl;	
		}
		else
		{
			cout<<"The lottery numbers generated by computer are : "<<rNum1<<"  "<<rNum2<<"  "<<rNum3<<"  "<<rNum4<<"  "<<rNum5<<"  "<<rNum6<<endl;
			if(num1==rNum1 || num1==rNum2 || num1==rNum3 || num1==rNum4 || num1==rNum5 || num1==rNum6)
			{
				sameNum++;
			}
			if(num2==rNum1 || num2==rNum2 || num2==rNum3 || num2==rNum4 || num2==rNum5 || num2==rNum6)
			{
				sameNum++;
			}
			if(num3==rNum1 || num3==rNum2 || num3==rNum3 || num3==rNum4 || num3==rNum5 || num3==rNum6)
			{
				sameNum++;
			}
			if(num4==rNum1 || num4==rNum2 || num4==rNum3 || num4==rNum4 || num4==rNum5 || num4==rNum6)
			{
				sameNum++;
			}
			if(num5==rNum1 || num5==rNum2 || num5==rNum3 || num5==rNum4 || num5==rNum5 || num5==rNum6)
			{
				sameNum++;
			}
			if(num6==rNum1 || num6==rNum2 || num6==rNum3 || num6==rNum4 || num6==rNum5 || num6==rNum6)
			{
				sameNum++;
			}
			
			if(sameNum==0) //least same numbers between random and entered numbers
			{
				cout<<"Your lottery numbers don't match any number. Thanks for playing the lottery game"<<endl;
			}
			else if(sameNum==6) // max same numbers between random and entered numbers
			{
				cout<<"Congratulations!!! You won the jackpot!"<<endl;
			}
			else if(sameNum>0 && sameNum<6)
			{
				cout<<"you've won "<<sameNum<<" Stars :";
				if(num1==rNum1 || num2==rNum1 || num3==rNum1 || num4==rNum1 || num5==rNum1 || num6==rNum1)
				{
					cout<<rNum1<<" ";
				}
				if(num1==rNum2 || num2==rNum2 || num3==rNum2 || num4==rNum2 || num5==rNum2 || num6==rNum2)
				{
					cout<<rNum2<<" ";
				}
				if(num1==rNum3 || num2==rNum3 || num3==rNum3 || num4==rNum3 || num5==rNum3 || num6==rNum3)
				{
					cout<<rNum3<<" ";
				}
				if(num1==rNum4 || num2==rNum4 || num3==rNum4 || num4==rNum4 || num5==rNum4 || num6==rNum4)
				{
					cout<<rNum4<<" ";
				}
				if(num1==rNum5 || num2==rNum5 || num3==rNum5 || num4==rNum5 || num5==rNum5 || num6==rNum5)
				{
					cout<<rNum5<<" ";
				}
				if(num1==rNum6 || num2==rNum6 || num3==rNum6 || num4==rNum6 || num5==rNum6 || num6==rNum6)
				{
					cout<<rNum6<<" ";
				}
			}
		}
	}
return 0;
}
	 
