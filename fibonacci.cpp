#include <cstdlib>
#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n==1)
    {
          return 1;
    }
    else
    {
          return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, char *argv[])
{
    int n=0;
    cout<<"Digite o termo que deseja: ";
    cin>>n;
    cout<<fibonacci(n-1)<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
