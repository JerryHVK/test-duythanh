#include<iostream>
using namespace std;

int main(){
    string s,k;
    int t;
    while(true){
        cout << "1 - Save the result in a variable" << endl << "2 - Just show the value and do not save it" << endl;
        cout << "3 - Exist" << endl;
        cout << "Enter your choose : ";
        cin >> t;
        switch (t){
            case 1:
                cout << "Enter the binary string : ";
                cin >> s;
                while(s.size() % 4 != 0){
                    s = '0' + s;
                }
                for(int i=0; i<= s.size()-4; i = i+4){
                    int a = (s[i]-'0')*8 + (s[i+1]-'0')*4 + (s[i+2]-'0')*2 + s[i+3]-'0';
                    if(a<10){
                        char c = a + '0';
                        k = k + c;
                    }
                    else{
                        switch (a) {
                            case 10:
                                k = k + 'A';
                                break;
                            case 11: 
                                k = k + 'B';
                                break;
                            case 12:
                                k = k + 'C';
                                break;
                            case 13:
                                k = k + 'D';
                                break;
                            case 14:
                                k = k + 'E';
                                break;
                            case 15:
                                k = k + 'F';
                                break;
                        }
                    }
                }
                cout << "The change to hexadecimal number system is " << k << endl << endl;
                system("pause");
                break;
            case 2:
                cout << "Enter the binary string : ";
                cin >> s;
                while(s.size() % 4 != 0){
                    s = '0' + s;
                }
                cout << "The change to hexadecimal number system is ";
                for(int i=0; i<=s.size()-4; i = i+4){
                    int a = (s[i]-'0')*8 + (s[i+1]-'0')*4 + (s[i+2]-'0')*2 + s[i+3]-'0';
                    if(a<10) cout << a;
                    else{
                        switch (a) {
                            case 10:
                                cout << "A";
                                break;
                            case 11: 
                                cout << "B";
                                break;
                            case 12:
                                cout << "C";
                                break;
                            case 13:
                                cout << "D";
                                break;
                            case 14:
                                cout << "E";
                                break;
                            case 15:
                                cout << "F";
                                break;
                        }
                    }
                }
                cout << endl << endl;
                system("pause");
                break;
            case 3:
                cout << "Thanks for using our service";
                return 0;
            default:
                cout << "Please re-enter your choice" << endl << endl;
                break;
        }
    }
}