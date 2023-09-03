#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
int hour = 0, minute = 0, second = 0; // global variables
int Totalmarks = 0, section1Marks = 0, section2Marks = 0, section3Marks = 0;
int flag = 0;

//#include<stdlib.h>
//#include<conio.h>

/*
0-BLACK                            8-GREY
1-BLUE                             9-LIGHT BLUE
2-GREEN                            A-LIGHT GREEN
3-AQUA                             B-LIGHT AQUA
4-RED                              C-LIGHT RED
5-PURPLE                           D-LIGHT PURPLE
6-YELLOW                           E-LIGHT YELLOW
7-WHITE                            F-BRIGHT YELLOW
*/

struct question
{
	char que[300];
}q[20];
struct answer
{
	int ans;
}a[20];
void gk()
{
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	printf("\n\n");
	getchar();
	strcpy(q[1].que, " * QUESTION: What is the solvent of gold ? \nOPTIONS:\n1. Platinum gold   \n2. Polysulphide solution   \n3. Aqua Regia   \n4. Liquid gold\n\n");
	strcpy(q[2].que, " * QUESTION: What is the phenomenon which provides balance in a bike ? \n OPTIONS : \n1.Inertia   \n2.Linear Momentum   \n3.Gyroscopic effect   \n4.Rotational effect\n\n");
	strcpy(q[3].que, " * QUESTION: What is the life span of White Blood Cells (WBC)? \n OPTIONS:\n1. 2 - 15 days   \n2. 3 - 15 days   \n3. 4 - 15 days   \n4. 5 - 20 days\n\n");
	strcpy(q[4].que, " * QUESTION: Name the gauge boson.\n OPTIONS:\n1. Forson   \n2. Magneton   \n3. Photon   \n4. Proton\n\n");
	strcpy(q[5].que, " * QUESTION: Which number does not have a Roman Numeral notation ?\n OPTIONS:\n1. 0   \n2. -1   \n3. 10000   \n4. -10001\n\n");
	strcpy(q[6].que, " * QUESTION: What fake name does Natasha use when she first meets Tony? (IRON MAN)\n  OPTIONS:\n1. Natalie Rushman   \n2. Natalia Romanoff   \n3. Nicole Rushman   \n4. Naya Rabe\n\n");
	strcpy(q[7].que, " * QUESTION: The 'Scarlett Speedster' is the nickname of which superhero ?\nOPTIONS:\n1. Speedball   \n2. Quicksilver   \n3. Stardust   \n4. Flash\n\n");
	strcpy(q[8].que, " * QUESTION: Which Netflix film tells the story of Sherlock Holmes' teenage sister ?\n OPTIONS:\n1. Sherlock   \n2. Sherlock Holmes   \n3. Enola Holmes   \n4. None of the above\n\n");
	strcpy(q[9].que, " * QUESTION: Who became the first fast bowler of the world to achieve 600 Test Wicket mark ? \n OPTIONS:\n1. James Anderson   \n2. Lasith Malinga   \n3. Glen McGrath   \n4. Bhuvaneshwar Kumar \n\n");
	strcpy(q[10].que, "* QUESTION: Preamble enshrines the ideals of liberty, equality and fraternity - ideals inspired by the\n OPTIONS:\n1.Russian Revolution   \n2.Irish Revolution   \n3.French Revolution   \n4.US Constitution \n\n");
	strcpy(q[11].que, " * QUESTION: Aryan tribes were known as ? \noptions : \n1.Mahajanapadas   \n2.Janas   \n3.Gana   \n4.Shreni\n\n");
	strcpy(q[12].que, " * QUESTION: Buddha established an order of monks and nuns which was known as ? \n OPTIONS : \n1.Sangha   \n2.Jana   \n3.Vidhatha   \n4.Kirat\n\n");
	strcpy(q[13].que, "* QUESTION: Who was the Viceroy of India at the time of Jallianwala Bagh massacre ?\n  OPTIONS:\n1. Lord Lytton   \n2. Lord Irwin   \n3. Lord Chelmsford   \n4. Lord Wellesley\n\n");
	strcpy(q[14].que, "* QUESTION: The minimum age to qualify for election to the Lok Sabha is\n OPTIONS:\n1. 18 Years   \n2. 35 Years   \n3. 21 Years   \n4. 25 Years\n\n");
	strcpy(q[15].que, "* QUESTION: The power to prorogue the Lok Sabha rests with \nOPTIONS:\n1. The Speaker   \n2. The President   \n3. The Prime Minister   \n4. The Minister of Parliamentary Affairs\n\n");

	a[1].ans = 3;
	a[2].ans = 3;
	a[3].ans = 1;
	a[4].ans = 3;
	a[5].ans = 1;
	a[6].ans = 1;
	a[7].ans = 4;
	a[8].ans = 3;
	a[9].ans = 1;
	a[10].ans = 3;
	a[11].ans = 2;
	a[12].ans = 1;
	a[13].ans = 3;
	a[14].ans = 4;
	a[15].ans = 2;
	int n = 15;
	point(q, a, n);
}
void entertainment()
{
	int n = 10;
	printf("\n\n");
	getchar();
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	strcpy(q[1].que, "* QUESTION: What fake name does Natasha use when she first meets Tony? (IRON MAN)\n  OPTIONS:\n1. Natalie Rushman   \n2. Natalia Romanoff   \n3. Nicole Rushman   \n4. Naya Rabe\n\n");
	strcpy(q[2].que, "* QUESTION: The 'Scarlett Speedster' is the nickname of which superhero ?\nOPTIONS:\n1. Speedball   \n2. Quicksilver   \n3. Stardust   \n4. Flash\n\n");
	strcpy(q[3].que, "* QUESTION: Which Netflix film tells the story of Sherlock Holmes' teenage sister ?\n OPTIONS:\n1. Sherlock   \n2. Sherlock Holmes   \n3. Enola Holmes   \n4. None of the above\n\n");
	strcpy(q[4].que, "* QUESTION: What town does SpongeBob Squarepants live in?\n  OPTIONS: \n1. Bikini Bottom   \n2. Bluffington   \n3. O-Town   \n4. Rapture\n\n");
	strcpy(q[5].que, "* QUESTION: What was the first feature-length animated movie ever released?\n  OPTIONS: \n1. The Lion King   \n2. Finding Nemo   \n3. Snow White and the Seven Dwarfs   \n4. Mickey Mouse\n\n");
	strcpy(q[6].que, "* QUESTION: Which movie was incorrectly announced as the winner of Best Picture at the 2017 Academy Awards,\n\t\t during the greatest Oscars flub of all time?\n  OPTIONS: \n1. Inception   \n2. La La Land   \n3. Joker  \n4. The Revenant\n\n");
	strcpy(q[7].que, "* QUESTION: Who is the first Indian to win the Oscar?\n  OPTIONS: \n1. Shah Rukh Khan  \n2. A.R. Rahman   \n3. Akshay Kumar   \n4. Bhanu Athaiya\n\n");
	strcpy(q[8].que, "* QUESTION: What is the name of Sholay' s iconic villain?  OPTIONS: \n1. Kalia   \n2. Gabbar Singh   \n3. Bulla   \n4. Shakaal\n\n");
	strcpy(q[9].que, "* QUESTION: Which film is rated the best film of all time by IMDB?\n OPTIONS:\n1. Titanic   \n2. The Shawshank Redemption   \n3. AVengers: Infinity War   \n4. Avengers: Endgame\n\n");
	strcpy(q[10].que, "* QUESTION: Who is known as the 'father of Indian Cinema' ?\n  OPTIONS:\n1. Satyajit Ray   \n2. Dadasaheb Phalke   \n3. V Shantaram   \n4. None of the above\n\n");
	a[1].ans = 1;
	a[2].ans = 4;
	a[3].ans = 3;
	a[4].ans = 1;
	a[5].ans = 3;
	a[6].ans = 2;
	a[7].ans = 4;
	a[8].ans = 2;
	a[9].ans = 2;
	a[10].ans = 2;
	point(q, a, n);
}

