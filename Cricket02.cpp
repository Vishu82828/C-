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
        for (int i = 0; i < 120; i++) {
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
        for (int i = 0; i < 11; i++) {
            cout << team[i] << " : " << runs[i] << endl;
        }
    }

    int runInOneOver() {
        int totalRun = 0;
        for (int over = 1; over <= 10; over++) { // for over
            cout << "\nOver " << over << endl;
            int overRun = 0;
            for (int ball = 1; ball <= 6; ball++) { // for ball
                int run = rand() % 6;
                if (run == 5) {
                    run = 4;
                }
                if (run == 0) {
                    cout << " Ball " << ball << " Run = " << run << " --- OUT --- " << endl;
                    currentPlayerIndex++;
                    if (currentPlayerIndex >= 11) {
                        cout << "All players are out!" << endl;
                        return totalRun;
                    }
                } else {
                    runs[currentPlayerIndex] += run;
                    overRun += run;
                    cout << " Ball " << ball << " Run = " << run << "   " << team[currentPlayerIndex] << " Total = " << runs[currentPlayerIndex] << endl;
                }
            }
            totalRun += overRun;
            cout << "Total runs in Over " << over << " = " << overRun << endl;
        }
        return totalRun;
    }

    void firstInning(int team) {
        cout << " Team " << team << " is Batting " << endl;
        int totalRun = runInOneOver();
        line();
        cout << "Total Run in first Inning is = " << totalRun << endl;
    }

    void secondInning(int team, int target) {
        cout << " Team " << team << " is Batting " << endl;
        int totalRun = 0;
        currentPlayerIndex = 0; // Reset player index for second inning
        for (int i = 0; i < 11; i++) {
            runs[i] = 0; // Reset runs for each player
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

    void manOfTheMatch() {
        int highestRuns = 0;
        string bestPlayer;
        for (int i = 0; i < 11; i++) {
            if (runs[i] > highestRuns) {
                highestRuns = runs[i];
                bestPlayer = team[i];
            }
        }
        cout << "Man of the Match: " << bestPlayer << " with " << highestRuns << " runs." << endl;
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
    obj.line();
    obj.manOfTheMatch();
    obj.line();

    return 0;
}
