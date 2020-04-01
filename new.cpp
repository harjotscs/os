#include<iostream>
#include <iomanip> 
using namespace std;

int main() 
{
	
	int i, smallest, count = 0, time, limit;
	double wait_time = 0, turnaround_time = 0, end;
	int at[20], bt[20], temp[20];
	double average_waiting_time, average_turnaround_time;
	cout<<"\nPlease Enter The Total Number Of Processes:\t";
	cin>>limit;
	cout<<"\nPlease Enter Details Of "<<limit<<" Processes\n";
	for(i = 0; i < limit; i++)
 	{
		cout<<"\nPlease Enter Arrival Time:\t";
		cin>>at[i];
		cout<<"Please Enter Burst Time:\t";
		cin>>bt[i];
		temp[i] = bt[i];
	}
  	bt[9] = 100000;  
 	for(time = 0; count != limit; time++)
 	{
   		smallest = 9;
  		for(i = 0; i < limit; i++)
  		{
   			if(at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0)
			{
   				smallest = i;
			}
  		}
  		bt[smallest]--;
  		if(bt[smallest] == 0)
  		{
   			count++;
   			end = time + 1;
   			wait_time = wait_time + end - at[smallest] - temp[smallest];
   			turnaround_time = turnaround_time + end - at[smallest];
  		}
 	}
	average_waiting_time = wait_time / limit; 
	average_turnaround_time = turnaround_time / limit;
	cout<<"\nAs Per Your Entered Values Average Waiting Time:\t "<<fixed<<average_waiting_time;
	cout<<"\nAs Per Your Entered Values Average Turnaround Time:\t"<<fixed<<average_turnaround_time;
    }