void science()
{
	printf("\n\n");
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	strcpy(q[1].que, "* QUESTION: Minimun number of cuts required to divide a cake to 8 pieces are:\nOPTIONS:\n1. 2 Cuts   \n2. 3 Cuts   \n3. 4 Cuts   \n4. 5 Cuts\n\n");
	strcpy(q[2].que, "* QUESTION: Which of these is a solution ?\n  OPTIONS:\n1. Shampoo   \n2. Water Vapour   \n3. Air   \n4. Gelatin\n\n");
	strcpy(q[3].que, "* QUESTION: Name the gauge boson.\n  OPTIONS:\n1. Forson   \n2. Magneton   \n3. Photon   \n4. Proton\n\n");
	strcpy(q[4].que, "* QUESTION: Hansen's disease is more commonly known by which name ?\n  OPTIONS:\n1. Babesiois   \n2. Arthritis   \n3. Alzheimer's Disease   \n4. Leprosy\n\n");
	strcpy(q[5].que, "* QUESTION: An angle measuring 60 degrees is measured as 62 degrees. What is the percentage error correct to 3 significant figures ?\nOPTIONS:\n1. 37.2 Percent   \n2. 3.33 Percent   \n3. 35.5 Percent   \n4. 3.23 Percent\n\n");
	strcpy(q[6].que, "* QUESTION: What are polyunsaturated compounds ?\nOPTIONS:\n1. Compounds with less carbon atoms than normal   \n2. Compounds which lack hydrogen   \n3. Compounds with several missing oxygen atoms   \n4. Compounds with two or more double bonds \n\n");
	strcpy(q[7].que, "* QUESTION: What is the SI unit of heat ?\nOPTIONS:\n1. degrees Celsius   \n2. Calories   \n3. Joules   \n4. Watts\n\n");
	strcpy(q[8].que, "* QUESTION: What is the human body's largest organ ?\n OPTIONS:\n1. Skin   \n2. Tongue   \n3. Intestine   \n4. Heart\n\n");
	strcpy(q[9].que, "* QUESTION: Which of the following is not one of the early 'protocols', or ways to use the Internet ? OPTIONS:\n1. Blogging   \n2. Telnet   \n3. Gopher   \n4. FTP\n\n");
	strcpy(q[10].que, "* QUESTION: What fighter plane of World War II came out of a design for a racing seaplane ?\n OPTIONS:\n1. F6F Hellcat   \n2. SBD Dauntless   \n3. Spitfire   \n4. Zero\n\n");
	a[1].ans = 2;
	a[2].ans = 3;
	a[3].ans = 3;
	a[4].ans = 4;
	a[5].ans = 2;
	a[6].ans = 4;
	a[7].ans = 3;
	a[8].ans = 1;
	a[9].ans = 1;
	a[10].ans = 3;
	int n = 10;
	point(q, a, n);
}

