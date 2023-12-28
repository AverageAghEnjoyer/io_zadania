#include <iostream>

using namespace std;

class User {
public:
    string username;
    string password;

    User(string u, string p) {
        username = u;
        password = p;
    }

    User() {
        username = "";
        password = "";
    }
};

User users[10] = {
    User("kasia", "1234"),
    User("szymon", "1234"),
    User("julka", "1234")
};

bool usernameTaken(string username) {
    for (int i = 0; i < 3; i++) {
        if (users[i].username == username) return true;
    }
    return false;
}

string signup(string currentLogin, string currentPassword) {

    if (currentLogin == "") {
        return "Enter your login";
    }

    if (currentPassword == "") {
        return "Enter your password";
    }

    if (usernameTaken(currentLogin)) {
        return "Username is taken, try again";
    }

    users[3] = User(currentLogin, currentPassword);

    return "Success";
}

int main()
{
    string currentLogin = "";
    string currentPassword = "";

    cout << "enter login: ";
    cin >> currentLogin;
    cout << "enter password: ";
    cin >> currentPassword;

    string result = signup(currentLogin, currentPassword);
    while (result != "Success") {
        cout << result << endl;
        cout << "enter login: ";
        cin >> currentLogin;
        cout << "enter password: ";
        cin >> currentPassword;
        result = signup(currentLogin, currentPassword);
    };
    cout << "Success, new user has been added" << endl;

    return 0;
}