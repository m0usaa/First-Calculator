#include <iostream>
using namespace std;
int main()
{
    char oper; // مكتبة
    float num1;
    float num2;
    cout << "======================================\n";
    cout <<"\n";  
    cout << R"(
      Created By : 
         __       __                                         
        /  \     /  |                                        
        $$  \   /$$ |  ______   __    __   _______   ______  
        $$$  \ /$$$ | /      \ /  |  /  | /       | /      \ 
        $$$$  /$$$$ |/$$$$$$  |$$ |  $$ |/$$$$$$$/  $$$$$$  |
        $$ $$ $$/$$ |$$ |  $$ |$$ |  $$ |$$      \  /    $$ |
        $$ |$$$/ $$ |$$ \__$$ |$$ \__$$ | $$$$$$  |/$$$$$$$ |
        $$ | $/  $$ |$$    $$/ $$    $$/ /     $$/ $$    $$ |
        $$/      $$/  $$$$$$/   $$$$$$/  $$$$$$$/   $$$$$$$/ 
                                                                        
    )"<<'\n';
    cout<<"\n";                                                            
    cout << "======================================\n";  
    cout<<"\n"; 
    cout << "Enter an Operator (+,-,/,*) : ";
    cin >> oper;
    cout << "Enter the first Number\n";
    cin >> num1;
    cout << "Enter the second Number\n";
    cin >> num2;
    switch (oper)
    {
    case '+': //لازم العمليات تكون في علامة تنصيص مفردة
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;
    case '-': //لازم العمليات تكون في علامة تنصيص مفردة
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;
    case '*': //لازم العمليات تكون في علامة تنصيص مفردة
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;
    case '/': //لازم العمليات تكون في علامة تنصيص مفردة
        cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        break;
    default:
        cout << "Shit Error !" << endl;
    }
    system("pause");
    return 0;
}