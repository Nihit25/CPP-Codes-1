#include <iostream>
using namespace std;
void repchar(char ch = '*', int n = 45)
{
    for(int i=0;i<n;i++)
        cout <<i+1<<"] " << ch << endl;
}
int main()
{
    repchar();
    repchar('=');
    repchar('+', 30);

return 0;
}