void history()
{
	printf("\n\n");
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	strcpy(q[1].que, "* QUESTION: Which is the largest empire on the basis land under control?\n OPTIONS: \n1. Mongol Empire   \n2. British Empire   \n3. Ottoman Empire   \n4. Roman Empire\n\n");
	strcpy(q[2].que, "* QUESTION: Who is the longest serving Monarch?\n OPTIONS: \n1. Queen Elizabeth   \n2. Louis XIV   \n3. Queen Victoria   \n4. Qianlong Emperor\n\n");
	strcpy(q[3].que, " * QUESTION: The first session of the All India Congress held in Bombay in 1920, was presided over by : \n OPTIONS : \n1.Jawaharlal Nehru   \n2.V V Giri   \n3.Lala Lajpat Rai   \n4.M M Joshi\n\n");
	strcpy(q[4].que, "* QUESTION: What is the real name of Birbal?\nOPTIONS: \n1. Maheshdas Brahmbhatt   \n2. Amarasimha   \n3. Ramtanu   \n4. None of the above\n\n");
	strcpy(q[5].que, "* QUESTION: Who is known as the Napoleon of India?\nOPTIONS: \n1. Samudragupta   \n2. Chandragupta I   \n3. Ramagupta   \n4. Vikramaditya\n\n");
	strcpy(q[6].que, "* QUESTION: Which among the following Satavahana / Satakarni rulers recovered Malwa from the Shaka rulers ?\n OPTIONS:\n1. Gauthamiputra Satakarni   \n2. Satakarni I   \n3. Hala   \n4. Yajnasari Satakarni\n\n");
	strcpy(q[7].que, "* QUESTION: Which king had the title of Kaviraja or King of poets ? \n OPTIONS : \n1.Chandragupta Mourya   \n2.Samudra Gupta   \n3.Krishnadevaraya   \n4.Ashoka\n\n");
	strcpy(q[8].que, "* QUESTION: Which river was called Vipasa in Vedic India ?\nOPTIONS:\n1. Ganga   \n2. Jhelum   \n3. Beas   \n4. Indus\n\n");
	strcpy(q[9].que, "* QUESTION: Partha was the name of which of the following character in Mahabharta ?\nOPTIONS:\n1. Yudhisthra   \n2. Karna   \n3. Krishna   \n4. Arjuna\n\n");
	strcpy(q[10].que, "* QUESTION: Which of the following dynasty was ruling in India, when Alexander invaded India ? \nOPTIONS:\n1. Nanda Dynasty   \n2. Shunga Dynasty   \n3. Mourya Dynasty   \n4. Shishunaga Dynasty\n\n");
	a[1].ans = 2;
	a[2].ans = 2;
	a[3].ans = 3;
	a[4].ans = 1;
	a[5].ans = 1;
	a[6].ans = 4;
	a[7].ans = 2;
	a[8].ans = 3;
	a[9].ans = 1;
	a[10].ans = 1;
	int n = 10;
	point(q, a, n);
}
void politics()
{
	printf("\n\n");
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	strcpy(q[1].que, "* QUESTION: Union Budget is always presented first in :\n OPTIONS: \n1. The Lok Sabha   \n2. The Rajya Sabha   \n3. Joint session of the Parliament   \n4. Meeting of the Union Cabinet\n\n");
	strcpy(q[2].que, "* QUESTION: Who is the guardian of fundamental Rights enumerated in Indian Constitution?\n  OPTIONS: \n1. Supreme Court   \n2. Parliament   \n3. President   \n4. Constitution\n\n");
	strcpy(q[3].que, "* QUESTION: Who have the power to decide an election petition?\nOPTIONS: \n1. Parliament   \n2. Supreme Court   \n3. High Courts   \n4. Election Commission\n\n");
	strcpy(q[4].que, "* QUESTION: The item 'Education' belongs to the : \n OPTIONS : \n1.Union List   \n2.State List   \n3.Concurrent List   \n4.Residuary subjects\n\n");
	strcpy(q[5].que, "* QUESTION: Article 1 of the Constitution declares India as:\n OPTIONS: \n1. Fedaral State   \n2. Quasi Federal State   \n3. Unitary State   \n4. Union of States\n\n");
	strcpy(q[6].que, "* QUESTION: The members of Lok Sabha hold office for a term of\n  OPTIONS:\n1. 3 Years   \n2. 4 Years   \n3. 5 Years   \n4. 6 Years\n\n");
	strcpy(q[7].que, "* QUESTION: The number of writs that can be prayed for and issued by the Supreme Court and/or a High Court is\nOPTIONS:\n1. 8   \n2. 3   \n3. 6   \n4. 5\n\n");
	strcpy(q[8].que, "* QUESTION: The Objectives Resolution which laid down the main objectives to guide the deliberations of the Assembly was moved by\nOPTIONS:\n1. Sardar Patel   \n2. Jawaharlal Nehru   \n3. K M Munshi   \n4. B R Ambedkar\n\n");
	strcpy(q[9].que, "* QUESTION: The members of the Rajya Sabha are elected for a term\n OPTIONS:\n1. 3 Years   \n2. 4 Years   \n3. 5 Years   \n4. 6 Years\n\n");
	strcpy(q[10].que, "* QUESTION: The power of Supreme Court of India to decide the dispute between the centre and states falls under its\nOPTIONS:\n1. Original Jurisdiction   \n2. Constitutional Jurisdiction   \n3. Advisory Jurisdiction   \n4. Appellate Jurisdiction\n\n");
	a[1].ans = 1;
	a[2].ans = 1;
	a[3].ans = 3;
	a[4].ans = 3;
	a[5].ans = 4;
	a[6].ans = 3;
	a[7].ans = 4;
	a[8].ans = 2;
	a[9].ans = 4;
	a[10].ans = 1;
	int n = 10;
	point(q, a, n);
}
void current_affairs()
{
	int n = 10;
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	printf("\n\n");
	strcpy(q[1].que, "* QUESTION: Russian made sputnikV vaccine against Covid-19 infection has been rolled out in india by\n OPTIONS:\n1. Serum Institute of India   \n2. Bharat Biotech International Limited   \n3. Dr.Reddy's Laboratory   \n4. Biological E\n\n");
	strcpy(q[2].que, "* QUESTION: Black Fungus disease is associated with which type of infection ?\nOPTIONS:\n1. Typhoid Infection   \n2. Corona Virus Infection   \n3. Influenza Infection   \n4. Diphtheria Infection\n\n");
	strcpy(q[3].que, "* QUESTION: Who is the current Secretary General of the United Nations Organization (U. N. O.) ?\nOPTIONS:\n1. Antonio Guterres   \n2. Margaret Chan   \n3. Hiroshi Nakajima   \n4. Ban Ki Moon\n\n");
	strcpy(q[4].que, "* QUESTION: Which one of the following is not a member of the Quad group of nations ?\n OPTIONS:\n1. USA   \n2. Australia   \n3. Japan   \n4. France\n\n");
	strcpy(q[5].que, "* QUESTION: Which railway zone has become the first fully electrified railway zone in India ?\n  OPTIONS:\n1. North West Zone   \n2. West Central Zone   \n3. Central Zone   \n4. South Central Zone\n\n");
	strcpy(q[6].que, "* QUESTION: Which one of the following sea ports gained significance for handling iron-ore exports to Japan ?\n  OPTIONS:\n1. Kandla   \n2. Ennore   \n3. Kochi   \n4. Mormugao\n\n");
	strcpy(q[7].que, "* QUESTION: Which of the following is not a formal International or Regional organization ?\n OPTIONS:\n1. QUAD   \n2. NAFTA   \n3. ASEAN   \n4. OIC\n\n");
	strcpy(q[8].que, "* QUESTION: Which country enacted a law to force digital giants such as Facebook and google pay local publishers for news content ?\n  OPTIONS:\n1. Canada   \n2. India   \n3. Australia   \n4. New Zealand\n\n");
	strcpy(q[9].que, "* QUESTION: Abhijit Vinayak Banerjee was awarded the 2019 Nobel memorial Prize in -\n  OPTIONS:\n1. Physics   \n2. Chemistry   \n3. Literature   \n4. Economics\n\n");
	strcpy(q[10].que, "* QUESTION: Which Indian city set up Child-friendly police station as per the guidelines provided by the \nNational Commissioner for Protection of Child Rights (NCPCR)?\n OPTIONS:\n1. Prayagraj   \n2. Pune   \n3. Mumbai   \n4. Delhi\n\n");
	a[1].ans = 3;
	a[2].ans = 2;
	a[3].ans = 1;
	a[4].ans = 4;
	a[5].ans = 2;
	a[6].ans = 4;
	a[7].ans = 1;
	a[8].ans = 3;
	a[9].ans = 4;
	a[10].ans = 2;
	point(q, a, n);

}

