/*
 * Data Types in C++:
 *
 * +------------+-----------+------------------------------------+
 * | Type       | Size      | Use Case                           |
 * +------------+-----------+------------------------------------+
 * | int        | 4 bytes   | General integers (up to ±2×10^9)   |
 * | long       | 4 or 8 bytes | Larger integers                 |
 * | long long  | 8 bytes   | Very large numbers (±9×10^18)      |
 * | float      | 4 bytes   | Decimal with ~6 digits precision   |
 * | double     | 8 bytes   | Higher precision decimals          |
 * | char       | 1 byte    | Single character                   |
 * | bool       | 1 byte    | True/False (0 or 1)                |
 * +------------+-----------+------------------------------------+
 * 
 * - float e = 5;   // Stored as 5.0 in floating-point format.
 * - double g = 12; // Stored as 12.0 in floating-point format.
 * - This implicit conversion is useful when performing calculations that involve both integers and decimals.
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int a = 10;
    long b = 12342;
    long long c = 12344554324323123;
    float d = 5.4;
    float e = 5;
    double f = 12.1212322;
    double g = 12;
    cout<<"value of e is : "<<e<<endl;
    cout<<"value of g is : "<<g<<endl;

    //char as input : use single quote only 1 char 
    char ch;
    cout<<"enter char :";
    cin>>ch;
    cout<<ch<<endl;

    string s;
    cout<<"enter string :";
    cin>>s;
    cout<<s<<endl;

    string str;
    cout<<"enter string(getline) :";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    getline(cin,str);
    cout<<str<<endl;

    //
 }

