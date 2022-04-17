#include<bits/stdc++.h>
using namespace std;

class newtonraphson{
	public:
		double a,c;
		double func(double x){
			return x*x*x+x*x-1;
		}
		double derivefunc(double x){
			return 3*x*x+2*x;
		}
};
int main(){
	newtonraphson nr;
	cout <<"Please,Enter a root : ";
	srand(time(0));
	nr.a = rand()%500;
	nr.c = nr.func(nr.a)/nr.derivefunc(nr.a);
	while(abs(nr.c)>=0.001){
		nr.c = nr.func(nr.a)/nr.derivefunc(nr.a);
		nr.a = nr.a - nr.c;
	}
	
	cout << "Root is : "<<nr.a << endl;
}
