#include<iostream>
using namespace std;
int main() {
    int transmission_rate = 960;
    int bytes_per_character = 1;
    long long filesize;
    int transmission_time;
    cout << "enter file size in bytes: " << endl;
    cin >> filesize;
    transmission_time = (filesize) / (transmission_rate * bytes_per_character);
    int days = transmission_time / (24 * 3600);
   transmission_time = (transmission_time % 24 * 3600);
    int hour = transmission_time / (3600);
  transmission_time = (transmission_time % 3600);
    int min = transmission_time / 60;
  int sec = (transmission_time % 60);
 cout << "transmission time is: " << days << "days: " << hour << "hours: " << min << "minutes" << sec << " seconds" << endl;

 return 0;
}
