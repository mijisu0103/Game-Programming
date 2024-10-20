#include <iostream>
#include <Windows.h>
#include <conio.h>

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4


using namespace std;

void gotoxy(int x, int y);
void Init();
void kInit();
void MainTitle();
void kMainTitle();
int Menu();
int kMenu();
int kmain();
int KeyControl();

int main()
{
	Init();
	while (true)
	{
	Maintitle:
		MainTitle();
		int menuNum = Menu();

		if (menuNum == 0)
		{
			int cnt = 0;
			int result[3] = { 0 };
			int scom;
			int ncom;
			int suser;
			int nuser;
			int uinput;
			int uinput2;
			int uinput3;

			srand((unsigned)time(NULL));

			while (true)
			{
				system("cls");
				int x = 30;
				int y = 0;

				gotoxy(x + 4, y);
				cout << "Let's start.";
				gotoxy(x + 1, y + 1);
				cout << "Here are my cards: ";

				Sleep(500);

				gotoxy(x - 8, y + 3);
				cout << "┌────┐";
				gotoxy(x - 8, y + 4);
				cout << "│    │";
				gotoxy(x - 8, y + 5);
				cout << "│    │";
				gotoxy(x - 8, y + 6);
				cout << "│    │";
				gotoxy(x - 8, y + 7);
				cout << "└────┘";
				gotoxy(x - 8, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 2, y + 3);
				cout << "┌────┐";
				gotoxy(x + 2, y + 4);
				cout << "│    │";
				gotoxy(x + 2, y + 5);
				cout << "│    │";
				gotoxy(x + 2, y + 6);
				cout << "│    │";
				gotoxy(x + 2, y + 7);
				cout << "└────┘";
				gotoxy(x + 2, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 12, y + 3);
				cout << "┌────┐";
				gotoxy(x + 12, y + 4);
				cout << "│    │";
				gotoxy(x + 12, y + 5);
				cout << "│    │";
				gotoxy(x + 12, y + 6);
				cout << "│    │";
				gotoxy(x + 12, y + 7);
				cout << "└────┘";
				gotoxy(x + 12, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 22, y + 3);
				cout << "┌────┐";
				gotoxy(x + 22, y + 4);
				cout << "│    │";
				gotoxy(x + 22, y + 5);
				cout << "│    │";
				gotoxy(x + 22, y + 6);
				cout << "│    │";
				gotoxy(x + 22, y + 7);
				cout << "└────┘";
				gotoxy(x + 23, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x - 9, y + 9);
				cout << "=======================================";

				Sleep(1000);

				gotoxy(x + 22, y + 10);
				cout << endl;

				gotoxy(x, y + 11);
				cout << "Here are your cards: ";

				Sleep(1000);

				gotoxy(x - 8, y + 13);
				cout << "┌────┐";
				gotoxy(x - 8, y + 14);
				cout << "│    │";
				gotoxy(x - 8, y + 15);
				cout << "│    │";
				gotoxy(x - 8, y + 16);
				cout << "│    │";
				gotoxy(x - 8, y + 17);
				cout << "└────┘";
				gotoxy(x - 8, y + 18);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 2, y + 13);
				cout << "┌────┐";
				gotoxy(x + 2, y + 14);
				cout << "│    │";
				gotoxy(x + 2, y + 15);
				cout << "│    │";
				gotoxy(x + 2, y + 16);
				cout << "│    │";
				gotoxy(x + 2, y + 17);
				cout << "└────┘";
				gotoxy(x + 2, y + 18);
				cout << endl;


				Sleep(1000);

				gotoxy(x + 12, y + 13);
				cout << "┌────┐";
				gotoxy(x + 12, y + 14);
				cout << "│    │";
				gotoxy(x + 12, y + 15);
				cout << "│    │";
				gotoxy(x + 12, y + 16);
				cout << "│    │";
				gotoxy(x + 12, y + 17);
				cout << "└────┘";
				gotoxy(x + 12, y + 18);
				cout << endl;


				Sleep(1000);

				gotoxy(x + 22, y + 13);
				cout << "┌────┐";
				gotoxy(x + 22, y + 14);
				cout << "│    │";
				gotoxy(x + 22, y + 15);
				cout << "│    │";
				gotoxy(x + 22, y + 16);
				cout << "│    │";
				gotoxy(x + 22, y + 17);
				cout << "└────┘";
				gotoxy(x + 22, y + 18);
				cout << endl;

				Sleep(500);

				gotoxy(x - 15, y + 19);
				cout << "From the left to right, cards are numbered from 1 to 4.";
				gotoxy(x - 5, y + 20);
				cout << "I'd choose one for myself, so do you.";
				gotoxy(x - 20, y + 21);
				cout << "Choose one for yourself (cannot change as soon as you choose one)";
				gotoxy(x - 15, y + 22);
				cout << "To do so, type a number to choose a card for yourself:";
				cin >> uinput;

				if (uinput >= 1 && uinput <= 4)
				{
					gotoxy(x - 2, y + 23);
					cout << "You chose card number: " << uinput;
					gotoxy(x + 10, y + 24);
					cout << endl;

					system("pause");
				}
				else
				{
					gotoxy(x - 5, y + 23);
					cout << "You chose wrong number! Choose again : ";
					cin >> uinput;
					gotoxy(x - 5, y + 23);
					cout << "                                                                    ";
					gotoxy(x - 2, y + 23);
					cout << "You chose card number: " << uinput;
					gotoxy(x + 10, y + 24);
					cout << endl;

					system("pause");
				}

				system("cls");

				cnt++;

				scom = rand() % 4;	ncom = rand() % 13;
				suser = rand() % 4;	nuser = rand() % 13;

				gotoxy(x + 2, y);
				cout << "We both chose one.";
				gotoxy(x - 18, y + 1);
				cout << "It is time to reveal our cards to see who's the winner.";

				Sleep(1000);

				gotoxy(x - 8, y + 4);
				printf("┌─────────────────────────────────┐");
				gotoxy(x - 8, y + 5);
				printf("│                                 │");
				gotoxy(x - 8, y + 6);
				printf("│                                 │");
				gotoxy(x - 8, y + 7);
				printf("│                                 │");
				gotoxy(x - 8, y + 8);
				printf("└─────────────────────────────────┘");

				Sleep(1000);

				gotoxy(x + 4, y + 5);
				printf("I picked %s%s.", scom == 0 ? "♧" : scom == 1 ? "♥" :
					scom == 2 ? "◆" : "♤",
					ncom == 0 ? "2" : ncom == 1 ? "3" : ncom == 2 ? "4" : ncom == 3 ? "5"
					: ncom == 4 ? "6" : ncom == 5 ? "7" : ncom == 6 ? "8" : ncom == 7 ? "9"
					: ncom == 8 ? "10" : ncom == 9 ? "J" : ncom == 10 ? "Q" : ncom == 11 ? "K" : "A");

				gotoxy(x + 3, y + 7);
				printf("You picked %s%s.", suser == 0 ? "♧" : suser == 1 ? "♥" :
					suser == 2 ? "◆" : "♤",
					nuser == 0 ? "2" : nuser == 1 ? "3" : nuser == 2 ? "4" : nuser == 3 ? "5"
					: nuser == 4 ? "6" : nuser == 5 ? "7" : nuser == 6 ? "8" : nuser == 7 ? "9"
					: nuser == 8 ? "10" : nuser == 9 ? "J" : nuser == 10 ? "Q" : nuser == 11 ? "K" : "A");

				cout << endl;

				if (scom == suser)
				{
					if (ncom > nuser)
					{
						gotoxy(x - 6, y + 10);
						cout << "Almost close, but you just lost!";
						++result[2];
					}
					else if (ncom == nuser)
					{
						gotoxy(x - 3, y + 10);
						cout << "What a destiny! It's a draw.";
						++result[1];
					}
					else
					{
						gotoxy(x - 14, y + 10);
						cout << "Hate to admit that you won, but congratulations!";
						++result[0];
					}

				}
				else if (scom > suser)
				{
					gotoxy(x - 1, y + 10);
					cout << "What a shame! You lost.";
					++result[2];
				}
				else if (scom < suser)
				{
					gotoxy(x - 6, y + 10);
					cout << "Look, how lucky you are! You won.";
					++result[0];
				}
				gotoxy(x - 8, y + 23);
				printf("Played: %d, Won: %d, Drawn: %d, Lost: %d \n\n",
					cnt, result[0], result[1], result[2]);

				system("pause");
				system("cls");

				cout << endl;
				gotoxy(x - 9, y + 10);
				cout << "If you would like to continue, press 1." << endl;
				gotoxy(x - 10, y + 11);
				cout << "If you would like to return Menu, press 2." << endl;
				cin >> uinput2;

				if (uinput2 == 1)
				{
					continue;
				}
				else if (uinput2 == 2)
				{
					break;
				}
				else
				{
					gotoxy(x - 4, y + 13);
					cout << "You typed wrong number, dude. ";
					gotoxy(x + 8, y + 14);
					cout << "Type 1 or 2. ";
					cin >> uinput2;
				}



			}

		}
		else if (menuNum == 1)
		{
			system("cls");

			int hx = 30;
			int hy = 1;

			gotoxy(hx, hy);
			cout << "How to play this game: " << endl;
			gotoxy(hx, hy + 1);
			cout << endl;
			gotoxy(hx - 5, hy + 2);
			cout << "Welcome to \'For The Sake of Luck\'. " << endl;
			gotoxy(hx - 25, hy + 3);
			cout << "Before we begin, I suppose you already know how playing cards look like. " << endl;
			gotoxy(hx - 20, hy + 4);
			cout << "(What I mean by playing cards is the 52-standard cards deck.) " << endl;
			gotoxy(hx - 25, hy + 5);
			cout << "The 52-standard cards deck consists of four French suits: ♤, ◆, ♥, ♧." << endl;
			gotoxy(hx - 29, hy + 6);
			cout << "Then, each suit consists of numbers from 2 to 10, plus, four court cards: " << endl;
			gotoxy(hx - 5, hy + 7);
			cout << "Ace, King, Queen, and Jack." << endl;
			gotoxy(hx - 20, hy + 8);
			cout << "Done with cards description, and now time to explain a rule. " << endl << endl;
			gotoxy(hx + 8, hy + 10);
			cout << "Rule: " << endl;
			gotoxy(hx - 15, hy + 11);
			cout << "There is a rank for shapes, numbers and court cards." << endl;
			gotoxy(hx - 12, hy + 12);
			cout << "For shapes: ♤ > ◆ > ♥ > ♧" << endl;
			gotoxy(hx - 12, hy + 13);
			cout << "For numbers: A > K > Q > J > 10 > 9 > ... > 3 > 2" << endl;
			gotoxy(hx - 17, hy + 14);
			cout << "Uhm, right! Similar to poker, but this ain't poker, child." << endl << endl;
			gotoxy(hx, hy + 16);
			cout << "How to win this game: " << endl;
			gotoxy(hx - 25, hy + 17);
			cout << "Easy peasy, man! You just have to pick a card with higher rank shape." << endl;
			gotoxy(hx - 30, hy + 18);
			cout << "If you pick the same shape card with me, then we look at court cards & numbers." << endl;
			gotoxy(hx - 15, hy + 19);
			cout << "Then, boom! We will know who's the winner of this game." << endl;
			gotoxy(hx - 10, hy + 20);
			cout << "The winner wins only based on luck itself!" << endl;
			gotoxy(hx + 2, hy + 21);
			cout << "Isn't this fair?" << endl;

			system("pause");
		}
		else if (menuNum == 2)
		{
			while (true)
			{
				system("cls");

				int x = 30;
				int y = 8;
				int uinput3;

				gotoxy(x + 8, y);
				printf("Settings");
				gotoxy(x + 4, y + 2);
				printf(" 1. Dev Info ");
				gotoxy(x + 4, y + 3);
				printf(" 2. Enquiry ");
				gotoxy(x + 4, y + 4);
				printf(" 3. Language ");
				gotoxy(x + 4, y + 5);
				printf(" 4. Main Menu");

				gotoxy(x - 10, y + 10);
				cout << "Type a number from 1 to 4 to change settings: ";
				cin >> uinput3;
				//system("pause");

				if (uinput3 == 1)
				{
					system("cls");
					gotoxy(x, y);
					printf("Developer: JS");
					gotoxy(x - 2, y + 1);
					printf("Version: 1.0.0 Beta");
					gotoxy(x - 10, y + 3);
					printf("Press any key to return Main Menu\n");
					system("pause");
				}
				else if (uinput3 == 2)
				{
					system("cls");
					gotoxy(x - 20, y);
					printf("If you have any enquiry, please do not hesitate to send us an email:");
					gotoxy(x, y + 1);
					printf("zhelddmsenxhd8@gmail.com");
					system("pause");

				}
				else if (uinput3 == 3)
				{
					system("cls");
					int uinputl;
					gotoxy(x - 5, y);
					printf("Available Language at the moment:");
					gotoxy(x + 8, y + 2);
					printf("1. English");
					gotoxy(x + 8, y + 3);
					printf("2. 한국어");
					gotoxy(x - 10, y + 5);
					printf("To change language, please enter a number: ");
					cin >> uinputl;

					if (uinputl == 1)
					{
						printf("\n");
						printf("		You chose the same language, hence there won't be a change. ");
						system("pause");
					}
					else if (uinputl == 2)
					{
						cout << endl;
						int uinputls;
						printf("            Are you sure you would like to change English to Korean? \n");
						printf("                   If yes, type 1. To reconsider, type 0.");
						cin >> uinputls;

						if (uinputls == 1)
						{
							kmain();
						}
						else if (uinputls == 0)
						{
							continue;
						}
					}

				}
				else if (uinput3 == 4)
				{
					break;
				}
				else
				{
					cout << "Typed wrong number!" << endl;
					cout << "Please, type a number from 1 to 4 again.";
				}
			}


		}
		else if (menuNum == 3)
		{
			exit(0);
		}

		system("cls");
	}
}

