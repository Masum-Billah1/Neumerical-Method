#include<bits/stdc++.h>
using namespace std;
class regularfalsi{
	public:
		double a,b,c;
		double f(double x){
			return x*x*x+x*x-1;
		}
		double falsi(double a,double b){
			double c;
			c = (a*f(b)-b*f(a))/(f(b)-f(a));
			while(fabs(f(c))>0.000001){
				c = (a*f(b)-b*f(a))/(f(b)-f(a));
				if(f(a)*f(c)==0)
					break;
				if(f(a)*f(c)<0)
					b = c;
				else
					a = c;
			}
			return c;
		}
};

int main(){
	regularfalsi rf;
	srand(time(0));
	rf.a = -rand()%500;
	rf.b = rand()%500;
	printf("Root is : %0.4lf\n",rf.falsi(rf.a,rf.b));
}
