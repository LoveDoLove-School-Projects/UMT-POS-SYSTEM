#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning (disable : 4996)

//Global Declarations
int orderNum = 0; //Sales Order Number
int quantity = 0; //For Catch User Book Quantity
int totalQtySoldSales = 0; //Sum All The Book Quantity Sold

//Receipt Variables
double bookATotalPrice = 0.0;
double bookBTotalPrice = 0.0;
double bookCTotalPrice = 0.0;
double bookDTotalPrice = 0.0;
double bookETotalPrice = 0.0;
double bookFTotalPrice = 0.0;
double bookGTotalPrice = 0.0;
double bookHTotalPrice = 0.0;
double bookITotalPrice = 0.0;

//Total Summary Report Price Variables
double bookASumPrice = 0.0;
double bookBSumPrice = 0.0;
double bookCSumPrice = 0.0;
double bookDSumPrice = 0.0;
double bookESumPrice = 0.0;
double bookFSumPrice = 0.0;
double bookGSumPrice = 0.0;
double bookHSumPrice = 0.0;
double bookISumPrice = 0.0;

//Total Discount, Subtotal, Amount, Summary Amount Variables
double totalDisc = 0.0, subtotal = 0.0, totalAmt = 0.0, totalSumAmt = 0.0;

//Store Data for Calculations Variables
int bookAQty = 0, bookBQty = 0, bookCQty = 0, bookDQty = 0, bookEQty = 0, bookFQty = 0, bookGQty = 0, bookHQty = 0, bookIQty = 0;
int totalQtyABook = 0, totalQtyBBook = 0, totalQtyCBook = 0, totalQtyDBook = 0, totalQtyEBook = 0, totalQtyFBook = 0, totalQtyGBook = 0, totalQtyHBook = 0, totalQtyIBook = 0;

//Books Price Constant Variables
const double BOOK_A_PRICE = 90.00;
const double BOOK_B_PRICE = 110.20;
const double BOOK_C_PRICE = 95.50;
const double BOOK_D_PRICE = 100.10;
const double BOOK_E_PRICE = 112.10;
const double BOOK_F_PRICE = 105.50;
const double BOOK_G_PRICE = 119.30;
const double BOOK_H_PRICE = 130.50;
const double BOOK_I_PRICE = 123.20;

void main()
{
	void displayWelcome(); //displayWelcome Function Variable
	void displayOptions(); //displayOptions Function Variable

	displayWelcome();
	displayOptions();
	system("pause");
}

//Display Logo, Message, and Title
void displayWelcome()
{
	printf("\n");
	printf("\t\t||            ||     //=======\\\\//=======\\\\    ================\n");
	printf("\t\t||            ||     ||        ||        ||           ||       \n");
	printf("\t\t||            ||     ||        ||        ||           ||       \n");
	printf("\t\t||            ||     ||        ||        ||           ||       \n");
	printf("\t\t||            ||     ||        ||        ||           ||       \n");
	printf("\t\t||            ||     ||        ||        ||           ||       \n");
	printf("\t\t||            ||     ||        ||        ||           ||       \n");
	printf("\t\t\\\\============//     ||        ||        ||           ||       \n");
	printf("\n");
	printf("\t\t\t\t\tUMT POS SYSTEM\t\t\n");
	printf("\n");
	printf("\t\t           Welcome To UMT Programming Bookstore!\t\t\n");
	printf("\n");
	printf("\tTel:(018) 330-2633  Website: https://www.facebook.com/umtprogrammingbookstore\n");
	printf("\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\n");
}

//Display Options
void displayOptions()
{
	void viewMenu(); //viewMenu Function Variable
	void salesOrder(); //salesOrder Function Variable
	int option;
	printf("Select an option (1 = View Menu, 2 = Sales Order, 3 = Exit) : ");
	scanf("%d", &option);
	rewind(stdin);
	printf("\n");

	switch (option)
	{
	case 1:
		viewMenu();
		break;
	case 2:
		salesOrder();
		break;
	case 3:
		exit(0);
	default:
		printf("Please Enter Valid Numbers\n");
		displayOptions();
	}
}

