#include <iostream>
#include <vector>

using namespace std;



int IndexOf(vector<string> cont, string search_user){
    for (int i = 0; i < cont.size(); i++)
    {
        if (cont [i] == search_user) return i;
    }

    return -1;


}

int IndexOf(string s, char item){
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == item) return i;
    }

    return -1;
}



int main()
{
    string s;
    int ans = 0;
    vector<string> users;

    while (getline(cin, s))
    {
        switch(s[0])
        {
        case '+':
        {
            /*
              s = "+mike"
            */
            users.push_back(s.substr(1));
            break;
        }
        case '-':
            {
                int ind = IndexOf(users, s.substr(1));
                users.erase(users.begin() + ind);
                break;
            }
            default : {
                /*
                    0123456789
               s = "mike:hello"

                */
                int colon_index = IndexOf(s, ':');
                string message = s.substr(colon_index + 1);
                ans += message.length() * users.size();

                break;
            }
        }
    }
    cout << ans;
    return 0;
}
