#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char* argv[]){
	if(argc!=2){
		cout << "Number of arguments is wrong" << endl;
		return -1;
	}
	ifstream in;
	in.open(argv[1]);
	if(!in.is_open()){
		cout << "Can't open the file" << endl;
		return -1;
	}
	string our_str, S, S1;
	getline(in, our_str);
	cout << "Enter string S" << endl;
	cin >> S;
	cout << "Enter string S1" << endl;
	cin >> S1;
	while(our_str.find(S) != string::npos)
		our_str.replace(our_str.find(S), S.size(), S1);
	cout << our_str << endl;
	in.close();
	return 0;
}