//Display Menu Including Programming Field Books, Books Types And Price
void viewMenu()
{
	//Books Types Arrays Variables
	char bookSDP[3][20] = { "Python Fundamentals", "Java Beginner", "C++ Beginner Guide" };
	char bookCSP[3][100] = { "CCNP Security Cisco Secure Firewall and Intrusion Prevention System Official Cert Guide", "Securing Remote Access in Palo Alto Networks Guide", "Microsoft Azure Network Security Guide" };
	char bookIST[3][40] = { "Unity Game Development", "Godot Engine Game Development", "Luminous Engine Game Development" };
	int menu; //Capture User Input On Menu Option
	char choice; //Option On User Want To Continue For Next Order Or Not
	printf("Select an option : \n");
	printf("1 - Software Development Programming\n");
	printf("2 - CyberSecurity Programming\n");
	printf("3 - Interactive Software Technology\n");
	printf("\n");
	printf("Enter your option : ");
	scanf("%d", &menu);
	rewind(stdin);

	switch (menu)
	{
	case 1:
		printf("A - %s\t\tRM %6.2f\n", bookSDP[0], BOOK_A_PRICE);
		printf("B - %s\t\tRM %6.2f\n", bookSDP[1], BOOK_B_PRICE);
		printf("C - %s\t\tRM %6.2f\n", bookSDP[2], BOOK_C_PRICE);
		break;
	case 2:
		printf("D - %s\t\tRM %6.2f\n", bookCSP[0], BOOK_D_PRICE);
		printf("E - %s\t\t\t\t\t\t\tRM %6.2f\n", bookCSP[1], BOOK_E_PRICE);
		printf("F - %s\t\t\t\t\t\t\t\tRM %6.2f\n", bookCSP[2], BOOK_F_PRICE);
		break;
	case 3:
		printf("G - %s\t\t\tRM %6.2f\n", bookIST[0], BOOK_G_PRICE);
		printf("H - %s\t\tRM %6.2f\n", bookIST[1], BOOK_H_PRICE);
		printf("I - %s\t\tRM %6.2f\n", bookIST[2], BOOK_I_PRICE);
		break;
	default:
		printf("\n");
		printf("Please enter valid number\n");
		viewMenu();
	}
	printf("Do you want to see another books? (Y = Yes, N = No) : ");
	scanf("%c", &choice);
	choice = toupper(choice);
	switch (choice)
	{
	case 'Y':
		printf("\n");
		viewMenu();
		break;
	case 'N':
		printf("\n");
		displayOptions();
		break;
	default:
		printf("\nError\n\n");
		viewMenu();
	}
}

/*
  Capture User Book Selection,
  Calculate The Discount,
  Total Need To Pay,
  Display Daily Summary Report
 */