void shuffle()
{
	system("COLOR E0");
	int x;
	printf("\n\tSELECT TOPIC\n\t1.GENERAL KNOWLEDGE\n\t2.ENTERTAINMENT\n\t3.SCIENCE\n\t4.HISTORY\n\t5.POLITICS\n\t6.CURRENT AFFAIRS\n");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1: gk();
		break;
	case 2:entertainment();
		break;
	case 3:science();
		break;
	case 4:history();
		break;
	case 5:politics();
		break;
	case 6:current_affairs();
		break;
	default: printf("error");
		break;
	}
	return 0;
}
void delay(ms) // delay function
{
	clock_t timeDelay = ms + clock(); // Step up the difference from clock delay
	while (timeDelay > clock())
		; // stop when the clock is higher than time delay
}

int counter( int guess)
{
	while (!_kbhit())
	{ // keep looping while the user didn't hit any key
		if (second > 10)
		{
			flag = 1;
			break;
		}
		if (minute > 59)
		{ // after minute is greater than 59, reset minute and increase 1 hour
			minute = 0;
			++hour;
		}
		if (second > 59)
		{ // after second is greater than 59, reset second and increase 1 minute
			second = 0;
			++minute;
		}
		printData(guess); // print out the new data, delay for 1000 millisecond and increase 1 second.
		delay(1000);
		second += 1;
	}
	if (flag == 0)
	{
		selection(answer, section); // after the user hit the keyboard, call the menu selection

	}
	else
	{
		printf("Time completed...");
		delay(1000);
		hour = minute = second = 0;
		flag = 0;
	}
}

