#line 2 "TaroString.cpp"
#include <bits/stdc++.h>
using namespace std;
class TaroString {
public:
	string getAnswer(string S) {
	    bool C, A, T;
	    C = A = T = false;
        for(int i =0, n = S.length(); i < n; ++i ) {
            if(S[i] == 'A') A = true;
            else if(S[i] == 'C') C = true;
            else if(S[i] == 'T') T = true;
        }
        if(A and C and T) return "Possible";
        else return "Impossible";
	}
};
// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cout << "Testing TaroString (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1396295102;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		TaroString _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string S = "XCYAZTX";
				_expected = "Possible";
				_received = _obj.getAnswer(S); break;
			}
			case 1:
			{
				string S = "CTA";
				_expected = "Impossible";
				_received = _obj.getAnswer(S); break;
			}
			case 2:
			{
				string S = "ACBBAT";
				_expected = "Impossible";
				_received = _obj.getAnswer(S); break;
			}
			case 3:
			{
				string S = "SGHDJHFIOPUFUHCHIOJBHAUINUIT";
				_expected = "Possible";
				_received = _obj.getAnswer(S); break;
			}
			case 4:
			{
				string S = "CCCATT";
				_expected = "Impossible";
				_received = _obj.getAnswer(S); break;
			}
			/*case 5:
			{
				string S = ;
				_expected = ;
				_received = _obj.getAnswer(S); break;
			}*/
			/*case 6:
			{
				string S = ;
				_expected = ;
				_received = _obj.getAnswer(S); break;
			}*/
			/*case 7:
			{
				string S = ;
				_expected = ;
				_received = _obj.getAnswer(S); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
