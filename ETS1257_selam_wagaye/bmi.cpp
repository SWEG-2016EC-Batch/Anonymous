#include<iostream>
using namespace std;
int main() {
    int persons_number;
    cout << " Enter the number of person to calculate Body mass index(BMI)" << endl;
    cin >> persons_number;
    for (int i = 1;i <= persons_number;i++) {
        float weight, height, BMI;
        cout << "Enter weight of a person in kilograms" << endl;
        cin >> weight;
        cout << "Enter height of a person in meters" << endl;
        cin >> height;
        BMI = weight / (height * height);
        cout << " Person BMI is: " << BMI << endl;

    }
    return 0;
}