void salesOrder()
{
	void displayEnding(); //displayEnding Function Variable
	int stopLoop = 0; //Stop Looping
	char books, confirmOrder, nextOrder;

	//Discounts
	const double DISCOUNT5 = 0.05;
	const double DISCOUNT10 = 0.10;
	const double DISCOUNT15 = 0.15;
	double discValue = 0.0; //Store Every Sales Order Total Discount

	//Arrays For Detecting Books Types To Show Enter Quantity
	char arrayBooks[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' };
	
	printf("=================================================================\n");
	printf("Our Discount Rates list are : \n");
	printf("1 - Buy over RM 200 of books get 5 percent discount.\n");
	printf("2 - Buy over RM 300 of books get 10 percent discount.\n");
	printf("3 - Buy over RM 500 of books get 15 percent discount.\n");
	printf("=================================================================\n\n");

	++orderNum;
	printf("Sales Order No : %2d\n", orderNum);

	bookAQty = 0;
	bookBQty = 0;
	bookCQty = 0;
	bookDQty = 0;
	bookEQty = 0;
	bookFQty = 0;
	bookGQty = 0;
	bookHQty = 0;
	bookIQty = 0;
	bookATotalPrice = 0;
	bookBTotalPrice = 0;
	bookCTotalPrice = 0;
	bookDTotalPrice = 0;
	bookETotalPrice = 0;
	bookFTotalPrice = 0;
	bookGTotalPrice = 0;
	bookHTotalPrice = 0;
	bookITotalPrice = 0;

	//This Loop Prompt And Capture User Book Selection, Book Quantity
	do
	{
		printf("Book A,B,C,D,E,F,G,H,I (X = Exit) : ");
		scanf("%c", &books);
		books = toupper(books);
		rewind(stdin);

		if (books == arrayBooks[0] || books == arrayBooks[1] || books == arrayBooks[2] || books == arrayBooks[3] || books == arrayBooks[4] || books == arrayBooks[5] || books == arrayBooks[6] || books == arrayBooks[7] || books == arrayBooks[8])
		{
			printf("Quantity : ");
			scanf("%d", &quantity);
			rewind(stdin);
		}	
		switch (books)
		{
		case 'A':
			bookAQty = quantity;
			totalQtyABook += bookAQty;
			break;
		case 'B':
			bookBQty = quantity;
			totalQtyBBook += bookBQty;
			break;
		case 'C':
			bookCQty = quantity;
			totalQtyCBook += bookCQty;
			break;
		case 'D':
			bookDQty = quantity;
			totalQtyDBook += bookDQty;
			break;
		case 'E':
			bookEQty = quantity;
			totalQtyEBook += bookEQty;
			break;
		case 'F':
			bookFQty = quantity;
			totalQtyFBook += bookFQty;
			break;
		case 'G':
			bookGQty = quantity;
			totalQtyGBook += bookGQty;
			break;
		case 'H':
			bookHQty = quantity;
			totalQtyHBook += bookHQty;
			break;
		case 'I':
			bookIQty = quantity;
			totalQtyIBook += bookIQty;
			break;
		case 'X':
			++stopLoop;
			break;
		default:
			printf("\nInvalid Book\n\n");
		}
	} while (stopLoop == 0);

	printf("Confirm the order? (Y = Yes, N = No) : ");
	scanf("%c", &confirmOrder);
	confirmOrder = toupper(confirmOrder);
	rewind(stdin);

	if (confirmOrder == 'Y') 
	{
		printf("\n");
		if (bookAQty > 0)
		{
			bookATotalPrice = bookAQty * BOOK_A_PRICE;
			bookASumPrice += bookATotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[0], bookAQty, BOOK_A_PRICE, bookATotalPrice);
		}
		if (bookBQty > 0)
		{
			bookBTotalPrice = bookBQty * BOOK_B_PRICE;
			bookBSumPrice += bookBTotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[1], bookBQty, BOOK_B_PRICE, bookBTotalPrice);
		}
		if (bookCQty > 0)
		{
			bookCTotalPrice = bookCQty * BOOK_C_PRICE;
			bookCSumPrice += bookCTotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[2], bookCQty, BOOK_C_PRICE, bookCTotalPrice);
		}
		if (bookDQty > 0)
		{
			bookDTotalPrice = bookDQty * BOOK_D_PRICE;
			bookDSumPrice += bookDTotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[3], bookDQty, BOOK_D_PRICE, bookDTotalPrice);
		}
		if (bookEQty > 0)
		{
			bookETotalPrice = bookEQty * BOOK_E_PRICE;
			bookESumPrice += bookETotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[4], bookEQty, BOOK_E_PRICE, bookETotalPrice);
		}
		if (bookFQty > 0)
		{
			bookFTotalPrice = bookFQty * BOOK_F_PRICE;
			bookFSumPrice += bookFTotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[5], bookFQty, BOOK_F_PRICE, bookFTotalPrice);
		}
		if (bookGQty > 0)
		{
			bookGTotalPrice = bookGQty * BOOK_G_PRICE;
			bookGSumPrice += bookGTotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[6], bookGQty, BOOK_G_PRICE, bookGTotalPrice);
		}
		if (bookHQty > 0)
		{
			bookHTotalPrice = bookHQty * BOOK_H_PRICE;
			bookHSumPrice += bookHTotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[7], bookHQty, BOOK_H_PRICE, bookHTotalPrice);
		}
		if (bookIQty > 0)
		{
			bookITotalPrice = bookIQty * BOOK_I_PRICE;
			bookISumPrice += bookITotalPrice;
			printf("Book %c : %2d @ RM %6.2f\t\t=\tRM %7.2f\n", arrayBooks[8], bookIQty, BOOK_I_PRICE, bookITotalPrice);
		}

		printf("\t\t\t\t\t==========\n");
		subtotal = bookATotalPrice + bookBTotalPrice + bookCTotalPrice + bookDTotalPrice + bookETotalPrice + bookFTotalPrice + bookGTotalPrice + bookHTotalPrice + bookITotalPrice;
		printf("Subtotal\t\t\t=\tRM %7.2f\n", subtotal);

		if (subtotal > 500.0)
			discValue = subtotal * DISCOUNT15; 
		else if (subtotal > 300.0)
			discValue = subtotal * DISCOUNT10;
		else if (subtotal > 200.0)
			discValue = subtotal * DISCOUNT5;
	
		printf("Discounts\t\t\t=\tRM %7.2f\n", discValue);
		printf("\t\t\t\t\t==========\n");

		totalDisc += discValue;
		totalAmt = subtotal - discValue;

		printf("Total to pay\t\t\t=\tRM %7.2f\n", totalAmt);
		printf("\n\tThank You, Have A Nice Day\n");
		printf("\nNext order? (Y = Yes, N = No) : ");
		scanf("%c", &nextOrder);
		nextOrder = toupper(nextOrder);
		rewind(stdin);

		switch (nextOrder)
		{
		case 'Y':
			salesOrder();
			break;
		case 'N':
			system("cls");
			totalQtySoldSales = totalQtyABook + totalQtyBBook + totalQtyCBook + totalQtyDBook + totalQtyEBook + totalQtyFBook + totalQtyGBook + totalQtyHBook + totalQtyIBook;
			totalSumAmt = bookASumPrice + bookBSumPrice + bookCSumPrice + bookDSumPrice + bookESumPrice + bookFSumPrice + bookGSumPrice + bookHSumPrice + bookISumPrice;
			printf("\n\t\tDAILY SALES ORDER SUMMARY REPORT\t\n\n");
			printf("\tTotal Number of Sales Orders = %d\n\n", orderNum);
			printf("\tBook\t\tQuantity Sold Sales\t    Amount\n");
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[0], totalQtyABook, bookASumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[1], totalQtyBBook, bookBSumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[2], totalQtyCBook, bookCSumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[3], totalQtyDBook, bookDSumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[4], totalQtyEBook, bookESumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[5], totalQtyFBook, bookFSumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[6], totalQtyGBook, bookGSumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[7], totalQtyHBook, bookHSumPrice);
			printf("\t%c\t\t\t%2d\t\tRM %7.2f\n", arrayBooks[8], totalQtyIBook, bookISumPrice);
			printf("\t\t\t      ======\t       ============\n");
			printf("\tTotal Discounts\t\t\t\tRM %7.2f\n", totalDisc);
			printf("\tSummary Total\t\t%2d\t\tRM %7.2f\n", totalQtySoldSales, totalSumAmt);
			displayEnding();
			break;
		default:
			printf("Invalid Character\n");
		}
	}
	else
    {
	--orderNum;
	if (orderNum > 0)
	{
		totalQtyABook -= bookAQty;
		totalQtyBBook -= bookBQty;
		totalQtyCBook -= bookCQty;
		totalQtyDBook -= bookDQty;
		totalQtyEBook -= bookEQty;
		totalQtyFBook -= bookFQty;
		totalQtyGBook -= bookGQty;
		totalQtyHBook -= bookHQty;
		totalQtyIBook -= bookIQty;
	}
	else
	{
		totalQtyABook = 0;
		totalQtyBBook = 0;
		totalQtyCBook = 0;
		totalQtyDBook = 0;
		totalQtyEBook = 0;
		totalQtyFBook = 0;
		totalQtyGBook = 0;
		totalQtyHBook = 0;
		totalQtyIBook = 0;
	}
	displayOptions();
    }
}

//Display Ending Logo And Ending Message
void displayEnding()
{
	printf("\n\t\tThanks for using UMT POS SYSTEM!\t\n");
	printf("\n\t\t\t//----------\\\\");
	printf("\n\t\t\t|| O      O ||");
	printf("\n\t\t\t||          ||");
	printf("\n\t\t\t||          ||");
	printf("\n\t\t\t\\\\  \\\\__//  //");
	printf("\n\t\t\t ============\n");
}