int point(struct question q[], struct answer a[], int n)
{
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "a");
	int guess;
	int pts = 0;
	int i = 1;
	while (i <= n)
	{
		printf("%s\n", q[i].que);
		fprintf(fp, "%s\n", q[i].que);
		scanf_s("%d", &guess);
		printf("            %d:%d:%d\n", hour, minute, second);
		if (guess == a[i].ans)
		{
			pts++;
			system("COLOR AF");
			printf("correct\n\n\n");
			printf("\n******************************************************************************************\n");
			fprintf(fp, "correct\n\n\n");
			fprintf(fp, "\n****************************************************************************************\n");

		}
		else
		{
			system("COLOR CF");
			printf("incorrect\n\n\n");
			printf("\n * *****************************************************************************************\n");

			fprintf(fp, "incorrect\n\n\n");
			fprintf(fp, "\n****************************************************************************************\n");

		}
		i++;
		system("cls");
	}
	printf("\n\nSCORE:%d/10\n", pts);
	fprintf(fp, "\n\nSCORE:%d/%d\n", pts, n);


}
void main()
{
	system("COLOR E0");
	char name[50];
	int p, a[50];;
	FILE* fp = fopen("C:\\Users\\Pro\\Desktop\\results.txt", "w");
	printf("\n\n\t\t\t\t\t\t\tWELCOME\n\n");
	fprintf(fp, "\n\n\t\t\t\t\t\t\tWELCOME\n\n");
	printf("\tENTER NUMBER OF PLAYERS\n\t");
	fprintf(fp, "\tENTER NUMBER OF PLAYERS\n\t");
	scanf("%d", &p);
	printf("\n\tENTER PLAYER NAME");
	fprintf(fp, "\n\tENTER PLAYER NAME");
	for (int i = 1;i <= p;i++)
	{
		printf("\n\tPLAYER %d>", i);
		fprintf(fp, "\n\tPLAYER %d>", i);
		getchar();
		gets(name);
		printf("\n\tPLAYER %s\n\n\n: ", name);
		fprintf(fp, "\n\tPLAYER %s\n\n\n: ", name);
		shuffle();
	}

}



