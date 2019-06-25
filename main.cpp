#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    HDC caly_pulpit=GetDC(GetDesktopWindow());
    POINT Point;
    bool a=0;
    cin>>a;
    if(a==false)
    {


    COLORREF Kolor;
    short int R, G, B;
    while (true)
    {
        GetCursorPos(&Point);
        Kolor=GetPixel(caly_pulpit, Point.x, Point.y);
        R = GetRValue(Kolor);
        G = GetGValue(Kolor);
        B = GetBValue(Kolor);
        cout << endl << "R: " << R << " G: " << G << " B: " << B;
        Sleep(200);
        system("cls");

    }
    }

    else if(a==true)
    {



    while (true)
    {
        GetCursorPos(&Point);
        cout<<GetPixel(caly_pulpit, Point.x, Point.y);
        Sleep(200);
        system("cls");

    }
    }
    return 0;
}
