#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double x[4],y[4];

double dis (double xa,double ya,double xb,double yb) {
	return sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
}

double f (double X) {
	double xa=x[0],ya=y[0],xb=x[2],yb=y[2],za=0,zb=0;
	za=X/dis(x[0],y[0],x[1],y[1]);
	zb=X/dis(x[2],y[2],x[3],y[3]);
	xa+=(x[1]-x[0])*za, ya+=(y[1]-y[0])*za,
	xb+=(x[3]-x[2])*zb, yb+=(y[3]-y[2])*zb;
	return dis(xa,ya,xb,yb);
}

double ff (double X) {
	double xb=x[2],yb=y[2],zb=0;
	zb=X/dis(x[2],y[2],x[3],y[3]);
	xb+=(x[3]-x[2])*zb,yb+=(y[3]-y[2])*zb;
	return dis(x[1],y[1],xb,yb);
}

void ac() 
{
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    
    if (dis(x[0],y[0],x[1],y[1]) > dis(x[2],y[2],x[3],y[3])) {
        swap(x[0],x[2]); swap(y[0],y[2]);
        swap(x[1],x[3]); swap(y[1],y[3]);
    }
       
    double l = 0, r = dis(x[0],y[0],x[1],y[1]);
    for (int i = 1; i <= 60; i++) {
        double M1 = l + (r-l) / 3, M2 = l + (r-l) / 3 * 2;
        if (f(M1) <= f(M2)) r = M2;
        else l = M1;
    }

    double ans = f(l);
    l = dis(x[0],y[0],x[1],y[1]), r = dis(x[2],y[2],x[3],y[3]);
    for (int i = 1;i <= 60; i++) {
        double M1 = l+(r-l)/3, M2 = l+(r-l)/3*2;
        if (ff(M1) <= ff(M2)) r = M2;
        else l = M1;
    }
    ans = min(ans, ff(l));
    cout << ans << '\n';
    return;
}
int main () 
{
    ios::sync_with_stdio(false), cin.tie(0);
    cout << fixed << setprecision(15);
	int t = 1; cin >> t; 
	while (t--) ac();
	return 0;
}