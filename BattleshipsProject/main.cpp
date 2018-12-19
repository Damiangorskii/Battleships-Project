#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;





class Battleships
{
private:
    char p_attack_radar[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
    char p1_attack_radar[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
    char p2_attack_radar[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
        char p_board[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
        char c_board[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
    char p1_board[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
    char p2_board[11][13] =
    {
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},
        {'#','-','-','-','-','-','-','-','-','-','-','#'},

    };
    char hv[10];
    char p_ship_cords[10];
    char p_attack_cords[10];
    int a = 65;
    int b = 65;
    int computer_lifes = 17;
    int player_lifes = 17;
    int destroyer_size = 2, p_destroyer_size = 2;
    int submarine_size = 3, p_submarine_size = 3;
    int cruiser_size = 3, p_cruiser_size = 3;
    int battleship_size = 4, p_battleship_size = 4;
    int carrier_size = 5, p_carrier_size = 5;
    int row, col;
    int attack_row, attack_col;
    int c_attack_row, c_attack_col;
    int computer_row , computer_col;
    int computer_hv;
    char first_computer_cord;
    int ship_numper = 0;
    int c_ship_number = 0;
    bool available_ship_position;
    bool available_c_ship_position;
    bool available_attack_cord;
    bool available_c_attack_cord;
    bool hit = false;
    bool destroyerHit = false;
    bool submarineHit = false;
    bool cruiserHit = false;
    bool battleshipHit = false;
    bool carrierHit = false;
    char p1_hv[10];
    char p1_ship_cords[10];
    char p1_attack_cords[10];
    char p2_ship_cords[10];
    char p2_attack_cords[10];
    int f_a = 65;
    int f_b = 65;
    int p2_lifes = 17;
    int p1_lifes = 17;
    int p2_destroyer_size = 2, p1_destroyer_size = 2;
    int p2_submarine_size = 3, p1_submarine_size = 3;
    int p2_cruiser_size = 3, p1_cruiser_size = 3;
    int p2_battleship_size = 4, p1_battleship_size = 4;
    int p2_carrier_size = 5, p1_carrier_size = 5;
    int p1_row, p1_col;
    int p2_attack_row, p2_attack_col;
    int p1_attack_row, p1_attack_col;
    int p2_row , p2_col;
    char p2_hv[10];
    int p1_ship_numper = 0;
    int p2_ship_number = 0;
    bool p1_available_ship_position;
    bool p2_available_ship_position;
    bool p1_available_attack_cord;
    bool p2_available_attack_cord;
    string name;
    string name1, name2;


public:

    void options()
    {
        do{
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      Do you wanna play single game (s) or play 1 vs 1 with your friend (f) ?";
        cout<<endl<<"                      Press (e) to exit the game";
        char option;
        option = getch();
        if (option == 's' )
        {
            system("CLS");
            start_game();
        }
        else if (option == 'f')
        {
            system("CLS");
            friend_game();
        }
        else if (option == 'e')
        {
            system("CLS");
            exit(0);
        }
        else
        {
            system("CLS");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                     You didn't choose anything!";
            system("CLS");
        }
        }while (0==0);
    }

    void friend_game()
    {
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      Press random key to start game";
        if (getch())
        {
            system("CLS");
            set_player1_name();
            set_player2_name();
            p1_begin_wait();
            player1_input();
            p2_begin_wait();
            player2_input();
            p1_wait();
            show_player1_board_and_radar();
            player1_attack();


        }
        else
        {
            system("CLS");
            exit(0);
        }
    }
    void set_player1_name()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"               Player 1 set your nickname: ";
        cin>>name1;
    }
    void set_player2_name()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                Player 2 set your nickname: ";
        cin>>name2;
    }
    void show_ships_status2()
    {
        system("CLS");
        cout << setw(41)<<name1 << "'s Ships" <<setw(12)<< "|" << " " <<setw(20) <<name2<<"'s Ships" << endl;
        cout<<endl<<setw(50)<<"Destroyer's life: "<<p1_destroyer_size<<" "<<setw(40)<<"Destroyer's life: "<<p2_destroyer_size;
        cout<<endl<<setw(50)<<"Submarine's life: "<<p1_submarine_size<<" "<<setw(40)<<"Submarine's life: "<<p2_submarine_size;
        cout<<endl<<setw(50)<<"Cruiser's life: "<<p1_cruiser_size<<" "<<setw(40)<<"Cruiser's life: "<<p2_cruiser_size;
        cout<<endl<<setw(50)<<"Battleship's life: "<<p1_battleship_size<<" "<<setw(40)<<"Battleship's life: "<<p2_battleship_size;
        cout<<endl<<setw(50)<<"Carrier's life: "<<p1_carrier_size<<" "<<setw(40)<<"Carrier's life: "<<p2_carrier_size;

    }
    void show_player1_board_and_radar()
	{
		show_ships_status2();
		cout<<endl<<endl<<endl<<setw(59)<<name1<<"'s turn";
		for (int i = 0; i < 5; i++)
            {
			cout << endl;
		}
		cout << setw(52) << "0 1 2 3 4 5 6 7 8 9" << setw(41) << "0 1 2 3 4 5 6 7 8 9" << endl;
		cout << setw(32) << " ";
		for (int j = 0; j < 21; j++)
        {
			cout << " ";
		}
		cout << " " << setw(19) << " ";
		for (int n = 0; n < 21; n++)
        {
			cout << " ";
		}
		cout << " " << endl;
		for (int k = 0; k < 10; k++)
            {
			cout << setw(30) << (char)a++ << " ";
			for (int l = 0; l < 12; l++)
			{
				if (p1_board[k][l] == '-')
                {
					cout << (char)248 << " ";
				}
				else if (p1_board[k][l] == '#')
                {
					cout << " " << " ";
				}
				else if (p1_board[k][l] == 'D')
				{
					cout << (char)68 << " ";
				}
				else if (p1_board[k][l] == 'S')
                {
					cout << (char)83 << " ";
				}
				else if (p1_board[k][l] == 'C')
                {
					cout << (char)67 << " ";
				}
				else if (p1_board[k][l] == 'B')
                {
					cout << (char)66 << " ";
				}
                else if (p1_board[k][l] == 'R')
                {
					cout << (char)82 << " ";
				}
				else if (p1_board[k][l] == '!')
                {
					cout << (char)33 << " ";
				}
				else if (p1_board[k][l] == '$')
                {
					cout << (char)237 << " ";
				}
			}
			cout << setw(17) << (char)b++;
			for (int m = 0; m < 12; m++)
			{
				if (p1_attack_radar[k][m] == '-')
                {
					cout << (char)248 << " ";
				}
				else if (p1_attack_radar[k][m] == '#')
                {
					cout << " " << " ";
				}
				else if (p1_attack_radar[k][m] == '!')
                {
					cout << (char)33 << " ";
				}
				else if (p1_attack_radar[k][m] == '$')
                {
					cout << (char)237 << " ";
				}
			}
			cout << endl;
		}
		a = 65;
		b = 65;
		cout << setw(32) << " ";
		for (int o = 0; o < 21; o++)
        {
			cout << " ";
		}
		cout << " " << setw(19) << " ";
		for (int p = 0; p < 21; p++)
            {
			cout << " ";
		}
		cout << " " << endl << endl;
	}
	void show_player2_board_and_radar()
	{
		show_ships_status2();
		cout<<endl<<endl<<endl<<setw(59)<<name2<<"'s turn";
		for (int i = 0; i < 5; i++)
            {
			cout << endl;
		}
		cout << setw(52) << "0 1 2 3 4 5 6 7 8 9" << setw(41) << "0 1 2 3 4 5 6 7 8 9" << endl;
		cout << setw(32) << " ";
		for (int j = 0; j < 21; j++)
        {
			cout << " ";
		}
		cout << " " << setw(19) << " ";
		for (int n = 0; n < 21; n++)
        {
			cout << " ";
		}
		cout << " " << endl;
		for (int k = 0; k < 10; k++)
            {
			cout << setw(30) << (char)a++ << " ";
			for (int l = 0; l < 12; l++)
			{
				if (p2_board[k][l] == '-')
                {
					cout << (char)248 << " ";
				}
				else if (p2_board[k][l] == '#')
                {
					cout << " " << " ";
				}
				else if (p2_board[k][l] == 'D')
				{
					cout << (char)68 << " ";
				}
				else if (p2_board[k][l] == 'S')
                {
					cout << (char)83 << " ";
				}
				else if (p2_board[k][l] == 'C')
                {
					cout << (char)67 << " ";
				}
				else if (p2_board[k][l] == 'B')
                {
					cout << (char)66 << " ";
				}
                else if (p2_board[k][l] == 'R')
                {
					cout << (char)82 << " ";
				}
				else if (p2_board[k][l] == '!')
                {
					cout << (char)33 << " ";
				}
				else if (p2_board[k][l] == '$')
                {
					cout << (char)237 << " ";
				}
			}
			cout << setw(17) << (char)b++;
			for (int m = 0; m < 12; m++)
			{
				if (p2_attack_radar[k][m] == '-')
                {
					cout << (char)248 << " ";
				}
				else if (p2_attack_radar[k][m] == '#')
                {
					cout << " " << " ";
				}
				else if (p2_attack_radar[k][m] == '!')
                {
					cout << (char)33 << " ";
				}
				else if (p2_attack_radar[k][m] == '$')
                {
					cout << (char)237 << " ";
				}
			}
			cout << endl;
		}
		a = 65;
		b = 65;
		cout << setw(32) << " ";
		for (int o = 0; o < 21; o++)
        {
			cout << " ";
		}
		cout << " " << setw(19) << " ";
		for (int p = 0; p < 21; p++)
            {
			cout << " ";
		}
		cout << " " << endl << endl;
	}
	void player1_input()
	{
	    do
        {
            p1_available_ship_position = true;
            if (p1_ship_numper==0)
            {
                cout<<setw(40)<<"Give me your Destroyer's position: ";
            }
            else if (p1_ship_numper==1)
            {
                cout<<setw(40)<<"Give me your Submarine's position: ";
            }
            else if (p1_ship_numper==2)
            {
                cout<<setw(40)<<"Give me your Cruiser's position: ";
            }
            else if (p1_ship_numper==3)
            {
                cout<<setw(40)<<"Give me your Battleship's position: ";
            }
            else if (p1_ship_numper==4)
            {
                cout<<setw(40)<<"Give me your Carrier's position: ";
            }
            cin.getline(p1_ship_cords, 11, '\n');
            p1_check_correct_cords();
            show_player1_board_and_radar();
            if (p1_available_ship_position==true)
            {
                p1_ship_numper++;
            }
        }while(!p1_available_ship_position || p1_ship_numper<=4);
	}

	void p1_check_correct_cords()
	{
	    if (p1_ship_cords[0]<'a' || p1_ship_cords[0]>'j' || p1_ship_cords[1]<'0' || p1_ship_cords[1]>'9' || p1_ship_cords[2]>='0')
        {
            p1_available_ship_position = false;
            show_player1_board_and_radar();
            cout<<setw(40)<<"You have put wrong cords!";
            Sleep(3000);
        }
        else
        {
            p1_memory_value_of_row_col();
            p1_check_for_available_cell();
        }

	}

	void p1_check_for_available_cell()
	{
	    if (p1_board[p1_row][p1_col] == '-')
        {
            if (p1_ship_numper == 0)
            {
                p1_board[p1_row][p1_col] = 'D';
            }
            else if (p1_ship_numper==1)
            {
                p1_board[p1_row][p1_col] = 'S';
            }
            else if (p1_ship_numper == 2)
            {
                p1_board[p1_row][p1_col] = 'C';
            }
            else if (p1_ship_numper == 3)
            {
                p1_board[p1_row][p1_col] = 'B';
            }
            else if (p1_ship_numper == 4)
            {
                p1_board[p1_row][p1_col] = 'R';
            }
            p1_vertical_or_horizontal();
        }
        else
        {
            show_player1_board_and_radar();
            cout<<"This spot has already been taken";
            Sleep(3000);
            p1_available_ship_position = false;
        }
	}

	void p1_vertical_or_horizontal()
	{
	    show_player1_board_and_radar();
	    cout<<endl;
	    cout<<setw(40)<<"Wanna put it horizontally (h) or vertically (v) ?";
	    cin.getline(p1_hv, 10, '\n');
	    if (p1_hv[0] == 'h')
        {
            if (p1_ship_numper == 0 && p1_board[p1_row][p1_col+1] == '-')
                {
                    p1_board[p1_row][p1_col+1] = 'D';
                }
            else if (p1_ship_numper == 1 && p1_board[p1_row][p1_col+1] == '-' && p1_board[p1_row][p1_col+2] == '-')
            {
                p1_board[p1_row][p1_col+1] = 'S';
                p1_board[p1_row][p1_col+2] = 'S';
            }
            else if (p1_ship_numper == 2 && p1_board[p1_row][p1_col+1] == '-' && p1_board[p1_row][p1_col+2] == '-')
            {
                p1_board[p1_row][p1_col+1] = 'C';
                p1_board[p1_row][p1_col+2] = 'C';
            }
            else if (p1_ship_numper == 3 && p1_board[p1_row][p1_col+1] == '-' && p1_board[p1_row][p1_col+2] == '-' && p1_board[p1_row][p1_col+3] == '-')
            {
                p1_board[p1_row][p1_col+1] = 'B';
                p1_board[p1_row][p1_col+2] = 'B';
                p1_board[p1_row][p1_col+3] = 'B';
            }
            else if (p1_ship_numper == 4 && p1_board[p1_row][p1_col+1] == '-' && p1_board[p1_row][p1_col+2] == '-' && p1_board[p1_row][p1_col+3] == '-' && p1_board[p1_row][p1_col+4] == '-')
            {
                p1_board[p1_row][p1_col+1] = 'R';
                p1_board[p1_row][p1_col+2] = 'R';
                p1_board[p1_row][p1_col+3] = 'R';
                p1_board[p1_row][p1_col+4] = 'R';
            }
            else
            {
                show_player1_board_and_radar();
                cout<<setw(40)<<"There's not enough space for your ship";
                Sleep(3000);
                p1_board[p1_row][p1_col] = '-';
                p1_available_ship_position = false;
            }
        }
        else if (p1_hv[0] == 'v')
        {
            if (p1_ship_numper == 0 && p1_board[p1_row+1][p1_col] == '-')
                {
                    p1_board[p1_row+1][p1_col] = 'D';
                }
            else if (p1_ship_numper == 1 && p1_board[p1_row+1][p1_col] == '-' && p1_board[p1_row+2][p1_col] == '-')
            {
                p1_board[p1_row+1][p1_col] = 'S';
                p1_board[p1_row+2][p1_col] = 'S';
            }
            else if (p1_ship_numper == 2 && p1_board[p1_row+1][p1_col] == '-' && p1_board[p1_row+2][p1_col] == '-')
            {
                p1_board[p1_row+1][p1_col] = 'C';
                p1_board[p1_row+2][p1_col] = 'C';
            }
            else if (p1_ship_numper == 3 && p1_board[p1_row+1][p1_col] == '-' && p1_board[p1_row+2][p1_col] == '-' && p1_board[p1_row+3][p1_col] == '-')
            {
                p1_board[p1_row+1][p1_col] = 'B';
                p1_board[p1_row+2][p1_col] = 'B';
                p1_board[p1_row+3][p1_col] = 'B';
            }
            else if (p1_ship_numper == 4 && p1_board[p1_row+1][p1_col] == '-' && p1_board[p1_row+2][p1_col] == '-' && p1_board[p1_row+3][p1_col] == '-' && p1_board[p1_row+4][p1_col] == '-')
            {
                p1_board[p1_row+1][p1_col] = 'R';
                p1_board[p1_row+2][p1_col] = 'R';
                p1_board[p1_row+3][p1_col] = 'R';
                p1_board[p1_row+4][p1_col] = 'R';
            }
            else
            {
                show_player1_board_and_radar();
                cout<<setw(40)<<"There's not enough space for your ship";
                Sleep(3000);
                p1_board[p1_row][p1_col] = '-';
                p1_available_ship_position = false;
            }
        }
        else
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You didn't choose the direction";
            Sleep(3000);
            p1_board[p1_row][p1_col] = '-';
            p1_available_ship_position = false;
        }
	}
	void player2_input()
	{
	    do
        {
            show_player2_board_and_radar();
            p2_available_ship_position = true;
            if (p2_ship_number==0)
            {
                cout<<setw(40)<<"Give me your Destroyer's position: ";
            }
            else if (p2_ship_number==1)
            {
                cout<<setw(40)<<"Give me your Submarine's position: ";
            }
            else if (p2_ship_number==2)
            {
                cout<<setw(40)<<"Give me your Cruiser's position: ";
            }
            else if (p2_ship_number==3)
            {
                cout<<setw(40)<<"Give me your Battleship's position: ";
            }
            else if (p2_ship_number==4)
            {
                cout<<setw(40)<<"Give me your Carrier's position: ";
            }
            cin.getline(p2_ship_cords, 11, '\n');
            p2_check_correct_cords();
            show_player2_board_and_radar();
            if (p2_available_ship_position==true)
            {
                p2_ship_number++;
            }
        }while(!p2_available_ship_position || p2_ship_number<=4);
	}

	void p2_check_correct_cords()
	{
	    if (p2_ship_cords[0]<'a' || p2_ship_cords[0]>'j' || p2_ship_cords[1]<'0' || p2_ship_cords[1]>'9' || p2_ship_cords[2]>='0')
        {
            p2_available_ship_position = false;
            show_player2_board_and_radar();
            cout<<setw(40)<<"You have put wrong cords!";
            Sleep(3000);
        }
        else
        {
            p2_memory_value_of_row_col();
            p2_check_for_available_cell();
        }

	}

	void p2_check_for_available_cell()
	{
	    if (p2_board[p2_row][p2_col] == '-')
        {
            if (p2_ship_number == 0)
            {
                p2_board[p2_row][p2_col] = 'D';
            }
            else if (p2_ship_number==1)
            {
                p2_board[p2_row][p2_col] = 'S';
            }
            else if (p2_ship_number == 2)
            {
                p2_board[p2_row][p2_col] = 'C';
            }
            else if (p2_ship_number == 3)
            {
                p2_board[p2_row][p2_col] = 'B';
            }
            else if (p2_ship_number == 4)
            {
                p2_board[p2_row][p2_col] = 'R';
            }
            p2_vertical_or_horizontal();
        }
        else
        {
            show_player2_board_and_radar();
            cout<<"This spot has already been taken";
            Sleep(3000);
            p2_available_ship_position = false;
        }
	}

	void p2_vertical_or_horizontal()
	{
	    show_player2_board_and_radar();
	    cout<<endl;
	    cout<<setw(40)<<"Wanna put it horizontally (h) or vertically (v) ?";
	    cin.getline(p2_hv, 10, '\n');
	    if (p2_hv[0] == 'h')
        {
            if (p2_ship_number == 0 && p2_board[p2_row][p2_col+1] == '-')
                {
                    p2_board[p2_row][p2_col+1] = 'D';
                }
            else if (p2_ship_number == 1 && p2_board[p2_row][p2_col+1] == '-' && p2_board[p2_row][p2_col+2] == '-')
            {
                p2_board[p2_row][p2_col+1] = 'S';
                p2_board[p2_row][p2_col+2] = 'S';
            }
            else if (p2_ship_number == 2 && p2_board[p2_row][p2_col+1] == '-' && p2_board[p2_row][p2_col+2] == '-')
            {
                p2_board[p2_row][p2_col+1] = 'C';
                p2_board[p2_row][p2_col+2] = 'C';
            }
            else if (p2_ship_number == 3 && p2_board[p2_row][p2_col+1] == '-' && p2_board[p2_row][p2_col+2] == '-' && p2_board[p2_row][p2_col+3] == '-')
            {
                p2_board[p2_row][p2_col+1] = 'B';
                p2_board[p2_row][p2_col+2] = 'B';
                p2_board[p2_row][p2_col+3] = 'B';
            }
            else if (p2_ship_number == 4 && p2_board[p2_row][p2_col+1] == '-' && p2_board[p2_row][p2_col+2] == '-' && p2_board[p2_row][p2_col+3] == '-' && p2_board[p2_row][p2_col+4] == '-')
            {
                p2_board[p2_row][p2_col+1] = 'R';
                p2_board[p2_row][p2_col+2] = 'R';
                p2_board[p2_row][p2_col+3] = 'R';
                p2_board[p2_row][p2_col+4] = 'R';
            }
            else
            {
                show_player2_board_and_radar();
                cout<<setw(40)<<"There's not enough space for your ship";
                Sleep(3000);
                p2_board[p2_row][p2_col] = '-';
                p2_available_ship_position = false;
            }
        }
        else if (p2_hv[0] == 'v')
        {
            if (p2_ship_number == 0 && p2_board[p2_row+1][p2_col] == '-')
                {
                    p2_board[p2_row+1][p2_col] = 'D';
                }
            else if (p2_ship_number == 1 && p2_board[p2_row+1][p2_col] == '-' && p2_board[p2_row+2][p2_col] == '-')
            {
                p2_board[p2_row+1][p2_col] = 'S';
                p2_board[p2_row+2][p2_col] = 'S';
            }
            else if (p2_ship_number == 2 && p2_board[p2_row+1][p2_col] == '-' && p2_board[p2_row+2][p2_col] == '-')
            {
                p2_board[p2_row+1][p2_col] = 'C';
                p2_board[p2_row+2][p2_col] = 'C';
            }
            else if (p2_ship_number == 3 && p2_board[p2_row+1][p2_col] == '-' && p2_board[p2_row+2][p2_col] == '-' && p2_board[p2_row+3][p2_col] == '-')
            {
                p2_board[p2_row+1][p2_col] = 'B';
                p2_board[p2_row+2][p2_col] = 'B';
                p2_board[p2_row+3][p2_col] = 'B';
            }
            else if (p2_ship_number == 4 && p2_board[p2_row+1][p2_col] == '-' && p2_board[p2_row+2][p2_col] == '-' && p2_board[p2_row+3][p2_col] == '-' && p2_board[p2_row+4][p2_col] == '-')
            {
                p2_board[p2_row+1][p2_col] = 'R';
                p2_board[p2_row+2][p2_col] = 'R';
                p2_board[p2_row+3][p2_col] = 'R';
                p2_board[p2_row+4][p2_col] = 'R';
            }
            else
            {
                show_player2_board_and_radar();
                cout<<setw(40)<<"There's not enough space for your ship";
                Sleep(3000);
                p2_board[p2_row][p2_col] = '-';
                p2_available_ship_position = false;
            }
        }
        else
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You didn't choose the direction";
            Sleep(3000);
            p2_board[p2_row][p2_col] = '-';
            p2_available_ship_position = false;
        }
	}
	void player1_attack()
    {
        do
        {
            p1_available_attack_cord = true;
            show_player1_board_and_radar();
            cout<<setw(40)<<"Attack cords: ";
            cin.getline(p1_attack_cords, 10, '\n');
            p1_check_attack_cords();
            if (p2_lifes==0)
            {
                system("CLS");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<setw(40)<<name1<<" you have defeated your enemy!";
                cout<<endl<<setw(40)<<"     Congratulations!!!!";
                Sleep(6000);
                show_p1_board();
                options();
            }
            else if (p1_available_attack_cord == true)
            {
                Sleep(3000);
                show_player1_board_and_radar();
                p2_wait();
                player2_attack();
            }
        } while (!p1_available_attack_cord || p2_lifes>0);
    }

    void p1_check_attack_cords()
    {
        if (p1_attack_cords[0]<'a' || p1_attack_cords[0]>'j' || p1_attack_cords[1]<'0' || p1_attack_cords[1]>'9' || p1_attack_cords[2]>='0')
        {
            p1_available_attack_cord = false;
            system("CLS");
            show_player1_board_and_radar();
            cout<<setw(40)<<"You have put wrong cords !";
            Sleep(3000);

        }
        else
        {
            p1_memory_value_of_attack_row_col();
            player1_attack_on_board();
        }
    }
    void player2_attack()
    {
        do
        {
            p2_available_attack_cord = true;
            show_player2_board_and_radar();
            cout<<setw(40)<<"Attack cords: ";
            cin.getline(p2_attack_cords, 10, '\n');
            p2_check_attack_cords();
            if (p1_lifes==0)
            {
                system("CLS");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<setw(40)<<name2<<" you have defeated your enemy!";
                cout<<endl<<setw(40)<<"      Congratulations!!!!";
                Sleep(3000);
                show_p1_board();
                options();
            }
            else if (p2_available_attack_cord == true)
            {
                Sleep(3000);
                show_player2_board_and_radar();
                p1_wait();
                player1_attack();
            }
        } while (!p2_available_attack_cord || p1_lifes>0);
    }

    void p2_check_attack_cords()
    {
        if (p2_attack_cords[0]<'a' || p2_attack_cords[0]>'j' || p2_attack_cords[1]<'0' || p2_attack_cords[1]>'9' || p2_attack_cords[2]>='0')
        {
            p2_available_attack_cord = false;
            system("CLS");
            show_player2_board_and_radar();
            cout<<setw(40)<<"You have put wrong cords !";
            Sleep(3000);

        }
        else
        {
            p2_memory_value_of_attack_row_col();
            player2_attack_on_board();
        }
    }
    void p1_memory_value_of_row_col()
    {

		if (p1_ship_cords[0] == 'a')
            {
                p1_row = 0;
            }
		else if (p1_ship_cords[0] == 'b')
            {
                p1_row = 1;
            }
		else if (p1_ship_cords[0] == 'c')
            {
                p1_row = 2;
            }
		else if (p1_ship_cords[0] == 'd')
            {
                p1_row = 3;
            }
		else if (p1_ship_cords[0] == 'e')
            {
                p1_row = 4;
            }
		else if (p1_ship_cords[0] == 'f')
            {
                p1_row = 5;
            }
		else if (p1_ship_cords[0] == 'g')
            {
                p1_row = 6;
            }
		else if (p1_ship_cords[0] == 'h')
            {
                p1_row = 7;
            }
		else if (p1_ship_cords[0] == 'i')
            {
                p1_row = 8;
            }
		else if (p1_ship_cords[0] == 'j')
            {
                p1_row = 9;
            }

		if (p1_ship_cords[1] == '0')
            {
                p1_col = 1;
            }
		else if (p1_ship_cords[1] == '1')
            {
                p1_col = 2;
            }
		else if (p1_ship_cords[1] == '2')
            {
                p1_col = 3;
            }
		else if (p1_ship_cords[1] == '3')
            {
                p1_col = 4;
            }
		else if (p1_ship_cords[1] == '4')
            {
                p1_col = 5;
            }
		else if (p1_ship_cords[1] == '5')
            {
                p1_col = 6;
            }
		else if (p1_ship_cords[1] == '6')
            {
                p1_col = 7;
            }
		else if (p1_ship_cords[1] == '7')
            {
                p1_col = 8;
            }
		else if (p1_ship_cords[1] == '8')
            {
                p1_col = 9;
            }
		else if (p1_ship_cords[1] == '9')
            {
                p1_col = 10;
            }
    }


    void p1_memory_value_of_attack_row_col()
    {
        if (p1_attack_cords[0] == 'a')
            {
                p1_attack_row = 0;
            }
		else if (p1_attack_cords[0] == 'b')
            {
                p1_attack_row = 1;
            }
		else if (p1_attack_cords[0] == 'c')
            {
                p1_attack_row = 2;
            }
		else if (p1_attack_cords[0] == 'd')
            {
                p1_attack_row = 3;
            }
		else if (p1_attack_cords[0] == 'e')
            {
                p1_attack_row = 4;
            }
		else if (p1_attack_cords[0] == 'f')
            {
                p1_attack_row = 5;
            }
		else if (p1_attack_cords[0] == 'g')
            {
                p1_attack_row = 6;
            }
		else if (p1_attack_cords[0] == 'h')
            {
                p1_attack_row = 7;
            }
		else if (p1_attack_cords[0] == 'i')
            {
                p1_attack_row = 8;
            }
		else if (p1_attack_cords[0] == 'j')
            {
                p1_attack_row = 9;
            }

		if (p1_attack_cords[1] == '0')
            {
                p1_attack_col = 1;
            }
		else if (p1_attack_cords[1] == '1')
            {
                p1_attack_col = 2;
            }
		else if (p1_attack_cords[1] == '2')
            {
                p1_attack_col = 3;
            }
		else if (p1_attack_cords[1] == '3')
            {
                p1_attack_col = 4;
            }
		else if (p1_attack_cords[1] == '4')
            {
                p1_attack_col = 5;
            }
		else if (p1_attack_cords[1] == '5')
            {
                p1_attack_col = 6;
            }
		else if (p1_attack_cords[1] == '6')
            {
                p1_attack_col = 7;
            }
		else if (p1_attack_cords[1] == '7')
            {
                p1_attack_col = 8;
            }
		else if (p1_attack_cords[1] == '8')
            {
                p1_attack_col = 9;
            }
		else if (p1_attack_cords[1] == '9')
            {
                p1_attack_col = 10;
            }
    }
    void p2_memory_value_of_row_col()
    {

		if (p2_ship_cords[0] == 'a')
            {
                p2_row = 0;
            }
		else if (p2_ship_cords[0] == 'b')
            {
                p2_row = 1;
            }
		else if (p2_ship_cords[0] == 'c')
            {
                p2_row = 2;
            }
		else if (p2_ship_cords[0] == 'd')
            {
                p2_row = 3;
            }
		else if (p2_ship_cords[0] == 'e')
            {
                p2_row = 4;
            }
		else if (p2_ship_cords[0] == 'f')
            {
                p2_row = 5;
            }
		else if (p2_ship_cords[0] == 'g')
            {
                p2_row = 6;
            }
		else if (p2_ship_cords[0] == 'h')
            {
                p2_row = 7;
            }
		else if (p2_ship_cords[0] == 'i')
            {
                p2_row = 8;
            }
		else if (p2_ship_cords[0] == 'j')
            {
                p2_row = 9;
            }

		if (p2_ship_cords[1] == '0')
            {
                p2_col = 1;
            }
		else if (p2_ship_cords[1] == '1')
            {
                p2_col = 2;
            }
		else if (p2_ship_cords[1] == '2')
            {
                p2_col = 3;
            }
		else if (p2_ship_cords[1] == '3')
            {
                p2_col = 4;
            }
		else if (p2_ship_cords[1] == '4')
            {
                p2_col = 5;
            }
		else if (p2_ship_cords[1] == '5')
            {
                p2_col = 6;
            }
		else if (p2_ship_cords[1] == '6')
            {
                p2_col = 7;
            }
		else if (p2_ship_cords[1] == '7')
            {
                p2_col = 8;
            }
		else if (p2_ship_cords[1] == '8')
            {
                p2_col = 9;
            }
		else if (p2_ship_cords[1] == '9')
            {
                p2_col = 10;
            }
    }


    void p2_memory_value_of_attack_row_col()
    {
        if (p2_attack_cords[0] == 'a')
            {
                p2_attack_row = 0;
            }
		else if (p2_attack_cords[0] == 'b')
            {
                p2_attack_row = 1;
            }
		else if (p2_attack_cords[0] == 'c')
            {
                p2_attack_row = 2;
            }
		else if (p2_attack_cords[0] == 'd')
            {
                p2_attack_row = 3;
            }
		else if (p2_attack_cords[0] == 'e')
            {
                p2_attack_row = 4;
            }
		else if (p2_attack_cords[0] == 'f')
            {
                p2_attack_row = 5;
            }
		else if (p2_attack_cords[0] == 'g')
            {
                p2_attack_row = 6;
            }
		else if (p2_attack_cords[0] == 'h')
            {
                p2_attack_row = 7;
            }
		else if (p2_attack_cords[0] == 'i')
            {
                p2_attack_row = 8;
            }
		else if (p2_attack_cords[0] == 'j')
            {
                p2_attack_row = 9;
            }

		if (p2_attack_cords[1] == '0')
            {
                p2_attack_col = 1;
            }
		else if (p2_attack_cords[1] == '1')
            {
                p2_attack_col = 2;
            }
		else if (p2_attack_cords[1] == '2')
            {
                p2_attack_col = 3;
            }
		else if (p2_attack_cords[1] == '3')
            {
                p2_attack_col = 4;
            }
		else if (p2_attack_cords[1] == '4')
            {
                p2_attack_col = 5;
            }
		else if (p2_attack_cords[1] == '5')
            {
                p2_attack_col = 6;
            }
		else if (p2_attack_cords[1] == '6')
            {
                p2_attack_col = 7;
            }
		else if (p2_attack_cords[1] == '7')
            {
                p2_attack_col = 8;
            }
		else if (p2_attack_cords[1] == '8')
            {
                p2_attack_col = 9;
            }
		else if (p2_attack_cords[1] == '9')
            {
                p2_attack_col = 10;
            }
    }
    void player1_attack_on_board()
    {
        if (p1_attack_radar[p1_attack_row][p1_attack_col] == '!' || p1_attack_radar[p1_attack_row][p1_attack_col] == '$')
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You have attacked this spot!";
            Sleep(3000);
            p1_available_attack_cord = false;
        }
        else if (p2_board[p1_attack_row][p1_attack_col] == 'D')
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p1_attack_radar[p1_attack_row][p1_attack_col] = '!';
            p2_destroyer_size--;
            p2_lifes--;
        }
        else if (p2_board[p1_attack_row][p1_attack_col] == 'S')
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p1_attack_radar[p1_attack_row][p1_attack_col] = '!';
            p2_submarine_size--;
            p2_lifes--;
        }
        else if (p2_board[p1_attack_row][p1_attack_col] == 'C')
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p1_attack_radar[p1_attack_row][p1_attack_col] = '!';
            p2_cruiser_size--;
            p2_lifes--;
        }
        else if (p2_board[p1_attack_row][p1_attack_col] == 'B')
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p1_attack_radar[p1_attack_row][p1_attack_col] = '!';
            p2_battleship_size--;
            p2_lifes--;
        }
        else if (p2_board[p1_attack_row][p1_attack_col] == 'R')
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p1_attack_radar[p1_attack_row][p1_attack_col] = '!';
            p2_carrier_size--;
            p2_lifes--;
        }
        else
        {
            show_player1_board_and_radar();
            cout<<setw(40)<<"You missed!";
            p1_attack_radar[p1_attack_row][p1_attack_col] ='$';
        }

    }
    void player2_attack_on_board()
    {
        if (p2_attack_radar[p2_attack_row][p2_attack_col] == '!' || p2_attack_radar[p2_attack_row][p2_attack_col] == '$')
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You have attacked this spot!";
            Sleep(3000);
            p2_available_attack_cord = false;
        }
        else if (p1_board[p2_attack_row][p2_attack_col] == 'D')
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p2_attack_radar[p2_attack_row][p2_attack_col] = '!';
            p1_destroyer_size--;
            p1_lifes--;
        }
        else if (p1_board[p2_attack_row][p2_attack_col] == 'S')
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p2_attack_radar[p2_attack_row][p2_attack_col] = '!';
            p1_submarine_size--;
            p1_lifes--;
        }
        else if (p1_board[p2_attack_row][p2_attack_col] == 'C')
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p2_attack_radar[p2_attack_row][p2_attack_col] = '!';
            p1_cruiser_size--;
            p1_lifes--;
        }
        else if (p1_board[p2_attack_row][p2_attack_col] == 'B')
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p2_attack_radar[p2_attack_row][p2_attack_col] = '!';
            p1_battleship_size--;
            p1_lifes--;
        }
        else if (p1_board[p2_attack_row][p2_attack_col] == 'R')
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p2_attack_radar[p2_attack_row][p2_attack_col] = '!';
            p1_carrier_size--;
            p1_lifes--;
        }
        else
        {
            show_player2_board_and_radar();
            cout<<setw(40)<<"You missed!";
            p2_attack_radar[p2_attack_row][p2_attack_col] ='$';
        }

    }

    void show_p2_board()
    {
        system("CLS");
		cout << endl << endl << endl << endl;
		cout << setw(75) <<name1<< " you have lost..." << endl << endl << endl << endl << endl << endl << endl;
		cout << setw(73) << "0 1 2 3 4 5 6 7 8 9" << endl;
		cout << setw(52) << " " << " ";
		for (int i = 0; i < 21; i++) {
			cout << " ";
		}cout << " " << endl;
		for (int i = 0; i < 10; i++) {
			cout << setw(52) << (char)a++;
			for (int j = 0; j < 12; j++) {
				if (p2_board[i][j] == '#') {
					cout << " " << " ";
				}
				else if (p2_board[i][j] == '-') {
					cout << (char)167 << " ";
				}
				else if (p2_board[i][j] == 'D') {
					cout << (char)68 << " ";
				}
				else if (p2_board[i][j] == 'S') {
					cout << (char)83 << " ";
				}
				else if (p2_board[i][j] == 'C') {
					cout << (char)67 << " ";
				}
				else if (p2_board[i][j] == 'B') {
					cout << (char)66 << " ";
				}
                else if (p2_board[i][j] == 'R') {
					cout << (char)82 << " ";
				}
			}cout << endl;
		}a = 65;
		cout << setw(52) << " " << " ";
		for (int i = 0; i < 21; i++) {
			cout << " ";
		}cout << " " << endl << endl;
		Sleep(6000);
    }
    void show_p1_board()
    {
        system("CLS");
		cout << endl << endl << endl << endl;
		cout << setw(75) <<name2<< " you have lost..." << endl << endl << endl << endl << endl << endl << endl;
		cout << setw(73) << "0 1 2 3 4 5 6 7 8 9" << endl;
		cout << setw(52) << " " << " ";
		for (int i = 0; i < 21; i++) {
			cout << " ";
		}cout << " " << endl;
		for (int i = 0; i < 10; i++) {
			cout << setw(52) << (char)a++;
			for (int j = 0; j < 12; j++) {
				if (p1_board[i][j] == '#') {
					cout << " " << " ";
				}
				else if (p1_board[i][j] == '-') {
					cout << (char)167 << " ";
				}
				else if (p1_board[i][j] == 'D') {
					cout << (char)68 << " ";
				}
				else if (p1_board[i][j] == 'S') {
					cout << (char)83 << " ";
				}
				else if (p1_board[i][j] == 'C') {
					cout << (char)67 << " ";
				}
				else if (p1_board[i][j] == 'B') {
					cout << (char)66 << " ";
				}
                else if (p1_board[i][j] == 'R') {
					cout << (char)82 << " ";
				}
			}cout << endl;
		}a = 65;
		cout << setw(52) << " " << " ";
		for (int i = 0; i < 21; i++) {
			cout << " ";
		}cout << " " << endl << endl;
		Sleep(6000);
    }

    void p1_board_clearer()
    {
        for (int i=0;i<20;i++)
        {
            for (int j=0;j<20;j++)
            {
                if (p1_board[i][j]=='D' || p1_board[i][j]=='S' || p1_board[i][j]=='C' || p1_board[i][j]=='B' || p1_board[i][j]=='R' || p2_board[i][j]=='D' || p2_board[i][j]=='S' || p2_board[i][j]=='C' || p2_board[i][j]=='B' || p2_board[i][j]=='R' || p2_board[i][j]=='!' || p2_board[i][j]=='$' || p1_attack_radar[i][j]=='!' || p1_attack_radar[i][j]=='$')
                {
                    p1_board[i][j]='-';
                    p2_board[i][j]='-';
                    p1_attack_radar[i][j]='-';
                    p2_attack_radar[i][j]='-';
                }
            }
        }
        p2_ship_number=0;
        p1_ship_numper=0;
        p2_lifes=17;
        p1_lifes=17;
        p1_destroyer_size=2;
        p1_submarine_size=3;
        p1_cruiser_size=3;
        p1_battleship_size=4;
        p1_carrier_size=5;
        p2_submarine_size=3;
        p2_cruiser_size=3;
        p2_battleship_size=4;
        p2_carrier_size=5;
    }


    void start_game()
    {
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      Press random key to start game";
        if (getch())
        {
            system("CLS");
            set_player_name();
            computer_input();
            show_player_board_and_radar();
            player_input();
            preparation_to_begin();
            player_attack();


        }
        else
        {
            system("CLS");
            exit(0);
        }
    }

    void set_player_name()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      Set your nickname: ";
        cin>>name;
    }

    void show_ships_status()
    {
        system("CLS");
        cout << setw(41)<<name << "'s Ships" <<setw(12)<< "|" << " " <<setw(29) << "Computer's Ships" << endl;
        cout<<endl<<setw(50)<<"Destroyer's life: "<<p_destroyer_size<<" "<<setw(40)<<"Destroyer's life: "<<destroyer_size;
        cout<<endl<<setw(50)<<"Submarine's life: "<<p_submarine_size<<" "<<setw(40)<<"Submarine's life: "<<submarine_size;
        cout<<endl<<setw(50)<<"Cruiser's life: "<<p_cruiser_size<<" "<<setw(40)<<"Cruiser's life: "<<cruiser_size;
        cout<<endl<<setw(50)<<"Battleship's life: "<<p_battleship_size<<" "<<setw(40)<<"Battleship's life: "<<battleship_size;
        cout<<endl<<setw(50)<<"Carrier's life: "<<p_carrier_size<<" "<<setw(40)<<"Carrier's life: "<<carrier_size;

    }


	void show_player_board_and_radar()
	{
		show_ships_status();
		for (int i = 0; i < 5; i++)
            {
			cout << endl;
		}
		cout << setw(52) << "0 1 2 3 4 5 6 7 8 9" << setw(41) << "0 1 2 3 4 5 6 7 8 9" << endl;
		cout << setw(32) << " ";
		for (int j = 0; j < 21; j++)
        {
			cout << " ";
		}
		cout << " " << setw(19) << " ";
		for (int n = 0; n < 21; n++)
        {
			cout << " ";
		}
		cout << " " << endl;
		for (int k = 0; k < 10; k++)
            {
			cout << setw(30) << (char)a++ << " ";
			for (int l = 0; l < 12; l++)
			{
				if (p_board[k][l] == '-')
                {
					cout << (char)248 << " ";
				}
				else if (p_board[k][l] == '#')
                {
					cout << " " << " ";
				}
				else if (p_board[k][l] == 'D')
				{
					cout << (char)68 << " ";
				}
				else if (p_board[k][l] == 'S')
                {
					cout << (char)83 << " ";
				}
				else if (p_board[k][l] == 'C')
                {
					cout << (char)67 << " ";
				}
				else if (p_board[k][l] == 'B')
                {
					cout << (char)66 << " ";
				}
                else if (p_board[k][l] == 'R')
                {
					cout << (char)82 << " ";
				}
				else if (p_board[k][l] == '!')
                {
					cout << (char)33 << " ";
				}
				else if (p_board[k][l] == '$')
                {
					cout << (char)237 << " ";
				}
			}
			cout << setw(17) << (char)b++;
			for (int m = 0; m < 12; m++)
			{
				if (p_attack_radar[k][m] == '-')
                {
					cout << (char)248 << " ";
				}
				else if (p_attack_radar[k][m] == '#')
                {
					cout << " " << " ";
				}
				else if (p_attack_radar[k][m] == '!')
                {
					cout << (char)33 << " ";
				}
				else if (p_attack_radar[k][m] == '$')
                {
					cout << (char)237 << " ";
				}
			}
			cout << endl;
		}
		a = 65;
		b = 65;
		cout << setw(32) << " ";
		for (int o = 0; o < 21; o++)
        {
			cout << " ";
		}
		cout << " " << setw(19) << " ";
		for (int p = 0; p < 21; p++)
            {
			cout << " ";
		}
		cout << " " << endl << endl;
	}

	void player_input()
	{
	    do
        {
            available_ship_position = true;
            if (ship_numper==0)
            {
                cout<<setw(40)<<"Give me your Destroyer's position: ";
            }
            else if (ship_numper==1)
            {
                cout<<setw(40)<<"Give me your Submarine's position: ";
            }
            else if (ship_numper==2)
            {
                cout<<setw(40)<<"Give me your Cruiser's position: ";
            }
            else if (ship_numper==3)
            {
                cout<<setw(40)<<"Give me your Battleship's position: ";
            }
            else if (ship_numper==4)
            {
                cout<<setw(40)<<"Give me your Carrier's position: ";
            }
            cin.getline(p_ship_cords, 11, '\n');
            check_correct_cords();
            show_player_board_and_radar();
            if (available_ship_position==true)
            {
                ship_numper++;
            }
        }while(!available_ship_position || ship_numper<=4);
	}

	void check_correct_cords()
	{
	    if (p_ship_cords[0]<'a' || p_ship_cords[0]>'j' || p_ship_cords[1]<'0' || p_ship_cords[1]>'9' || p_ship_cords[2]>='0')
        {
            available_ship_position = false;
            show_player_board_and_radar();
            cout<<setw(40)<<"You have put wrong cords!";
            Sleep(3000);
        }
        else
        {
            memory_value_of_row_col();
            check_for_available_cell();
        }

	}

	void check_for_available_cell()
	{
	    if (p_board[row][col] == '-')
        {
            if (ship_numper == 0)
            {
                p_board[row][col] = 'D';
            }
            else if (ship_numper==1)
            {
                p_board[row][col] = 'S';
            }
            else if (ship_numper == 2)
            {
                p_board[row][col] = 'C';
            }
            else if (ship_numper == 3)
            {
                p_board[row][col] = 'B';
            }
            else if (ship_numper == 4)
            {
                p_board[row][col] = 'R';
            }
            vertical_or_horizontal();
        }
        else
        {
            show_player_board_and_radar();
            cout<<"This spot has already been taken";
            Sleep(3000);
            available_ship_position = false;
        }
	}

	void vertical_or_horizontal()
	{
	    show_player_board_and_radar();
	    cout<<endl;
	    cout<<setw(40)<<"Wanna put it horizontally (h) or vertically (v) ?";
	    cin.getline(hv, 10, '\n');
	    if (hv[0] == 'h')
        {
            if (ship_numper == 0 && p_board[row][col+1] == '-')
                {
                    p_board[row][col+1] = 'D';
                }
            else if (ship_numper == 1 && p_board[row][col+1] == '-' && p_board[row][col+2] == '-')
            {
                p_board[row][col+1] = 'S';
                p_board[row][col+2] = 'S';
            }
            else if (ship_numper == 2 && p_board[row][col+1] == '-' && p_board[row][col+2] == '-')
            {
                p_board[row][col+1] = 'C';
                p_board[row][col+2] = 'C';
            }
            else if (ship_numper == 3 && p_board[row][col+1] == '-' && p_board[row][col+2] == '-' && p_board[row][col+3] == '-')
            {
                p_board[row][col+1] = 'B';
                p_board[row][col+2] = 'B';
                p_board[row][col+3] = 'B';
            }
            else if (ship_numper == 4 && p_board[row][col+1] == '-' && p_board[row][col+2] == '-' && p_board[row][col+3] == '-' && p_board[row][col+4] == '-')
            {
                p_board[row][col+1] = 'R';
                p_board[row][col+2] = 'R';
                p_board[row][col+3] = 'R';
                p_board[row][col+4] = 'R';
            }
            else
            {
                show_player_board_and_radar();
                cout<<setw(40)<<"There's not enough space for your ship";
                Sleep(3000);
                p_board[row][col] = '-';
                available_ship_position = false;
            }
        }
        else if (hv[0] == 'v')
        {
            if (ship_numper == 0 && p_board[row+1][col] == '-')
                {
                    p_board[row+1][col] = 'D';
                }
            else if (ship_numper == 1 && p_board[row+1][col] == '-' && p_board[row+2][col] == '-')
            {
                p_board[row+1][col] = 'S';
                p_board[row+2][col] = 'S';
            }
            else if (ship_numper == 2 && p_board[row+1][col] == '-' && p_board[row+2][col] == '-')
            {
                p_board[row+1][col] = 'C';
                p_board[row+2][col] = 'C';
            }
            else if (ship_numper == 3 && p_board[row+1][col] == '-' && p_board[row+2][col] == '-' && p_board[row+3][col] == '-')
            {
                p_board[row+1][col] = 'B';
                p_board[row+2][col] = 'B';
                p_board[row+3][col] = 'B';
            }
            else if (ship_numper == 4 && p_board[row+1][col] == '-' && p_board[row+2][col] == '-' && p_board[row+3][col] == '-' && p_board[row+4][col] == '-')
            {
                p_board[row+1][col] = 'R';
                p_board[row+2][col] = 'R';
                p_board[row+3][col] = 'R';
                p_board[row+4][col] = 'R';
            }
            else
            {
                show_player_board_and_radar();
                cout<<setw(40)<<"There's not enough space for your ship";
                Sleep(3000);
                p_board[row][col] = '-';
                available_ship_position = false;
            }
        }
        else
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You didn't choose the direction";
            Sleep(3000);
            p_board[row][col] = '-';
            available_ship_position = false;
        }
	}

	void preparation_to_begin()
	{
	    system("CLS");
	    for (int i=5;i>0;i--)
        {
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      Get ready for the battle ("<<i<<")";
            Sleep(1000);
            system("CLS");
        }
	}


    void computer_input()
    {
        do{
        available_c_ship_position=true;
        srand(time(0));
        computer_row = rand() % 11;
        computer_col = rand() % 11;
        check_computers_position();
        if (available_c_ship_position == true)
        {
            c_ship_number++;
        }
        }while (c_ship_number<=4 || !available_c_ship_position);

        system("CLS");
        cout<<setw(40)<<"Computer is ready for the battle!";
        Sleep(3000);
        system("CLS");

    }

    void check_computers_position()
    {
        if (c_board[computer_row][computer_col] == '-')
        {
            if (c_ship_number == 0)
            {
                c_board[computer_row][computer_col] = 'D';
            }
            else if (c_ship_number==1)
            {
                c_board[computer_row][computer_col] = 'S';
            }
            else if (c_ship_number==2)
            {
                c_board[computer_row][computer_col] = 'C';
            }
            else if (c_ship_number==3)
            {
                c_board[computer_row][computer_col] = 'B';
            }
            else if (c_ship_number==4)
            {
                c_board[computer_row][computer_col] = 'R';
            }
            computer_random_hv();
        }
        else
        {
            available_c_ship_position = false;
        }
    }

    void computer_random_hv()
    {
        computer_hv = 1+rand()%2;
        if (computer_hv == 1)
        {
            if (c_ship_number == 0 && c_board[computer_row][computer_col+1]=='-')
            {
                c_board[computer_row][computer_col+1] = 'D';
            }
            else if (c_ship_number==1 && c_board[computer_row][computer_col+1]=='-' && c_board[computer_row][computer_col+2]=='-')
            {
                c_board[computer_row][computer_col+1] = 'S';
                c_board[computer_row][computer_col+2] = 'S';
            }
            else if (c_ship_number==2 && c_board[computer_row][computer_col+1]=='-' && c_board[computer_row][computer_col+2]=='-')
            {
                c_board[computer_row][computer_col+1] = 'C';
                c_board[computer_row][computer_col+2] = 'C';
            }
            else if (c_ship_number==3 && c_board[computer_row][computer_col+1]=='-' && c_board[computer_row][computer_col+2]=='-' && c_board[computer_row][computer_col+3]=='-')
            {
                c_board[computer_row][computer_col+1] = 'B';
                c_board[computer_row][computer_col+2] = 'B';
                c_board[computer_row][computer_col+3] = 'B';
            }
            else if (c_ship_number==4 && c_board[computer_row][computer_col+1]=='-' && c_board[computer_row][computer_col+2]=='-' && c_board[computer_row][computer_col+3]=='-' && c_board[computer_row][computer_col+4]=='-')
            {
                c_board[computer_row][computer_col+1] = 'R';
                c_board[computer_row][computer_col+2] = 'R';
                c_board[computer_row][computer_col+3] = 'R';
                c_board[computer_row][computer_col+4] = 'R';
            }
            else
            {
                c_board[computer_row][computer_col]= '-';
                available_c_ship_position = false;
            }
        }
        else if (computer_hv == 2)
        {
            if (c_ship_number == 0 && c_board[computer_row+1][computer_col]=='-')
            {
                c_board[computer_row+1][computer_col] = 'D';
            }
            else if (c_ship_number==1 && c_board[computer_row+1][computer_col]=='-' && c_board[computer_row+2][computer_col]=='-')
            {
                c_board[computer_row+1][computer_col] = 'S';
                c_board[computer_row+2][computer_col] = 'S';
            }
            else if (c_ship_number==2 && c_board[computer_row+1][computer_col]=='-' && c_board[computer_row+2][computer_col]=='-')
            {
                c_board[computer_row+1][computer_col] = 'C';
                c_board[computer_row+2][computer_col] = 'C';
            }
            else if (c_ship_number==3 && c_board[computer_row+1][computer_col]=='-' && c_board[computer_row+2][computer_col]=='-' && c_board[computer_row+3][computer_col]=='-')
            {
                c_board[computer_row+1][computer_col] = 'B';
                c_board[computer_row+2][computer_col] = 'B';
                c_board[computer_row+3][computer_col] = 'B';
            }
            else if (c_ship_number==4 && c_board[computer_row+1][computer_col]=='-' && c_board[computer_row+2][computer_col]=='-' && c_board[computer_row+3][computer_col]=='-' && c_board[computer_row+4][computer_col]=='-')
            {
                c_board[computer_row+1][computer_col] = 'R';
                c_board[computer_row+2][computer_col] = 'R';
                c_board[computer_row+3][computer_col] = 'R';
                c_board[computer_row+4][computer_col] = 'R';
            }
            else
            {
                c_board[computer_row][computer_col]= '-';
                available_c_ship_position = false;
            }
        }
        system("CLS");

    }

    void player_attack()
    {
        do
        {
            available_attack_cord = true;
            show_player_board_and_radar();
            cout<<setw(40)<<"Attack cords: ";
            cin.getline(p_attack_cords, 10, '\n');
            check_attack_cords();
            if (computer_lifes==0)
            {
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<setw(40)<<name<<" you have defeated your enemy!";
                cout<<endl<<setw(40)<<"Congratulations!!!!";
                exit_exit();
            }
            else if (available_attack_cord == true)
            {
                Sleep(3000);
                show_player_board_and_radar();
                computer_attack();
            }
        } while (!available_attack_cord || computer_lifes>0);
    }

    void check_attack_cords()
    {
        if (p_attack_cords[0]<'a' || p_attack_cords[0]>'j' || p_attack_cords[1]<'0' || p_attack_cords[1]>'9' || p_attack_cords[2]>='0')
        {
            available_attack_cord = false;
            system("CLS");
            show_player_board_and_radar();
            cout<<setw(40)<<"You have put wrong cords !";
            Sleep(3000);

        }
        else
        {
            memory_value_of_attack_row_col();
            player_attack_on_board();
        }
    }


    void memory_value_of_row_col()
    {

		if (p_ship_cords[0] == 'a')
            {
                row = 0;
            }
		else if (p_ship_cords[0] == 'b')
            {
                row = 1;
            }
		else if (p_ship_cords[0] == 'c')
            {
                row = 2;
            }
		else if (p_ship_cords[0] == 'd')
            {
                row = 3;
            }
		else if (p_ship_cords[0] == 'e')
            {
                row = 4;
            }
		else if (p_ship_cords[0] == 'f')
            {
                row = 5;
            }
		else if (p_ship_cords[0] == 'g')
            {
                row = 6;
            }
		else if (p_ship_cords[0] == 'h')
            {
                row = 7;
            }
		else if (p_ship_cords[0] == 'i')
            {
                row = 8;
            }
		else if (p_ship_cords[0] == 'j')
            {
                row = 9;
            }

		if (p_ship_cords[1] == '0')
            {
                col = 1;
            }
		else if (p_ship_cords[1] == '1')
            {
                col = 2;
            }
		else if (p_ship_cords[1] == '2')
            {
                col = 3;
            }
		else if (p_ship_cords[1] == '3')
            {
                col = 4;
            }
		else if (p_ship_cords[1] == '4')
            {
                col = 5;
            }
		else if (p_ship_cords[1] == '5')
            {
                col = 6;
            }
		else if (p_ship_cords[1] == '6')
            {
                col = 7;
            }
		else if (p_ship_cords[1] == '7')
            {
                col = 8;
            }
		else if (p_ship_cords[1] == '8')
            {
                col = 9;
            }
		else if (p_ship_cords[1] == '9')
            {
                col = 10;
            }
    }


    void memory_value_of_attack_row_col()
    {
        if (p_attack_cords[0] == 'a')
            {
                attack_row = 0;
            }
		else if (p_attack_cords[0] == 'b')
            {
                attack_row = 1;
            }
		else if (p_attack_cords[0] == 'c')
            {
                attack_row = 2;
            }
		else if (p_attack_cords[0] == 'd')
            {
                attack_row = 3;
            }
		else if (p_attack_cords[0] == 'e')
            {
                attack_row = 4;
            }
		else if (p_attack_cords[0] == 'f')
            {
                attack_row = 5;
            }
		else if (p_attack_cords[0] == 'g')
            {
                attack_row = 6;
            }
		else if (p_attack_cords[0] == 'h')
            {
                attack_row = 7;
            }
		else if (p_attack_cords[0] == 'i')
            {
                attack_row = 8;
            }
		else if (p_attack_cords[0] == 'j')
            {
                attack_row = 9;
            }

		if (p_attack_cords[1] == '0')
            {
                attack_col = 1;
            }
		else if (p_attack_cords[1] == '1')
            {
                attack_col = 2;
            }
		else if (p_attack_cords[1] == '2')
            {
                attack_col = 3;
            }
		else if (p_attack_cords[1] == '3')
            {
                attack_col = 4;
            }
		else if (p_attack_cords[1] == '4')
            {
                attack_col = 5;
            }
		else if (p_attack_cords[1] == '5')
            {
                attack_col = 6;
            }
		else if (p_attack_cords[1] == '6')
            {
                attack_col = 7;
            }
		else if (p_attack_cords[1] == '7')
            {
                attack_col = 8;
            }
		else if (p_attack_cords[1] == '8')
            {
                attack_col = 9;
            }
		else if (p_attack_cords[1] == '9')
            {
                attack_col = 10;
            }
    }

    void memory_computer_cords()
    {
        if (c_attack_row==0)
        {
            first_computer_cord='a';
        }
        else if (c_attack_row==1)
        {
            first_computer_cord='b';
        }
        else if (c_attack_row==2)
        {
            first_computer_cord='c';
        }
        else if (c_attack_row==3)
        {
            first_computer_cord='d';
        }
        else if (c_attack_row==4)
        {
            first_computer_cord='e';
        }
        else if (c_attack_row==5)
        {
            first_computer_cord='f';
        }
        else if (c_attack_row==6)
        {
            first_computer_cord='g';
        }
        else if (c_attack_row==7)
        {
            first_computer_cord='h';
        }
        else if (c_attack_row==8)
        {
            first_computer_cord='i';
        }
        else if (c_attack_row==9)
        {
            first_computer_cord='j';
        }
    }
    void player_attack_on_board()
    {
        if (p_attack_radar[attack_row][attack_col] == '!' || p_attack_radar[attack_row][attack_col] == '$')
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You have attacked this spot!";
            Sleep(3000);
            available_attack_cord = false;
        }
        else if (c_board[attack_row][attack_col] == 'D')
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p_attack_radar[attack_row][attack_col] = '!';
            destroyer_size--;
            computer_lifes--;
        }
        else if (c_board[attack_row][attack_col] == 'S')
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p_attack_radar[attack_row][attack_col] = '!';
            submarine_size--;
            computer_lifes--;
        }
        else if (c_board[attack_row][attack_col] == 'C')
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p_attack_radar[attack_row][attack_col] = '!';
            cruiser_size--;
            computer_lifes--;
        }
        else if (c_board[attack_row][attack_col] == 'B')
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p_attack_radar[attack_row][attack_col] = '!';
            battleship_size--;
            computer_lifes--;
        }
        else if (c_board[attack_row][attack_col] == 'R')
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You hit enemy's ship";
            p_attack_radar[attack_row][attack_col] = '!';
            carrier_size--;
            computer_lifes--;
        }
        else
        {
            show_player_board_and_radar();
            cout<<setw(40)<<"You missed!";
            p_attack_radar[attack_row][attack_col] ='$';
        }

    }
    void show_computer_board()
    {
        system("CLS");
		cout << endl << endl << endl << endl;
		cout << setw(75) << "You have lost..." << endl << endl << endl << endl << endl << endl << endl;
		cout << setw(73) << "0 1 2 3 4 5 6 7 8 9" << endl;
		cout << setw(52) << " " << " ";
		for (int i = 0; i < 21; i++) {
			cout << " ";
		}cout << " " << endl;
		for (int i = 0; i < 10; i++) {
			cout << setw(52) << (char)a++;
			for (int j = 0; j < 12; j++) {
				if (c_board[i][j] == '#') {
					cout << " " << " ";
				}
				else if (c_board[i][j] == '-') {
					cout << (char)167 << " ";
				}
				else if (c_board[i][j] == 'D') {
					cout << (char)68 << " ";
				}
				else if (c_board[i][j] == 'S') {
					cout << (char)83 << " ";
				}
				else if (c_board[i][j] == 'C') {
					cout << (char)67 << " ";
				}
				else if (c_board[i][j] == 'B') {
					cout << (char)66 << " ";
				}
                else if (c_board[i][j] == 'R') {
					cout << (char)82 << " ";
				}
			}cout << endl;
		}a = 65;
		cout << setw(52) << " " << " ";
		for (int i = 0; i < 21; i++) {
			cout << " ";
		}cout << " " << endl << endl;
		Sleep(6000);
    }

    void computer_attack()
    {
        do
        {
            available_c_attack_cord=true;
            c_attack_row=rand()%11;
            c_attack_col=rand()%11;

            if (destroyerHit == true)
            {
                if (p_board[c_attack_row][c_attack_col] == 'D')
                {
                    computer_attack_board();
                }
                else
                {
                    available_c_attack_cord=false;
                }
            }
            else if (submarineHit == true)
            {
                if (p_board[c_attack_row][c_attack_col] == 'S')
                {
                    computer_attack_board();
                }
                else
                {
                    available_c_attack_cord=false;
                }
            }
            else if (cruiserHit==true)
            {
                if (p_board[c_attack_row][c_attack_col] == 'C')
                {
                    computer_attack_board();
                }
                else
                {
                    available_c_attack_cord=false;
                }
            }
            else if (battleshipHit==true)
            {
                if (p_board[c_attack_row][c_attack_col] == 'B')
                {
                    computer_attack_board();
                }
                else
                {
                    available_c_attack_cord=false;
                }
            }
            else if (carrierHit==true)
            {
                if (p_board[c_attack_row][c_attack_col] == 'R')
                {
                    computer_attack_board();
                }
                else
                {
                    available_c_attack_cord=false;
                }
            }

            if (destroyerHit==false && submarineHit == false && cruiserHit==false && battleshipHit==false && carrierHit==false)
            {
                computer_attack_board();
            }
        }while (!available_c_attack_cord || player_lifes>0);
    }

    void computer_attack_board()
    {
        memory_computer_cords();
        if (p_board[c_attack_row][c_attack_col]=='D')
        {
            cout<<setw(40)<<"Computer has hit you";
            destroyerHit=true;
            p_board[c_attack_row][c_attack_col]='!';
            p_destroyer_size--;
            player_lifes--;
        }
        else if (p_board[c_attack_row][c_attack_col]=='S')
        {
            cout<<setw(40)<<"Computer has hit you";
            submarineHit=true;
            p_board[c_attack_row][c_attack_col]='!';
            p_submarine_size--;
            player_lifes--;
        }
        else if (p_board[c_attack_row][c_attack_col]=='C')
        {
            cout<<setw(40)<<"Computer has hit you";
            cruiserHit=true;
            p_board[c_attack_row][c_attack_col]='!';
            p_cruiser_size--;
            player_lifes--;
        }
        else if (p_board[c_attack_row][c_attack_col]=='B')
        {
            cout<<setw(40)<<"Computer has hit you";
            battleshipHit=true;
            p_board[c_attack_row][c_attack_col]='!';
            p_battleship_size--;
            player_lifes--;
        }
        else if (p_board[c_attack_row][c_attack_col]=='R')
        {
            cout<<setw(40)<<"Computer has hit you";
            carrierHit=true;
            p_board[c_attack_row][c_attack_col]='!';
            p_carrier_size--;
            player_lifes--;
        }
        else if (p_board[c_attack_row][c_attack_col] == '-')
        {
            cout<<setw(40)<<"Computer missed!";
            p_board[c_attack_row][c_attack_col]='$';
        }
        else
        {
            available_c_attack_cord=false;
        }
        clear_hit();
        if (player_lifes==0)
        {
            system("CLS");
            cout<<setw(40)<<"COMPUTER WINS!";
            show_computer_board();
            exit_exit();
        }
        else if (available_c_attack_cord==true)
        {
            Sleep(3000);
            player_attack();
        }
    }

    void clear_hit()
    {
        if (p_destroyer_size==0)
        {
            destroyerHit=false;
        }

        if (p_submarine_size==0)
        {
            submarineHit=false;
        }

        if (p_cruiser_size==0)
        {
            cruiserHit=false;
        }

        if (p_battleship_size==0)
        {
            battleshipHit=false;
        }

        if (p_carrier_size==0)
        {
            carrierHit=false;
        }
    }

    void board_clearer()
    {
        for (int i=0;i<20;i++)
        {
            for (int j=0;j<20;j++)
            {
                if (p_board[i][j]=='D' || p_board[i][j]=='S' || p_board[i][j]=='C' || p_board[i][j]=='B' || p_board[i][j]=='R' || c_board[i][j]=='D' || c_board[i][j]=='S' || c_board[i][j]=='C' || c_board[i][j]=='B' || c_board[i][j]=='R' || p_board[i][j]=='!' || p_board[i][j]=='$' || p_attack_radar[i][j]=='!' || p_attack_radar[i][j]=='$')
                {
                    p_board[i][j]='-';
                    c_board[i][j]='-';
                    p_attack_radar[i][j]='-';
                }
            }
        }
        c_ship_number=0;
        ship_numper=0;
        computer_lifes=17;
        player_lifes=17;
        destroyer_size=2;
        submarine_size=3;
        cruiser_size=3;
        battleship_size=4;
        carrier_size=5;
        p_submarine_size=3;
        p_cruiser_size=3;
        p_battleship_size=4;
        p_carrier_size=5;
    }

    void exit_exit()
    {
        int a=0;
        do{
        system("CLS");
        Sleep(5000);
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<setw(40)<<"Wanna exit (y) or play again (n) ?";
        char choose;
        choose = getch();
        if (choose == 'y' )
        {
            a=1;
            system("CLS");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<setw(40)<<"Thanks for playing my game :)";
            exit(0);
        }
        else if (choose == 'n')
        {
            system("CLS");
            board_clearer();
            start_game();
        }
        else
        {
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<setw(40)<<"You have chosen nothing";
        }
        }while(a==0);
    }
    void p1_wait()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<setw(40)<<"It's "<<name1<<"'s turn. "<<name2<<" don't look on the screen for a while!";
        Sleep(5000);
    }
    void p2_wait()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<setw(40)<<"It's "<<name2<<"'s turn. "<<name1<<" don't look on the screen for a while!";
        Sleep(5000);
    }
    void p1_begin_wait()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<setw(40)<<"It's "<<name1<<"'s turn. Put your ships on the board";
        cout<<endl<<setw(40)<<"Make sure that "<<name2<<" is not looking on your board!";
        Sleep(6000);

    }
    void p2_begin_wait()
    {
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<setw(40)<<"It's "<<name2<<"'s turn. Put your ships on the board";
        cout<<endl<<setw(40)<<"Make sure that "<<name1<<" is not looking on your board!";
        Sleep(6000);

    }



};




int main()
{
    Battleships object;
    object.options();
    return 0;
}
