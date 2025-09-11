// Week 3,

#include  <iostream>
using namespace std;

//Problem 1
// int main() {
//     int intNumber = 20;
//     float floatNumber = 3.14;
//     double doubleNumber = 45.1234;
//     bool boolean = true;
//     char charName = 'A';
//
//     cout << "Value of Integer is " <<intNumber<<". Size is " <<sizeof(intNumber)<<endl;
//     cout << "Value of Float is " <<floatNumber<<". Size is " << sizeof(floatNumber)<<endl;
//     cout << "Value of Double is " <<doubleNumber<<". Size is " << sizeof(doubleNumber)<<endl;
//     cout << "Value of Boolean is " <<boolean<<". Size is " << sizeof(boolean)<<endl;
//     cout << "Value of Character is " <<charName<<". Size is " << sizeof(charName)<<endl;
// }

//Problem 2
// int main() {
//     cout<<"Ozodbek Azimurodov\n250458\nQueen - The Show must Go On\nTitanic"<<endl;
//     return 0;
// }

//Problem 3
// int main() {
//     cout<< ("\"I'm standing\" on the edge of some crazy cliff.\n"
//             "What I have to do, I have to catch everybody\\\n"
//             "\t\\if they're runnign and tey don't look"
//             "\twhere they're going  I have to come out\n\tfrom somewhere and  \tchatch them.\n"
//             "Refer to escape seequences table");
//     return 0;
// }

//Problem 4
// int main() {
//     int a = 189;
//     char b = 'B';
//     char c = a/10-1+b;
//     cout << a/3.0<< " " << toascii(b) << " " <<(a+b)/5<< " "<< c;
// }

//Problem 5
// int main() {
//     int num1 = 44;
//     int num2 = 12;
//     cout <<"Sum=" <<num1+num2 << endl;
//     cout <<"Product="<<num1*num2 << endl;
//     return 0;
// }

//Problem 6
// int main() {
//     int a,b;
//     cin>>a>>b;
//     cout<<"Sum:"<<a+b<<endl;
//     return 0;
// }

//Problem 7
// int main() {
//     float x,y;
//     cin>>x>>y;
//     float t=(3*(x*x+3))/((y/4)+3);
//     cout<<"t="<<t<<endl;
//     return 0;
// }

//Problem 8
// int main() {
//     float radius;
//     cin >> radius;
//     cout<<"Area: "<<radius*radius*3.14<<endl;
// }


//Problem 9
// int main() {
//     float v1, v0, t;
//     cin >> v0 >> v1 >> t;
//     float a = (v1-v0)/t;
//     cout << a << endl;
//     return 0;
// }

//Problem 10
// int main() {
//     float distance, efficiency, priceOfGallon;
//
// }

//Problem 11
// int main() {
//     double x = 1.13e3, y=411e-4;
//     cout << x << " "<<y << endl;
//     return 0;
// }

//Problem 12
// int main() {
//     int number_of_students;
//     cin >> number_of_students;
//     cout <<"In first group: " <<number_of_students/11 << endl;
//     cout <<"In last group: " <<number_of_students%11 << endl;
// }

//Problem 13
// #include  "math.h"
// int main() {
//     double s;
//     cin >> s;
//     cout << "The are of hexagon is "<<((3*sqrt(3))/2)*s*s << endl;
//     return 0;
// }

// Problem 14
// int main() {
//     int num=31;
//     num++;
//     num*=3;
//     num-=14;
//     num/=4;
//     num-=1;
//     num%=9;
//     cout<<num<<endl;
//     return 0;
// }

//Problem 15;
// int main() {
//     char a = 'A';
//     cout << char(a+7)<<char(a+4)<< char(a+11)<<char(a+11)<<char(a+14)<<char(a-32)<<endl;
//     return 0;
// }

//Problem 16
// int main() {
//     float x = 17;
//     float y = 1;
//     ++x;
//     ++y;
//     ++y;
//     float z = (x + --x) / (y * --y); // (18 + 17) / (3 * 2)
//     cout<< z << endl;
// }

//Problem 17
// int main() {
//     int a,b;
//     cin>>a>>b;
//     cout<<(a==b)<<endl;
// }

//Problem 18
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout <<((a<140)&&(a<b))<<endl;
//     return 0;
// }

//Problem 19
// int main() {
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<((a>b)&&(a>c));
//     return 0;
// }

//Problem 20
// int main() {
//     int a,b,c,d,e;
//     cin>>a>>b>>c>>d>>e;
//     cout<<(a>0 || b>0 || c>0 || d>0 || e>0)<<endl;
// }

//Problem 21
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout <<((a+b)>30 && (a*b)>30)<<" "<<((a+(b-=10))>30 && (a*(b-=10))>30)<<" "<< (a>30 || b>30) <<endl;
// }

//Problem 22
int main() {
    float x,y;
    cin>>x>>y;
    cout<<((y*30.48)>x)<<endl;
}