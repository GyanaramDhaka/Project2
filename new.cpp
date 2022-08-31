#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct tictactoe
{
private:
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int won = 0;

public:
    void empty()
    {
        int i, j;
        int b = 1;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                a[i][j] = b;
                b += 1;
            }
        }
    }
    int input()
    {
        int x;
        int i, j;
        cout << "enter a number " << endl;
        cin >> x;
        if (x > 9)
        {
            cout << "invalid interd "<<endl;
                 cout<< "enter again" << endl;
            cin >> x;
        }
        else if (x < 9)
        {
            if (x == 1)
            {
                if (a[0][0] != x)
                {
                    cout << "envalid enterd "<<endl;
                         cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 2)
            {
                if (a[0][1] != x)
                {
                    cout << "envalid enterd "<<endl;
                         cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 3)
            {
                if (a[0][2] != x)
                {
                    cout << "envaid enterd "
                         << "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 4)
            {
                if (a[1][0] != x)
                {
                    cout << "envaid enterd "<<endl;
                        cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 5)
            {
                if (a[1][1] != x)
                {
                    cout << "envaid enterd "<<endl;
                        cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 6)
            {
                if (a[1][2] != x)
                {
                    cout << "envaid enterd "<<endl;
                        cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 7)
            {
                if (a[2][0] != x)
                {
                    cout << "envaid enterd "<<endl;
                       cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 8)
            {
                if (a[2][1] != x)
                {
                    cout << "envaid enterd "<<endl;
                        cout<< "enter again" << endl;
                    cin >> x;
                }
            }
            else if (x == 9)
            {
                if (a[2][2] != x)
                {
                    cout << "envaid enterd "<<endl;
                         cout<< "enter again" << endl;
                    cin >> x;
                }
            }
        }

        return (x);
    }

    void changenumber1(int b, int m)
    {
        int x, y;
        for (x = 0; x < 3; x++)
        {

            for (y = 0; y < 3; y++)
            {
                if (a[x][y] == b)
                {
                    if (m == 1)
                    {
                        a[x][y] = 0;
                        break;
                    }
                    else
                    {
                        a[x][y] = 'x';
                        break;
                    }
                }
            }
        }
    }
    void printsoduko()
    {
        int i;
        cout << " ----------------------" << endl;
        for (i = 0; i < 3; i++)
        {
            cout << "  |  " << a[i][0] << "  |  " << a[i][1] << "  |  " << a[i][2] << "  |  " << endl;
            ;
            cout << " ----------------------" << endl;
        }
    }
    int wongame()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            if (a[i][0] == a[i][1] && a[i][0] == a[i][2])
            {
                won = 1;
            }
        }
        for (j = 0; j < 3; j++)
        {
            if (a[0][j] == a[1][j] && a[0][j] == a[2][j])
            {
                won = 1;
            }
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
        {
            won = 1;
        }
        if (a[0][2] == a[1][1] && a[1][1] == a[2][0])
        {
            won = 1;
        }
        return won;
    }
    void changenumber3()
    {
        int i, j;
        if (a[0][0] == 0 && a[0][1] == 0)
        {
            a[0][2] = 'x';
        }
        if (a[1][0] == 0 && a[1][1] == 0)
        {
            a[1][2] = 'x';
        }
        if (a[2][0] == 0 && a[2][1] == 0)
        {
            a[2][2] = 'x';
        }
        if (a[0][0] == 0 && a[0][2] == 0)
        {
            a[0][1] = 'x';
        }
        if (a[1][0] == 0 && a[1][2] == 0)
        {
            a[1][1] = 'x';
        }
        if (a[2][0] == 0 && a[2][2] == 0)
        {
            a[2][1] = 'x';
        }
        else if (a[0][1] == 0 && a[0][2] == 0)
        {
            a[0][0] = 'x';
        }
        if (a[1][1] == 0 && a[1][2] == 0)
        {
            a[1][0] = 'x';
        }
        if (a[0][0] == 0 && a[1][0] == 0)
        {
            a[2][0] = 'x';
        }
        if (a[0][1] == 0 && a[1][1] == 0)
        {
            a[2][1] = 'x';
        }
        if (a[0][2] == 0 && a[1][2] == 0)
        {
            a[2][2] = 'x';
        }
        if (a[0][0] == 0 && a[2][0] == 0)
        {
            a[1][0] = 'x';
        }
        if (a[0][1] == 0 && a[2][1] == 0)
        {
            a[1][1] = 'x';
        }
        if (a[0][2] == 0 && a[2][2] == 0)
        {
            a[1][2] = 'x';
        }
        if (a[1][0] == 0 && a[2][0] == 0)
        {
            a[0][0] = 'x';
        }
        if (a[1][1] == 0 && a[2][1] == 0)
        {
            a[0][1] = 'x';
        }
        if (a[1][2] == 0 && a[2][2] == 0)
        {
            a[0][2] = 'x';
        }
        if (a[0][0] == 0 && a[1][1] == 0)
        {
            a[2][2] = 'x';
        }
        if (a[0][0] == 0 && a[2][2] == 0)
        {
            a[1][1] = 'x';
        }
        if (a[1][1] == 0 && a[2][2] == 0)
        {
            a[0][0] = 'x';
        }
        if (a[2][0] == 0 && a[1][1] == 0)
        {
            a[0][2] = 'x';
        }
        if (a[2][0] == 0 && a[0][2] == 0)
        {
            a[1][1] = 'x';
        }
        if (a[1][1] == 0 && a[0][2] == 0)
        {
            a[2][0] = 'x';
        }
        else
        {
            for (i = 0; i < 3; i++)
            {
                if (a[i][0] != 0 && a[i][0] != 120)
                {
                    a[i][0] = 'x';
                    break;
                }
                if (a[i][1] != 0 && a[i][1] != 120)
                {
                    a[i][1] = 'x';
                    break;
                }
                if (a[i][2] != 0 && a[i][2] != 120)
                {
                    a[i][2] = 'x';
                    break;
                }
            }
        }
    }

    void changenumber2()
    {
        int i, j;
        if (a[0][0] == 0 && a[0][1] == 0)
        {
            a[0][2] = 'x';
        }
        else if (a[1][0] == 0 && a[1][1] == 0)
        {
            a[1][2] = 'x';
        }
        else if (a[2][0] == 0 && a[2][1] == 0)
        {
            a[2][2] = 'x';
        }
        else if (a[0][0] == 0 && a[0][2] == 0)
        {
            a[0][1] = 'x';
        }
        else if (a[1][0] == 0 && a[1][2] == 0)
        {
            a[1][1] = 'x';
        }
        else if (a[2][0] == 0 && a[2][2] == 0)
        {
            a[2][1] = 'x';
        }
        else if (a[0][1] == 0 && a[0][2] == 0)
        {
            a[0][0] = 'x';
        }
        else if (a[1][1] == 0 && a[1][2] == 0)
        {
            a[1][0] = 'x';
        }
        else if (a[0][0] == 0 && a[1][0] == 0)
        {
            a[2][0] = 'x';
        }
        else if (a[0][1] == 0 && a[1][1] == 0)
        {
            a[2][1] = 'x';
        }
        else if (a[0][2] == 0 && a[1][2] == 0)
        {
            a[2][2] = 'x';
        }
        else if (a[0][0] == 0 && a[2][0] == 0)
        {
            a[1][0] = 'x';
        }
        else if (a[0][1] == 0 && a[2][1] == 0)
        {
            a[1][1] = 'x';
        }
        else if (a[0][2] == 0 && a[2][2] == 0)
        {
            a[1][2] = 'x';
        }
        else if (a[1][0] == 0 && a[2][0] == 0)
        {
            a[0][0] = 'x';
        }
        else if (a[1][1] == 0 && a[2][1] == 0)
        {
            a[0][1] = 'x';
        }
        else if (a[1][2] == 0 && a[2][2] == 0)
        {
            a[0][2] = 'x';
        }
        else if (a[0][0] == 0 && a[1][1] == 0)
        {
            a[2][2] = 'x';
        }
        else if (a[0][0] == 0 && a[2][2] == 0)
        {
            a[1][1] = 'x';
        }
        else if (a[1][1] == 0 && a[2][2] == 0)
        {
            a[0][0] = 'x';
        }
        else if (a[2][0] == 0 && a[1][1] == 0)
        {
            a[0][2] = 'x';
        }
        else if (a[2][0] == 0 && a[0][2] == 0)
        {
            a[1][1] = 'x';
        }
        else if (a[1][1] == 0 && a[0][2] == 0)
        {
            a[2][0] = 'x';
        }
        else
        {
            for (i = 0; i < 3; i++)
            {
                if (a[i][0] != 0 && a[i][0] != 120)
                {
                    a[i][0] = 'x';
                    break;
                }
                if (a[i][1] != 0 && a[i][1] != 120)
                {
                    a[i][1] = 'x';
                    break;
                }
                if (a[i][2] != 0 && a[i][2] != 120)
                {
                    a[i][2] = 'x';
                    break;
                }
            }
        }
    }
};
int main()
{

    tictactoe player1;
    tictactoe player2;
    cout<<"                     "<<endl;
    cout<<"                     "<<endl;
    cout<<"                      "<<endl;
    cout<<"                      "<<endl;
    cout<<"                      "<<endl;
    cout<<"are you ready to play a game "<<endl;
    cout << "Tic - Tac - Toe" << endl;
    int choise = 0;
    while (1)
    {
        cout << "enter your choise " << endl;
        cout << "1 : play with friend  " << endl;
        cout << "2 : play with smart computer " << endl;
        cout << "3 : play with evil computer" << endl;
        cout << "4 : exit" << endl;
        cin >> choise;
        switch (choise)
        {

        case 1:
        {
            player1.printsoduko();
            int won = 0;
            int t = 0;
            for (int j = 0; j < 9; j++)

            {
                if (t % 2 == 0)
                {
                    player1.changenumber1(player1.input(), 1);
                    player1.printsoduko();
                    won = player1.wongame();
                    if (won == 1)
                    {
                        break;
                    }
                }
                else
                {
                    player1.changenumber1(player1.input(), 2);
                    player1.printsoduko();
                    won = player1.wongame();

                    if (won == 1)
                    {
                        break;
                    }
                }
                t++;
            }
            if (won == 1 && t % 2 == 0)
            {
                cout << "player1 won" << endl;
            }
            else if (won == 1 && t % 2 == 1)
            {
                cout << "player2 won" << endl;
            }
            if (won == 0)
            {
                cout << "game draw" << endl;
            }
            player1.empty();
        }
        break;
        case 2:
        {
            int won = 0;
            int t = 0;
            player1.printsoduko();
            for (int j = 0; j < 9; j++)

            {
                if (t % 2 == 0)
                {
                    player1.changenumber1(player1.input(), 1);
                    player1.printsoduko();
                    won = player1.wongame();
                    if (won == 1)
                    {
                        break;
                    }
                }
                else
                {
                    player1.changenumber2();
                    player1.printsoduko();
                    won = player1.wongame();
                    if (won == 1)
                    {
                        break;
                    }
                }
                t++;
            }
            if (won == 1 && t % 2 == 0)
            {
                cout << "player1 won" << endl;
            }
            else if (won == 1 && t % 2 == 1)
            {
                cout << "player2 won" << endl;
            }
            if (won == 0)
            {
                cout << "game draw" << endl;
            }
        }
            player1.empty();
            break;
        case 3:
        {
            int won = 0;
            int t = 0;
            player1.printsoduko();
            for (int j = 0; j < 9; j++)

            {
                if (t % 2 == 0)
                {
                    player1.changenumber1(player1.input(), 1);
                    player1.printsoduko();
                    won = player1.wongame();
                    if (won == 1)
                    {
                        break;
                    }
                }
                else
                {
                    player1.changenumber3();
                    player1.printsoduko();
                    won = player1.wongame();
                    if (won == 1)
                    {
                        break;
                    }
                }
                t++;
            }
            if (won == 1 && t % 2 == 0)
            {
                cout << "player1 won" << endl;
            }
            else if (won == 1 && t % 2 == 1)
            {
                cout << "player2 won" << endl;
            }
            if (won == 0)
            {
                cout << "game draw" << endl;
            }
            won = 0;
            t = 0;
        }
            player1.empty();
            break;

        default:
            exit(0);
        }
    }
    getch();
}
