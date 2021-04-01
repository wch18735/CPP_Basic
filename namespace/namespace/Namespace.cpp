#include <iostream>

// use specific namespace (not using namespace std;)
using std::string;
using std::cout;

// declare namespace example
namespace ns1
{
	int age = 26;
	string name = "John";
}

namespace ns2
{
	int age = 25;
	string name = "David";
}

int main(int argc, char* argv[])
{
	cout << ns1::name << ' ' << ns1::age << '\n';
	cout << ns2::name << ' ' << ns2::age << '\n';

	return 0;
}