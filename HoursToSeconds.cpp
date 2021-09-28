#include <iostream>

using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime();
        void convertIntoSeconds();
        void displayTime();
};
 
void Time::getTime()
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          
	cin >> hh;
    cout << "Minutes? ";          
	cin >> mm;
    cout << "Seconds? ";          
	cin >> ss;
}
 
void Time::convertIntoSeconds()
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime()
{
    cout << "The time is = " << hh << ":"<< mm << ":"<< ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; 
     
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
     
    return 0;
}
