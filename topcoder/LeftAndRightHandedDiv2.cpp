#include <bits/stdc++.h>

using namespace std;

struct LeftAndRightHandedDiv2 {
	public:
	int count(string S) {
	    int ret = 0;
	    bool flag = false;
        for(int i = 0, n = S.length(); i < n; ++i) {
            if(S[i] == 'R') flag = true;
            if(S[i] == 'L') {
                if(flag) ++ret;
                flag = false;
            }
        }
        return ret;
	}
};

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cout << "Testing LeftAndRightHandedDiv2 (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1396226092;
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
		LeftAndRightHandedDiv2 _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string S = "L";
				_expected = 0;
				_received = _obj.count(S); break;
			}
			case 1:
			{
				string S = "RRR";
				_expected = 0;
				_received = _obj.count(S); break;
			}
			case 2:
			{
				string S = "LRLRLR";
				_expected = 2;
				_received = _obj.count(S); break;
			}
			case 3:
			{
				string S = "LLLRRR";
				_expected = 0;
				_received = _obj.count(S); break;
			}
			case 4:
			{
				string S = "RLRLRL";
				_expected = 3;
				_received = _obj.count(S); break;
			}
			/*case 5:
			{
				string S = ;
				_expected = ;
				_received = _obj.count(S); break;
			}*/
			/*case 6:
			{
				string S = ;
				_expected = ;
				_received = _obj.count(S); break;
			}*/
			/*case 7:
			{
				string S = ;
				_expected = ;
				_received = _obj.count(S); break;
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
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

