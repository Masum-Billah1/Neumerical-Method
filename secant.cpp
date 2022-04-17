#include<bits/stdc++.h>
using namespace std;
class Secant{
	public:
		double a,b,c;
		double f(double x){
			return x*x*x+x*x-1;
		}
		double secant(double a,double b){
			double c;
			while(fabs(b-a)>0.00001){
				c = b-(b-a)/(f(b)-f(a))*f(b);
				a = b;
				b = c;
			}
			return c;
		}
};
int main(){
	Secant sc;
	srand(time(0));
	sc.a = rand()%500;
	sc.b = rand()%500;
	printf("Root is : %0.4lf\n",sc.secant(sc.a,sc.b));
}
