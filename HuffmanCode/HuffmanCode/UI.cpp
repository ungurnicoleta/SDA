//#include "UI.h"
//#include <string>
//#include <Windows.h>
//#include <shellapi.h>
//#include <iostream>
//using namespace std;
//
//void UI::printMenu()
//{
//	cout << endl;
//	cout << "1 - Encode a text." << endl;
//	cout << "2 - Decode the text." << endl;
//	cout << "0 - Exit." << endl;
//}
//void UI::encodeUI()
//{
//	cout << "pass...";
//}
//
//void UI::decodeUI()
//{
//	cout << "decode...";
//}
//
//void UI::run()
//{
//	while (true)
//	{
//		UI::printMenu();
//		int command{ 0 };
//		cout << "Input the command: ";
//		cin >> command;
//		cin.ignore();
//		if (command == 0)
//			break;
//
//		// Encode
//		if (command == 1)
//		{
//			this->encodeUI();
//			
//		}
//
//		// Decode
//		if (command == 2)
//		{
//			this->decodeUI();
//		}
//		
//		//Exit
//		if (command == 0)
//			break;
//	}
//}