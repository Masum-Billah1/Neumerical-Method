#define  fin    freopen("input2.txt","r",stdin)
#include<bits/stdc++.h>
using namespace std;
float x[100],y[100][100];
float divided(float value,int n){
	float sum = y[0][0];
	for(int i=1;i<n;i++){
		float temp = 1;
		for(int j=0;j<i;j++){
			temp = temp*(value-x[j]);
		}
		temp*=y[0][i];
		sum+=temp;
	}
	return sum;
}
int main(){
	fin;
	int n,i,j;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> x[i];
	for(i=0;i<n;i++)
		cin >> y[i][0];
		
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			y[i][j] = (y[i+1][j-1]-y[i][j-1])/(x[j+i]-x[i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%.5lf  ",y[i][j]);
		}
		cout << endl;
	}
	float value;
	cin >> value;
	cout <<"The value is : "<<divided(value,n)<<endl;
}
