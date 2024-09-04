// set and get is user define method to set or get the privet data member.
// gross = bs 50k + ta 15% + da 35% + hra 30% - pf 12.5%
// - tax if more than 1,20,000 then cut 30%, if more than 1,00,000 then cut 20%, if more than 85,000 then cut 10%, less than 85,000 then 0% tax.
#include <iostream>
using namespace std;
class employee{
    private:
     int sal;
    public:
    void setter(int s)
    {
        sal = s;
    }
    void getter()
    {
        cout<<"sal is "<<sal<<endl;
    }

};
int main()
{
    employee emp;
    emp.setter(45000);
    emp.getter();

    return 0;
}