int kmain()
{
	kInit();
	while (true)
	{
	kMaintitle:
		kMainTitle();
		int menuNum = kMenu();

		if (menuNum == 0)
		{
			int cnt = 0;
			int result[3] = { 0 };
			int scom;
			int ncom;
			int suser;
			int nuser;
			int uinput;
			int uinput2;
			int uinput3;

			srand((unsigned)time(NULL));

			while (true)
			{
				system("cls");
				int x = 30;
				int y = 0;

				gotoxy(x - 1, y);
				cout << "게임을 시작하도록 하지.";
				gotoxy(x - 2, y + 1);
				cout << "이 4장은 나의 카드들이고, ";

				Sleep(500);

				gotoxy(x - 8, y + 3);
				cout << "┌────┐";
				gotoxy(x - 8, y + 4);
				cout << "│    │";
				gotoxy(x - 8, y + 5);
				cout << "│    │";
				gotoxy(x - 8, y + 6);
				cout << "│    │";
				gotoxy(x - 8, y + 7);
				cout << "└────┘";
				gotoxy(x - 8, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 2, y + 3);
				cout << "┌────┐";
				gotoxy(x + 2, y + 4);
				cout << "│    │";
				gotoxy(x + 2, y + 5);
				cout << "│    │";
				gotoxy(x + 2, y + 6);
				cout << "│    │";
				gotoxy(x + 2, y + 7);
				cout << "└────┘";
				gotoxy(x + 2, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 12, y + 3);
				cout << "┌────┐";
				gotoxy(x + 12, y + 4);
				cout << "│    │";
				gotoxy(x + 12, y + 5);
				cout << "│    │";
				gotoxy(x + 12, y + 6);
				cout << "│    │";
				gotoxy(x + 12, y + 7);
				cout << "└────┘";
				gotoxy(x + 12, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 22, y + 3);
				cout << "┌────┐";
				gotoxy(x + 22, y + 4);
				cout << "│    │";
				gotoxy(x + 22, y + 5);
				cout << "│    │";
				gotoxy(x + 22, y + 6);
				cout << "│    │";
				gotoxy(x + 22, y + 7);
				cout << "└────┘";
				gotoxy(x + 23, y + 8);
				cout << endl;

				Sleep(1000);

				gotoxy(x - 9, y + 9);
				cout << "=========================================";

				Sleep(1000);

				gotoxy(x + 22, y + 10);
				cout << endl;

				gotoxy(x - 8, y + 11);
				cout << "여기 4장의 카드들은 당신의 카드들이라네. ";

				Sleep(1000);

				gotoxy(x - 8, y + 13);
				cout << "┌────┐";
				gotoxy(x - 8, y + 14);
				cout << "│    │";
				gotoxy(x - 8, y + 15);
				cout << "│    │";
				gotoxy(x - 8, y + 16);
				cout << "│    │";
				gotoxy(x - 8, y + 17);
				cout << "└────┘";
				gotoxy(x - 8, y + 18);
				cout << endl;

				Sleep(1000);

				gotoxy(x + 2, y + 13);
				cout << "┌────┐";
				gotoxy(x + 2, y + 14);
				cout << "│    │";
				gotoxy(x + 2, y + 15);
				cout << "│    │";
				gotoxy(x + 2, y + 16);
				cout << "│    │";
				gotoxy(x + 2, y + 17);
				cout << "└────┘";
				gotoxy(x + 2, y + 18);
				cout << endl;


				Sleep(1000);

				gotoxy(x + 12, y + 13);
				cout << "┌────┐";
				gotoxy(x + 12, y + 14);
				cout << "│    │";
				gotoxy(x + 12, y + 15);
				cout << "│    │";
				gotoxy(x + 12, y + 16);
				cout << "│    │";
				gotoxy(x + 12, y + 17);
				cout << "└────┘";
				gotoxy(x + 12, y + 18);
				cout << endl;


				Sleep(1000);

				gotoxy(x + 22, y + 13);
				cout << "┌────┐";
				gotoxy(x + 22, y + 14);
				cout << "│    │";
				gotoxy(x + 22, y + 15);
				cout << "│    │";
				gotoxy(x + 22, y + 16);
				cout << "│    │";
				gotoxy(x + 22, y + 17);
				cout << "└────┘";
				gotoxy(x + 22, y + 18);
				cout << endl;

				Sleep(500);

				gotoxy(x - 25, y + 19);
				cout << "맨왼쪽 카드부터 시작해서 각 카드에는 1번부터 4번까지 번호가 붙여져있다네.";
				gotoxy(x - 7, y + 20);
				cout << "나는 곧 이중에 한 장의 카드를 고를 것이야.";
				gotoxy(x - 23, y + 21);
				cout << "당신 역시 한 장을 고르도록 해. (참고로, 고른 후에는 바꿀 수 없다네.)";
				gotoxy(x - 18, y + 22);
				cout << "마음의 준비가 되었다면, 당신이 뽑을 카드의 숫자를 입력하시오: ";
				cin >> uinput;

				if (uinput >= 1 && uinput <= 4)
				{
					gotoxy(x - 2, y + 23);
					cout << "당신이 고른 카드의 번호는: " << uinput;
					gotoxy(x + 10, y + 24);
					cout << endl;

					system("pause");
				}
				else
				{
					gotoxy(x - 5, y + 23);
					cout << "번호를 잘못 입력했지 않은가! 다시 입력하도록 해: ";
					cin >> uinput;
					gotoxy(x - 5, y + 23);
					cout << "                                                                    ";
					gotoxy(x - 2, y + 23);
					cout << "당신이 고른 카드의 번호는: " << uinput;
					gotoxy(x + 10, y + 24);
					cout << endl;

					system("pause");
				}

				system("cls");

				cnt++;

				scom = rand() % 4;	ncom = rand() % 13;
				suser = rand() % 4;	nuser = rand() % 13;

				gotoxy(x + 2, y);
				cout << "우리 둘 다 카드를 골랐으니, ";
				gotoxy(x - 16, y + 1);
				cout << "과연 누가 승자인지 고른 카드를 공개하도록 하지. 행운을 비네!";

				Sleep(1000);

				gotoxy(x - 8, y + 4);
				printf("┌─────────────────────────────────┐");
				gotoxy(x - 8, y + 5);
				printf("│                                 │");
				gotoxy(x - 8, y + 6);
				printf("│                                 │");
				gotoxy(x - 8, y + 7);
				printf("│                                 │");
				gotoxy(x - 8, y + 8);
				printf("└─────────────────────────────────┘");

				Sleep(1000);

				gotoxy(x + 1, y + 5);
				printf("내가 고른 카드는 %s%s.", scom == 0 ? "♧" : scom == 1 ? "♥" :
					scom == 2 ? "◆" : "♤",
					ncom == 0 ? "2" : ncom == 1 ? "3" : ncom == 2 ? "4" : ncom == 3 ? "5"
					: ncom == 4 ? "6" : ncom == 5 ? "7" : ncom == 6 ? "8" : ncom == 7 ? "9"
					: ncom == 8 ? "10" : ncom == 9 ? "J" : ncom == 10 ? "Q" : ncom == 11 ? "K" : "A");

				gotoxy(x - 1, y + 7);
				printf("당신이 고른 카드는 %s%s.", suser == 0 ? "♧" : suser == 1 ? "♥" :
					suser == 2 ? "◆" : "♤",
					nuser == 0 ? "2" : nuser == 1 ? "3" : nuser == 2 ? "4" : nuser == 3 ? "5"
					: nuser == 4 ? "6" : nuser == 5 ? "7" : nuser == 6 ? "8" : nuser == 7 ? "9"
					: nuser == 8 ? "10" : nuser == 9 ? "J" : nuser == 10 ? "Q" : nuser == 11 ? "K" : "A");

				cout << endl;

				if (scom == suser)
				{
					if (ncom > nuser)
					{
						gotoxy(x - 8, y + 10);
						cout << "얼추 비슷했지만, 안타깝게도 당신의 패배요.";
						++result[2];
					}
					else if (ncom == nuser)
					{
						gotoxy(x - 5, y + 10);
						cout << "이런 운명이! 당신과 나 비겼네.";
						++result[1];
					}
					else
					{
						gotoxy(x - 12, y + 10);
						cout << "당신이 이겼다니.. 인정하고 싶지 않군. 축하하네!";
						++result[0];
					}

				}
				else if (scom > suser)
				{
					gotoxy(x - 3, y + 10);
					cout << "안타깝군 그래. 당신이 졌네.";
					++result[2];
				}
				else if (scom < suser)
				{
					gotoxy(x - 8, y + 10);
					cout << "당신이 얼마나 운이 좋은지 봐! 당신이 이겼네.";
					++result[0];
				}
				gotoxy(x - 2, y + 23);
				printf("전: %d, 승: %d, 무: %d, 패: %d \n\n",
					cnt, result[0], result[1], result[2]);

				system("pause");
				system("cls");

				cout << endl;
				gotoxy(x - 9, y + 10);
				cout << "게임을 계속 하려거든 1번을 입력하시오." << endl;
				gotoxy(x - 10, y + 11);
				cout << "메뉴로 돌아가고 싶다면 2번을 입력하시고." << endl;
				cin >> uinput2;

				if (uinput2 == 1)
				{
					continue;
				}
				else if (uinput2 == 2)
				{
					break;
				}
				else
				{
					gotoxy(x - 4, y + 13);
					cout << "당신, 번호를 잘못 입력했어. ";
					gotoxy(x + 8, y + 14);
					cout << "1번이나 2번을 입력하시오. ";
					cin >> uinput2;
				}



			}

		}
		else if (menuNum == 1)
		{
			system("cls");

			int hx = 30;
			int hy = 1;

			gotoxy(hx, hy);
			cout << "이 게임을 하는 방법: " << endl;
			gotoxy(hx, hy + 1);
			cout << endl;
			gotoxy(hx - 10, hy + 2);
			cout << "\'행운을 위하여\'에 온 당신을 환영하네. " << endl;
			gotoxy(hx - 25, hy + 3);
			cout << "시작하기 전에, 자네, 포커 카드가 어떻게 생겼는지 아는가? " << endl;
			gotoxy(hx - 20, hy + 4);
			cout << "당신이 원카드나 도둑잡기 할 때 사용하는 52장의 카드들 말이야. " << endl;
			gotoxy(hx - 25, hy + 5);
			cout << "이 52장의 카드들엔 네가지 모양이 존재하네: ♤, ◆, ♥, ♧." << endl;
			gotoxy(hx - 29, hy + 6);
			cout << "각 모양마다 2부터 10까지의 숫자 카드가 있지. 거기다, 4개의 직업 카드까지: " << endl;
			gotoxy(hx - 5, hy + 7);
			cout << "에이스, 킹, 퀸, 그리고 잭." << endl;
			gotoxy(hx - 20, hy + 8);
			cout << "카드 설명은 이만하면 된 듯하니, 이 게임의 규칙에 대해 설명하도록 하지. " << endl << endl;
			gotoxy(hx + 8, hy + 10);
			cout << "규칙: " << endl;
			gotoxy(hx - 15, hy + 11);
			cout << "모양과 숫자, 그리고 직업 카드에는 랭킹이 있다네." << endl;
			gotoxy(hx - 7, hy + 12);
			cout << "모양은 ♤ > ◆ > ♥ > ♧ 순으로," << endl;
			gotoxy(hx - 15, hy + 13);
			cout << "숫자와 직업 카드는 A > K > Q > J > 10 > 9 > ... > 3 > 2 순으로." << endl;
			gotoxy(hx - 17, hy + 14);
			cout << "맞네. 포커카드와 비슷하지, 하지만 명심해. 이건 포커가 아니니." << endl << endl;
			gotoxy(hx, hy + 16);
			cout << "게임에서 승리하는 법: " << endl;
			gotoxy(hx - 25, hy + 17);
			cout << "승리하는 건 생각보다 쉬워! 나보다 높은 랭킹의 카드를 뽑으면 되네." << endl;
			gotoxy(hx - 30, hy + 18);
			cout << "만약 당신이 나와 같은 모양의 카드를 뽑으면, 우리는 직업과 숫자를 비교할 것이야." << endl;
			gotoxy(hx - 15, hy + 19);
			cout << "그 다음엔, 이 게임의 진정한 승자가 누군지 알게되겠지." << endl;
			gotoxy(hx - 10, hy + 20);
			cout << "승자는 단지 운만을 가지고 이기는 셈이지!" << endl;
			gotoxy(hx + 2, hy + 21);
			cout << "공평한 게임 아닌가?" << endl;

			system("pause");
		}
		else if (menuNum == 2)
		{
			while (true)
			{
				system("cls");

				int x = 30;
				int y = 8;
				int uinput3;

				gotoxy(x + 8, y);
				printf("설정");
				gotoxy(x + 2, y + 2);
				printf(" 1. 개발자 정보 ");
				gotoxy(x + 2, y + 3);
				printf(" 2. 문의 사항 ");
				gotoxy(x + 2, y + 4);
				printf(" 3. 언어 ");
				gotoxy(x + 2, y + 5);
				printf(" 4. 메인 메뉴로");

				gotoxy(x - 10, y + 10);
				cout << "설정을 바꾸려거든 1부터 4 사이의 숫자를 입력해: ";
				cin >> uinput3;
				//system("pause");

				if (uinput3 == 1)
				{
					system("cls");
					gotoxy(x+2, y);
					printf("개발자: JS");
					gotoxy(x, y + 1);
					printf("버전: 1.0.0 Beta");
					gotoxy(x - 12, y + 3);
					printf("메인 메뉴로 돌아가려면 아무 키나 누르시오.");
					system("pause");
				}
				else if (uinput3 == 2)
				{
					system("cls");
					gotoxy(x - 17, y);
					printf("만약 문의 사항이 있다면, 아래의 주소로 이메일을 보내주세요:");
					gotoxy(x-3, y + 1);
					printf("zhelddmsenxhd8@gmail.com");
					system("pause");

				}
				else if (uinput3 == 3)
				{
					system("cls");
					int uinputl;
					gotoxy(x, y);
					printf("현재 지원 가능한 언어:");
					gotoxy(x+5, y + 2);
					printf("1. English");
					gotoxy(x+5, y + 3);
					printf("2. 한국어");
					gotoxy(x - 10, y + 5);
					printf("언어를 바꾸시려면, 해당하는 숫자를 입력해주세요: ");
					cin >> uinputl;

					if (uinputl == 1)
					{
						gotoxy(x - 10, y + 10);
						int uinputls;
						printf("정말로 언어를 한국어에서 영어로 바꾸시겠습니까? \n");
						gotoxy(x - 7, y + 11);
						printf("맞다면, 1번을, 아니라면 0번을 눌러주세요.");
						cin >> uinputls;

						if (uinputls == 1)
						{
							main();
						}
						else if (uinputls == 0)
						{
							continue;
						}

					}
					else if (uinputl == 2)
					{
						gotoxy(x - 20, y + 10);
						printf("현재 설정과 같은 언어를 입력하셨으므로, 변화가 없을 것입니다. ");
						system("pause");
					}

				}
				else if (uinput3 == 4)
				{
					break;
				}
				else
				{
					cout << "번호를 잘못 입력하셨습니다!" << endl;
					cout << "1부터 4 사이의 숫자로 다시 입력해주세요.";
				}
			}


		}
		else if (menuNum == 3)
		{
			exit(0);
		}

		system("cls");
	}
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Init()
{
	system("mode con cols=80 lines=25 | title : For The Sake of Luck - St. Patrick's Day Edition");
	//리팩토링
}

void kInit()
{
	system("mode con cols=80 lines=25 | title : 행운을 위하여 - 성 파트리치오 축일 에디션");
	//리팩토링
}

void MainTitle()
{
	cout << "\n\n\n\n";
	//제목을 만들자. 

	int tx = 32;
	int ty = 4;

	gotoxy(tx - 2, ty);
	cout << "For The Sake of Luck" << endl;
	gotoxy(tx - 6, ty + 1);
	cout << " -St. Patrick's Day Edition" << endl;
	gotoxy(tx, ty + 2);
	cout << endl;
	gotoxy(tx + 1, ty + 3);
	cout << "  ┌─────┐  " << endl;
	gotoxy(tx + 1, ty + 4);
	cout << "  │  ♣ │ " << endl;
	gotoxy(tx + 1, ty + 5);
	cout << "  ┤─────├ " << endl;
	gotoxy(tx + 1, ty + 6);
	cout << "   ⊙  ⊙ " << endl;
	gotoxy(tx + 1, ty + 7);
	cout << "     †    " << endl;
	gotoxy(tx + 1, ty + 8);
	cout << "     〓   " << endl;
	gotoxy(tx + 1, ty + 9);
	cout << endl;

}

void kMainTitle()
{
	cout << "\n\n\n\n";
	//제목을 만들자. 

	int tx = 32;
	int ty = 4;

	gotoxy(tx, ty);
	cout << "행운을 위하여" << endl;
	gotoxy(tx - 6, ty + 1);
	cout << " - 성 파트리치오 축일 에디션" << endl;
	gotoxy(tx, ty + 2);
	cout << endl;
	gotoxy(tx + 1, ty + 3);
	cout << "  ┌─────┐  " << endl;
	gotoxy(tx + 1, ty + 4);
	cout << "  │  ♣ │ " << endl;
	gotoxy(tx + 1, ty + 5);
	cout << "  ┤─────├ " << endl;
	gotoxy(tx + 1, ty + 6);
	cout << "   ⊙  ⊙ " << endl;
	gotoxy(tx + 1, ty + 7);
	cout << "     †    " << endl;
	gotoxy(tx + 1, ty + 8);
	cout << "     〓   " << endl;
	gotoxy(tx + 1, ty + 9);
	cout << endl;

}

int Menu()
{
	int x = 32;
	int y = 15;


	gotoxy(x - 2, y);
	printf("▶  GAME START  √ ");
	gotoxy(x, y + 1);
	printf("    HELP     (?) ");
	gotoxy(x, y + 2);
	printf("  SETTINGS  (◎) ");
	gotoxy(x, y + 3);
	printf("    EXIT     (X) ");

	while (1)//무한반복
	{
		int n = KeyControl();

		switch (n)
		{
		case UP:
		{
			if (y > 15)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf("▶");
			}
		}
		break;
		case DOWN:
		{
			if (y < 18)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf("▶");
			}
		}
		break;
		case SUBMIT:
		{

			return y - 15;
			//0 게임시작
			//1 게임정보
			//2 종료
		}
		}
	}


	printf("\n\n\n");
}
int kMenu()
{
	int x = 32;
	int y = 15;


	gotoxy(x - 2, y);
	printf("▶  게임 시작  √ ");
	gotoxy(x, y + 1);
	printf("  도움말     (?) ");
	gotoxy(x, y + 2);
	printf("  설정      (◎) ");
	gotoxy(x, y + 3);
	printf("  게임 종료 (X) ");

	while (1)//무한반복
	{
		int n = KeyControl();

		switch (n)
		{
		case UP:
		{
			if (y > 15)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf("▶");
			}
		}
		break;
		case DOWN:
		{
			if (y < 18)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf("▶");
			}
		}
		break;
		case SUBMIT:
		{

			return y - 15;
			//0 게임시작
			//1 게임정보
			//2 종료
		}
		}
	}


	printf("\n\n\n");
}
int key;
int KeyControl()
{
	while (true)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == 72)
			{
				return UP;
			}
			else if (key == 75)
			{
				return LEFT;
			}
			else if (key == 77)
			{
				return DOWN;
			}
			else if (key == 80)
			{
				return RIGHT;
			}
			else if (key == 13)
			{
				return SUBMIT;
			}
		}
	}
}
