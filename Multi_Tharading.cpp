// Multi-tharading = threads are sub-sequence of process.
#include<iostream>
#include<Thread>
using namespace std;
void a()
{
    int n = 2;
    for(int i=0;i<10;i++){
            this_thread::sleep_for(1000ms);
        cout<<n<<" * "<<i<<" "<<n*i<<endl;
    }
}
void b()
{
    int n = 3;
    for(int i=0;i<10;i++){
            this_thread::sleep_for(1000ms);
        cout<<n<<" * "<<i<<" "<<n*i<<endl;
    }
}
void c()
{
    int n = 4;
    for(int i=0;i<10;i++){
            this_thread::sleep_for(1000ms);
        cout<<n<<" * "<<i<<" "<<n*i<<endl;
    }
}
void d()
{
    int n = 5;
    for(int i=0;i<10;i++){
            this_thread::sleep_for(1000ms);
        cout<<n<<" * "<<i<<" "<<n*i<<endl;
    }
}
int main()
{
    thread t1(a);
    thread t2(b);
    thread t3(c);
    thread t4(d);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
}
