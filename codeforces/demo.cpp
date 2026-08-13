#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Bisection 
/*inline double f(double x) {
    return x*x*x-2*x*x-5;
}

double solve(double a, double b, double tolerance) {
    double m{0.0};
    if(f(a)*f(b)>0) {
        cout << "invalid interval\n";
        return -1;
    }
    if(f(a) == 0) return a;
    if(f(b) == 0) return b;

    while((b-a)/2.0>tolerance) {
        m = (a+b)/2.0;
        if(f(m)==0) break;
        else if(f(a)*f(m)<0) b=m;
        else a=m;
    }
    return (a+b)/2.0;
}

int32_t main() {
    double a{0.0};
    double b{3.0};
    double tolerance{1e-4};
    double root{solve(a,b,tolerance)};
    cout << fixed << setprecision(4) << root << "\n";
    return 0;
}*/

//Regula falsi
/*inline double f(double x) {
    return x*x-2;
}
double solve(double a, double b, double tolerance) {
    double m{0.0};
    if(f(a)*f(b)>0) {
        cout<<"invalid interval\n";
        return -1;
    }
    if(f(a)==0) return a;
    if(f(b)==0) return b;
    do{
        m=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(m)==0) break;
        else if(f(a)*f(m)<0) b=m;
        else a=m;
    }while(fabs(f(m))>tolerance);
    return m;
}
int main() {
    double a{0.0};
    double b{2.0};
    double tolerance{1e-6};

    double root{solve(a,b,tolerance)};

    cout<<fixed<<setprecision(6)<<root<<"\n";

    return 0;
}*/

//Secant
/*inline double f(double x) {
    return x*x-2;
}
double solve(double x0, double x1, double tolerance) {
    double f0{f(x0)}, f1{f(x1)};
    double x2{x1};
    while(fabs(x1-x0)>tolerance) {
        x2=x1-f1*(x1-x0)/(f1-f0);
        x0=x1;f0=f1;
        x1=x2;f1=f(x1);
    }
    return x1;
}
int main() {
    double x0{0.0};
    double x1{2.0};
    double tolerance{1e-6};\
    double root{solve(x0, x1, tolerance)};
    cout<<fixed<<setprecision(6)<<root<<"\n";
    return 0;
}*/

//Newton raphson
/*inline double f(double x) {
    return x*x-2;
}
inline double fprime(double x) {
    return 2*x;
}
double solve(double x0, double tolerance) {
    double x1{x0};
    do{
        x0=x1;
        x1=x0-f(x0)/fprime(x0);
    }while(fabs(x1-x0)>tolerance);
    return x1;
}
int main() {
    double x0{1.0};
    double tolerance{1e-6};
    double root{solve(x0, tolerance)};
    cout <<fixed<<setprecision(6)<<root<<"\n";
    return 0;
}*/
