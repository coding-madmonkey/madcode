/*#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
*/
#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=30;

    int *ptr = &a;
    printf("a, *ptr=%d\n",*ptr);
    printf("a, ptr=%d\n",ptr);
    printf("a=%d\n",a);
    printf("&a=%d\n",&a);

    ptr=&b;
    printf("b, *ptr=%d\n",*ptr);
    printf("b, ptr=%d\n",ptr);

    *ptr=c;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);

}
