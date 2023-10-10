#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////1
/*int main()
{
    static int k = 0;
    
    k++;
    if (k <= 5)
    {
        cout << k << " ";
        main();
    }
    else
    {
        cout << "\nexit\n";
    }
    
    
}*/
 //////////////////////////////////////////////////////////////////////////////////////2
    
//int main()
//{
//    static int a = 30;
//    static int b = 40;   
//    int k = a;
//    
//        if (a != b)
//        {
//            if (a <= b)
//            {
//                a++;
//               
//            }
//            else if (a >= b)
//            {
//                a--;
//                
//            }
//            main();
//    }
//        else if (a == b)
//        {
//            cout << "Equals\n";
//        }
//    
//    else
//    {
//        cout << "\nnumbers\n";
//    }
//
//    cout << k << " ";
//    
//    
//    
//}

///////////////////////////////////////////////////////////////3
//int degree(int number)
//{
//    if (number == 1)
//        return 1;
//    if (number % 2 == 0)
//        number /= 2;
//    else
//        return 0;
//    
//    return degree(number);
//}
//int main()
//{
//    static int number;
//    cout << "Number - ";
//    cin >> number;
//    if (degree(number) == 1)
//        cout << "YES\n";
//    else
//        cout << "NO\n";
//    
//    
//}

//////////////////////////////////////////////////////////////////4
//int sum(int number)
//{
//    if (number == 0)
//        return 0;
//
//    return number % 10 + sum(number / 10);
//}
//int main()
//{
//    int number;
//    cout << "Input number - ";
//    cin >> number;
//    cout << sum(number) << "\n";
//}
/////////////////////////////////////////////////////////////////////5
//int SetNum(int num)
//{
//    if (num == 0)
//        return 0;
//    cout << num % 10 << " ";
//    
//    return SetNum(num / 10);
//}
//int main()
//{
//    int number;
//    cout << "Input number - ";
//    cin >> number;
//    cout << "Numbers: ";
//    SetNum(number);
//}

/////////////////////////////////////////////////////////////////////6

int SetNum(int number)
{
    int k = number % 10;
    if (number == 0)
        return 0;
    
    SetNum(number / 10);

    cout << k << " ";
}
int main()
{
    static int number;
    
    cout << "Input number - ";
    cin >> number;
    SetNum(number);

}