#include<stdio.h> 
#include<iostream>

using namespace std;
struct StructA
{

};

struct CHARACTER
{
    unsigned long uID;
    char strName[20];
    char nSex;
    unsigned short uLevel;
}boy1, boy2;//声明变量


void TestStruct(CHARACTER* pStruct, CHARACTER structA)
{

}

int main(void)
{
    //int* p = &int;

    CHARACTER* pChar;
    pChar = &boy1;
    //pChar = &CHARACTER;
    pChar->uID = 10;
    (*pChar).uID = 100;
    //*pChar->uID = 1000;

    //pChar->strName[0] = { 'a'};
    pChar->strName[1] = 'a';

    cout << sizeof(CHARACTER) << endl;
    CHARACTER* p;
    cout << sizeof(p) << endl;

	return 0;
}