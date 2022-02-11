struct pass {
	char username[50];
	int date, month, year;
	char pnumber[15];
	char adharnum[20];
	char fname[20];
	char lname[20];
	char fathname[20];
	char mothname[20];
	char address[50];
	char typeaccount[20];
};

struct money {
	char usernameto[50];
	char userpersonfrom[50];
	long int money1;
};

struct userpass {
	char password[50];
};


int main()
{
	int i, a, b, choice;
	int passwordlength;

	gotoxy(20, 3);

	printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
	gotoxy(18, 5);

	printf("**********************************");
	gotoxy(25, 7);

	gotoxy(20, 10);
	printf("1.... CREATE A BANK ACCOUNT");

	gotoxy(20, 12);
	printf("2.... ALREADY A USER? SIGN IN");
	gotoxy(20, 14);
	printf("3.... EXIT\n\n");

	printf("\n\nENTER YOUR CHOICE..");

	scanf("%d", &choice);

	switch (choice) {
	case 1:
		system("cls");
		printf("\n\n USERNAME 50 CHARACTERS MAX!!");
		printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
		account();
		break;

	case 2:
		login();
		break;

	case 3:
		exit(0);
		break;

		getch();
	}
}
void account(void)
{
	char password[20];
	int passwordlength, i, seek = 0;
	char ch;
	FILE *fp, *fu;
	struct pass u1;
	struct userpass p1;

	struct userpass u2;

	// Opening file to
	// write data of a user
	fp = fopen("username.txt", "ab");

	// Inputs
	system("cls");
	printf("\n\n!!!!!CREATE ACCOUNT!!!!!");

	printf("\n\nFIRST NAME..");
	scanf("%s", &u1.fname);

	printf("\n\n\nLAST NAME..");
	scanf("%s", &u1.lname);

	printf("\n\nFATHER's NAME..");
	scanf("%s", &u1.fathname);

	printf("\n\nMOTHER's NAME..");
	scanf("%s", &u1.mothname);

	printf("\n\nADDRESS..");
	scanf("%s", &u1.address);

	printf("\n\nACCOUNT TYPE");
	scanf("%s", &u1.typeaccount);

	printf("\n\nDATE OF BIRTH..");
	printf("\nDATE-");
	scanf("%d", &u1.date);
	printf("\nMONTH-");
	scanf("%d", &u1.month);
	printf("\nYEAR-");
	scanf("%d", &u1.year);

	printf("\n\nADHAR NUMBER");
	scanf("%s", u1.adharnum);

	printf("\n\nPHONE NUMBER");
	scanf("%s", u1.pnumber);

	printf("\n\nUSERNAME.. ");
	scanf("%s", &u1.username);

	printf("\n\nPASSWORD..");

	for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("%c", ch);
		}
		else
			break;
	}
