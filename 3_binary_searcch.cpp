#include <iostream>
using namespace std;

int main()
{
	int nums[]={1,2,3,4,5,6,7,8,9,0};
	//int count, i, arr[30];
	//int num;
	int num, first, last, middle;
	//cout<<"how many elements would you like to enter?:"; 
    //cin>>count;

	/*for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>arr[i];
	}*/
	cout<<"Enter the number that you want to search:"; 
  	cin>>num;
	first = 0;
	int size = sizeof(nums)/sizeof(nums[0]);
	last = size-1;
	middle = (first+last)/2;
	cout << middle << endl << size << endl;
	while (first <= last){
	   if(nums[middle] < num)
	   {
		first = middle + 1;

	   }else if(nums[middle] == num){
		cout<<num<<" found in the array at the location "<<middle+1<<"\n"; 
                break; 
        }else { 
                last = middle - 1; 
        } 
           middle = (first + last)/2;
           cout << "last = " << last << endl;
		   cout << "middle = "  << middle << endl;	 
    } 
    if(first > last){
	   cout<<num<<" not found in the array";
	}
	return 0;
}
