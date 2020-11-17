#include<iostream>
#include<string>
#include<chrono>
using namespace std;
using namespace std::chrono;
class CalcPi{
    public:
        //int n=0;
        void GetPiValue(int n){
            string result = to_string(int(22/7));   //get integer part
            result = result +".";                   //add decimal 
            string carry = to_string(22%7);         //get first decimal part
            for (int i = 0; i < n; ++i)             //iterate to get specified decimal number of spaces
            {
                int temp = stoi(carry + "0");
                carry= to_string(temp%7);
                string temp1= to_string(int(temp/7));
                result = result+temp1;
            }
            cout<<"Pi value is: \n"<<result<<endl;  //print the results         
        }  
        CalcPi(int i){
            GetPiValue(i);
        }
      
};

int main(){
    auto start = high_resolution_clock::now();
    //int n;
    CalcPi getpi(20);
    //cout<<"enter the number of decimal places to be printed for pi: \n";
    //cin>>n;
    //CalcPi d(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by function : "<< duration.count() << " microseconds";
    return 0;
}