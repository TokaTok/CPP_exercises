#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Info
{
private:
    string teamName;
    int points;
    int goalDiff;
    int scoredGoals;

public:
    void setTeamName(string otherTeamName)
    {
        this -> teamName = otherTeamName;
    }
    string getTeamName()
    {
        return this -> teamName;
    }

    void setPoints(int otherPoints)
    {
        this -> points = otherPoints;
    }
    int getPoints()
    {
        return this -> points;
    }

    void setGoalDiff(int otherGoalDiff)
    {
        this -> goalDiff = otherGoalDiff;
    }
    int getGoalDiff()
    {
        return this -> goalDiff;
    }

    void setScoredGoals(int otherScoredGoals)
    {
        this -> scoredGoals = otherScoredGoals;
    }
    int getScoredGoals()
    {
        return this -> scoredGoals;
    }

    //constructor
    Info(string newTeamName, int newPoints, int newGoalDiff, int newScoredGoals)
    {
        this -> teamName = newTeamName;
        this -> points = newPoints;
        this -> goalDiff = newGoalDiff;
        this -> scoredGoals = newScoredGoals;
    }

    void printData()
    {
        cout << endl << endl << "*****************************" << endl;
        cout << "Team name: " << this -> teamName << endl;
        cout << "Points: " << this -> points << endl;
        cout << "Goal difference: " << this -> goalDiff << endl;
        cout << "Scored goals: " << this -> scoredGoals << endl;
        cout << "*****************************" << endl;
    }

    //Destructor
    ~Info()
    {

    }

};

//our function right here
int IndexOf(string& s, char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c) return i;
    }
    return -1;
}

int IndexOf(vector<Info>& vec, string& searchName)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i].getTeamName() == searchName) return i;
    }
    return -1;
}

//output vector content
void output(vector<Info>& vec){
   for(Info it : vec)
      it.printData();
}

// comperators

bool customCompare(Info& obj1, Info& obj2){

      if(obj1.getPoints() != obj2.getPoints())
            return obj1.getPoints() > obj2.getPoints();

      if(obj1.getGoalDiff() != obj2.getGoalDiff())
          return obj1.getGoalDiff() > obj2.getGoalDiff();

      return obj1.getScoredGoals() > obj2.getScoredGoals();

}

/*
   s1 = "abcfgssj";
   s2 = "abcfrryjjjjj"
*/
bool compareByName(Info& obj1, Info& obj2){

   string s1= obj1.getTeamName();
   string s2= obj2.getTeamName();

   int s1Len = s1.length();
   int s2Len = s2.length();
   int minLen = (s1Len < s2Len)? s1Len : s2Len;

   for(int i = 0; i < minLen; i++){
      if(s1[i] != s2[i])
        return s1[i] < s2[i];
   }

   return s1Len < s2Len;
}

int main()
{
    int n;
    cin >> n;

    vector <Info> cont;

    for (int i = 0; i < n; i++)
    {
        string newTeamName;
        cin >> newTeamName;

        Info obj(newTeamName, 0, 0, 0);
        cont.push_back(obj);
    }

    cin >> ws; //stream out whitespace

    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        string s;
        getline(cin, s);

        int dashIndex = IndexOf(s, '-');
        int spaceIndex = IndexOf(s, ' ');
        int colonIndex = IndexOf(s, ':');

        string team1Name = s.substr(0, dashIndex);
        string team2Name = s.substr(dashIndex + 1, spaceIndex - dashIndex - 1);
        int goal1 = stoi(s.substr(spaceIndex + 1, colonIndex - spaceIndex - 1));
        int goal2 = stoi(s.substr(colonIndex + 1));

        int team1Index = IndexOf(cont, team1Name);
        int team2Index = IndexOf(cont, team2Name);

        //update points
        int oldTeam1Points = cont[team1Index].getPoints();
        int oldTeam2Points = cont[team2Index].getPoints();
        if (goal1 > goal2)
            cont[team1Index].setPoints(oldTeam1Points + 3);
        else if (goal1 < goal2)
            cont[team2Index].setPoints(oldTeam2Points + 3);
        else
        {
            cont[team1Index].setPoints(oldTeam1Points + 1);
            cont[team2Index].setPoints(oldTeam2Points + 1);
        }

        //update goal difference
        int oldTeam1GoalDiff = cont[team1Index].getGoalDiff();
        int oldTeam2GoalDiff = cont[team2Index].getGoalDiff();

        cont[team1Index].setGoalDiff(oldTeam1GoalDiff + (goal1 - goal2));
        cont[team2Index].setGoalDiff(oldTeam2GoalDiff + (goal2 - goal1));

        //update scored goals
        int oldTeam1ScoredGoals = cont[team1Index].getScoredGoals();
        int oldTeam2ScoredGoals = cont[team2Index].getScoredGoals();

        cont[team1Index].setScoredGoals(oldTeam1ScoredGoals + goal1);
        cont[team2Index].setScoredGoals(oldTeam2ScoredGoals + goal2);

    }

    //
    /*
    cout << "before: " << endl;
    output(cont);
    */

    sort(cont.begin(), cont.end(), customCompare);
    /*
    cout << endl << "after: " << endl;
     output(cont);
     */
     // delete the second half of our vector
     cont.erase(cont.begin() + n/2, cont.end());

     /*
     cout << "after erase:" << endl;
     output(cont);
     */
     //sort teamName lexicographicaly
     sort(cont.begin(), cont.end(), compareByName);

     //output answer
     for(Info it : cont)
        cout << it.getTeamName() << endl;

    return 0;
}


/*
            0123456789..........
string s = "Barcelona-Real 15:10"
--------------------------------------------------

4
A
B
C
D
A-B 1:1
A-C 2:2
A-D 1:0
B-C 1:0
B-D 0:3
C-D 0:3


points            goalDifference                           scoredGoals
A=>1+1+3 = 5      A=>(1+2+1) - (1+2+0) = 4 - 3 = 1         A=> 4
B=>1+3+0 = 4      B=>(1+1+0) - (1+0+3) = 2 - 4 = -2        B=> 2
C=>1+0+0 = 1      C=>(2+0+0) - (2+1+3) = 2 - 6 = -4        C=> 2
D=> 0+3+3 =6      D=>(0+3+3) - (1+0+0) = 6 - 1 = 5         D=> 6


      0               1               2             3
|teamName: "A" |teamName: "B" |teamName: "C" |teamName: "D" |
|points: 5     |points: 4     |points: 1     |points: 6     |
|goalDiff: 1   |goalDiff: -2  |goalDiff: -4  |goalDiff: 5   |
|scoredGoals: 4|scoredGoals: 2|scoredGoals: 2|scoredGoals: 6|


D      D
A      A
B  =>
C

*/
