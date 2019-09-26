#include <iostream>
using namespace std;

//I did not want to use the header, but I had to use this function...
inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	exit(1);
}

int main()
{
	string first_name;
	string friend_name;
	char friend_sex = '0';
	int age;
	int age_switch;

	system("clear");
	cout << "///Enter the name of the person you want to write to...///\n";
	cin >> first_name;
	system("clear");
	cout << "Dear " << first_name <<",\n\n";
	cout << "How are you? I haven't heard about you for ages...\n\n";

	cout << "///Enter your other friend's name...///\n";
	cin >> friend_name;
	system("clear");
	cout << "Have you seen " << friend_name << " lately?\n\n";

	cout << "///Is " << friend_name << " a male (m) or female(f)?///\n";
	cin >> friend_sex;
	system("clear");

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me\n\n";
	}

	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me\n\n";
	}

	cout << "///Enter the age///\n";
	cin >> age;
	system("clear");
	cout << "I hear you just had a birthday, and you are " << age << " years old.\n";

	if (age < 0 || age == 0 || age == 110 || age > 110)
	{
		simple_error("You're kidding!!!\n");
	}

	if (age == 17)
	{
		age_switch = 1;
	}

	if (age < 12)
	{
		age_switch = 2;
	}

	if (age > 70)
	{
		age_switch = 3;
	}

	switch (age_switch)
	{
		case 1: cout << "Next year you wull be able to vote.\n"; break;
		case 2: cout << "Next year you will be " << age+1 << ".\n"; break;
		case 3: cout << "I hope you are enjoying retirement.\n"; break;
	}

	cout << "Yours sincerely,\n\n\nTibi\n\n";

}
