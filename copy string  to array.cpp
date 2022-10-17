// CPP program for the above approach
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

// Driver Code
int main()
{
	char* char_arr;
	string str_obj("GeeksForGeeks");
	char_arr = &str_obj[0];
	cout << char_arr;
	return 0;
}
