#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Cricket {
private:
    int n;
    string team[11] = {"Player1", "Player2", "Player3", "Player4", "Player5", "Player6", "Player7", "Player8", "Player9", "Player10", "Player11"};
    int runs[11] = {0};
    int currentPlayerIndex = 0;
public:
    Cricket(int n) {
        this->n = n;
    }

    void line() {
        for (int i = 0; i <120; i++) {
            cout << "-";
        }
        cout << endl;
    }

    int team01 = 1;
    int team02 = 2;

    int toss() {
        if (n % 2 == 0) {
            return team01;
        } else {
            return team02;
        }
    }

    void playerRun() {
        for(int i=0;i<=11;i++)
        {
            cout<<" Team "<<team[i]<<" Run = "<<runs[i]<<endl;
        }
    }

    //void beforeBreak(){
        //for (int a = 1; a <= 6; a++) { //for ball
           // for (int i = 1; i <= 5; i++) { //for over
              //  int run = rand() % 6;
              //  if (run == 5) {
               //     run = 4;
                //}
               // cout <<"Over "<<i<<" Ball "<<a<<" Run = " << run << "   ";
           // }
           // cout << endl;
       // }
    //}

     int runInOneOver() {
        int totalRun = 0;
        for (int a = 1; a <= 10; a++) { // for over
                cout<< "\nOver " << a<<endl;
                int overRun = 0;
            //int count = 0;
            for (int i = 1; i <= 6; i++) { // for ball
                    int run = rand() % 6;
                if (run == 5) {
                    run = 4;
                }
                if(run==0){
                    cout<<"  --- OUT ---  ";
                    currentPlayerIndex++;
                    if(currentPlayerIndex>=11){
                        cout<< "All players are out!" << endl;
                        return totalRun;
                    }
                }else{
                    runs[currentPlayerIndex] += run;
                    overRun += run;
                    cout << " Ball " << i << " Run = " << run << "   " << team[currentPlayerIndex] << " Total = " << runs[currentPlayerIndex] << endl;
                }
            }
            totalRun += overRun;
            cout << "\nTotal runs in " << a <<" Over "<< " = " << overRun << endl;
        }
        return totalRun;
    }

    void firstInning(int team){
        cout<<" Team "<<team<<" is Batting "<<endl;
        int totalRun = runInOneOver();
        line();
        cout<<"Total Run in first Inning is = "<<totalRun<<endl;
    }

    void secondInning(int team , int target){
        cout<<" Team "<<team<<" is Batting "<<endl;
        int totalRun = 0;
        currentPlayerIndex = 0;
        for(int i=0;i<11;i++){
            runs[i] = 0;
        }
        totalRun = runInOneOver();
        line();
        cout << "Total Run in second Inning is = " << totalRun << endl;
        if (totalRun > target) {
            cout << "Team " << team << " wins the match!" << endl;
        } else {
            cout << "Team " << team << " loses the match!" << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    Cricket obj(n);
    obj.line();
    int result = obj.toss();
    cout << "Toss : Team " << result << " wins!" << endl;
    obj.line();
    //obj.runInOneOver();
    //obj.line();
    obj.firstInning(result);
    obj.line();
    obj.playerRun();
    obj.line();
    int target = 0;
    if (result == obj.team01) {
        target = obj.runInOneOver();
        obj.secondInning(obj.team02, target);
    } else {
        target = obj.runInOneOver();
        obj.secondInning(obj.team01, target);
    }

    obj.line();
    obj.playerRun();

    return 0;
}
