#include<bits/stdc++.h>
using namespace std;
class Bisection{
	public:
		double a,b,c;
		double f(double x){
			return x*x*x+x*x-1;
		}
		double bisection(double a,double b){
			if(f(a)*f(b)>=0){
				cout <<"Interval is wrong"<<endl;
				return 0;
			}
			while((b-a)>=0.00001){
				c = (a+b)/2;
				if(f(a)*f(c) == 0)
					break;
				else if(f(a)*f(c)<0)
					b = c;
				else if(f(a)*f(c)>0)
					a = c;
			}
		return c;
	}	
};
int main(){
	Bisection bi;
	srand(time(0));
	bi.a = -rand()%500;
	bi.b = rand()%500;
	printf("%0.4lf\n",bi.bisection(bi.a,bi.b));
}
