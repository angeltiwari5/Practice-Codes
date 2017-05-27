#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void triangle(vector<double> a) {
	if(a.size()<3||a.size()>3)
	{
		cout<<"Not a valid triangle";
	}
	else{
		if(a[0]+a[1]>=a[2]||a[1]+a[2]>=a[0]||a[0]+a[2]>=a[1])
		{
			cout<<"valid triangle";
			if(a[0]==a[1]&&a[1]==a[2])
			{
				cout<<"equilateral triangle";
			}
			else if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
			{
				cout<<"isosceels triangle";
			}
			else
				cout<<"scalene triangle";
		}
	}
	return ;

}

int main()
{
	vector<double>  v(3,0);
	for(int i =0;i<3;i++)
	{
		cin>>v[i];
	}
	 triangle(v);
	return 0;
}