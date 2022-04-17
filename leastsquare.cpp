#include<bits/stdc++.h>
using namespace std;
float x[10],y[10];
double listsquare(int n){
	float sx=0,sy=0,sxy=0,sx2=0,a,b;
	int i;
	for(i=0;i<n;i++){
		sx+=x[i];
		sy+=y[i];
		sxy+=x[i]*y[i];
		sx2+=x[i]*x[i];
	}
	b = (n*sxy-sx*sy)/(n*sx2-sx*sx);
	a = (sy-a*sx)/n;
	cout <<"a : "<<a<<endl;
	cout <<"b : "<<b<<endl;
}
int main(){
	int n,i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> x[i];
	for(i=0;i<n;i++)
		cin >> y[i];
	listsquare(n);
}
