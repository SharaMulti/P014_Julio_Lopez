/* Amerike university
   Author: Julio López
   Practice #: 11
   Date: 28/02/25
   Description: This program shall ask the user for a number INT up to 7, and the console shall dispense the average of it*/

   #include <iostream>
   using namespace std;

   double Average(double Num[], int size){
    double Sum =0;
    double avrg;
    for(int i = 0; i < size; i++){
    Sum += Num[i];
}
avrg = Sum / size;
    
    return avrg;
   }

   int main(){


    cout <<  "Type a number (up to 7 numbers) ";

    double range[7];
    for(int i = 0; i < 7; i++){
        cin >> range[i];
    }
    cout << Average(range, 7);
   }