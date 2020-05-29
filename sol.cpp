// Using C++ by: jasonpogi
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int s, e, res = 0;
	cin >> s >> e;
	double temp = 0, ans = 0;
	for(int i = s; i <= e; i++){
		temp = s%100;
		ans = (-1+temp+(ceil(temp/4)));
		res = (double)round(ans);
		res %= 7;
		cout << "The first day of January " << s << " falls on a ";
		if(res == 0) cout << "Sunday";
		else if(res == 1) cout << "Monday";
		else if(res == 2) cout << "Tuesday";
		else if(res == 3) cout << "Wednesday";
		else if(res == 4) cout << "Thursday";
		else if(res == 5) cout << "Friday";
		else if(res == 6) cout << "Saturday";
		cout << "\n";
		s++;
	}
	return 0;
}
