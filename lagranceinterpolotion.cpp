#include<bits/stdc++.h>
using namespace std;
#define  fin    freopen("input1.txt","r",stdin)
float x[100],y[100],result;
float lagrance(float v,int n){
	result = 0;
	int i,j;
	for(i=0;i<n;i++){
		float temp = 1;
		for(j=0;j<n;j++){
			if(i!=j)
				temp = temp*(v-x[j])/(x[i]-x[j]);
		}
		result += temp*y[i];
	}
}
int main(){
	fin;
	int n,i;
	float value;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> x[i] >>y[i];
	}
	cout <<"Enter the interpolation point : ";
	cin >> value;
	cout <<"Interpolated value : "<<lagrance(value,n)<<endl;
}
