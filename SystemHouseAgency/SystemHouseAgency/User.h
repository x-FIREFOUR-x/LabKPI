#include <string>
using namespace std;
class User
{
	string name;
	string phoneNumber;
	string password;
	bool inSystem;
	int id;
public:
	static int count;

public:
	User();
	void signIn();
	void signUp();
	void getInfo();
	void setInfo();
	
};

