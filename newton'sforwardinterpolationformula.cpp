#include<bits/stdc++.h>
using namespace std;
#define  fin    freopen("input.txt","r",stdin)
int fact(int n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
float calc(float u,int n){
	for(int i=1;i<n;i++){
		u = u*(u-i);
	}
	return u;
}
int main(){
	fin;
	int n,i,j;
	//cout <<"Enter the value of n : ";
	cin >> n;
	float x[n],u,value,sum;
	for(i=0;i<n;i++)
		cin >> x[i];
	float y[n][n];
	for(i=0;i<n;i++){
		cin >> y[i][0];
	}
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
			y[i][j] = y[i+1][j-1]-y[i][j-1];
			
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%.4lf  ",y[i][j]);
		}
		cout << endl;
	}
	cin >> value;
	u = (value-x[0])/(x[1]-x[0]);
	sum = y[0][0];
	for(i=1;i<n;i++){
		sum = sum + calc(u,i)*y[0][i]/fact(i);
	}
	cout << "The value of "<< value <<" is : "<<sum<<endl;
}
