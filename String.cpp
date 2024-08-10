#include<iostream>
using namespace std;
#include<string.h>
struct cybrom{
    int age;
    char name[20];
};
int main(){
    //according to c language, structure is a collection of user define data type.
    //but according to c++ LANGUAGE, structure is a collection of user define data type as well as user define function.
    // Homogeneous support only one type of data type.
    // Hetrogeneous support multiple type of dATAtYPE.
    struct cybrom d;
    d.age=20;
    cout<<d.age;
    strcpy(d.name,"Bhopal");
    cout<<d.name;
}
