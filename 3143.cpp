#include<iostream>
#include<string>

using namespace std;

int check_subString(string A, string B) {
	int location = A.find(B);

	if (location == -1) {
		return 0;
	}
	else {
		return 1 + check_subString(A.substr(A.find(B) + B.length()), B);
	}
}

int main(int argc, char** argv) {
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case) {
        string A, B;
        cin >> A >> B;
        
		cout << "#" << test_case << " " << A.length() - ((B.length() - 1) * check_subString(A, B)) << endl;
	}
	return 0;
}