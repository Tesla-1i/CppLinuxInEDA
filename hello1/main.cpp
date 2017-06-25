#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string str1;
    cout<<"input a string\n";
    cin>>str1;
    cout<<"str1: "<<str1<<endl;

    string str2="aaaaa";
    cout<<"str2: "<<str2<<endl;
    const char *s="bbbbb";
    string str3(s);
    cout<<"str3: "<<str3<<endl;
    char c='c';
    string str4(5, c);
    cout<<"str4: "<<str4<<endl;
    char a, b;
    a = str4[1];
    b = str4.at(3);
    cout<<"a, b: "<<a<<" "<<b<<endl;
    cout<<"///////////////////////\n";
    string str7="abdcndhhsh";
    int size;
    size=str7.capacity();
    cout<<"当前容量 "<<size<<endl;
    size = str7.max_size();
    cout<<size<<endl;
    size=str7.size();
    cout<<size<<endl;
    size=str7.length();
    cout<<size<<endl;
    bool flag;
    flag=str7.empty();
    cout<<"flag = "<<flag<<endl;
    int len=20;
    str7.resize(len, c);
    cout<<"str7: "<<str7<<endl;
    cout<<"////////////////////////\n";
    string str8 = str7;
    cout<<str8<<endl;
    str8.assign(10, c);
    cout<<str8<<endl;
    cout<<"////////////////////////////\n";
    string str10;
    str10+=str8;
    cout<<str10<<endl;
    const char *s1 = "wwww";
    str10.append(s1, 3);
    string str11;
    str11 = str10.substr(0,1);
    cout<<"子串"<<str11<<endl;
    str11.swap(str10);
    cout<<str11<<endl;
    string str12 = "absnnnnxkhhdxbj";
    int pos;
    pos=str12.find("nnnn",0);
    cout<<"pos: "<<pos<<endl;
    cout<<"///////////////////////\n";
    str12.replace(0,3,"jjjj");
    cout<<str12<<endl;
    str12.insert(0,"kkkkk");
    cout<<str12<<endl;
    str12.erase(0,3);
    cout<<str12<<endl;
    return 0;
}