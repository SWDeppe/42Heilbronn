#include "projects_0.h"
#include "projects_1.h"
#include "projects_2.h"
#include "projects_3.h"

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>       
#include <sys/wait.h>
#include <stdarg.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

/* Can point to ANY void-returning function, whatever its parameters */
typedef void (*generic_func_t)();
#define assert(x, testName) if ( (x) > 1 )  {printf(ANSI_COLOR_GREEN"%s", (testName)  );printf("%s\n", "Worked" ANSI_COLOR_RESET );}else {printf(ANSI_COLOR_RED"%s", (testName)  );printf("%s", "failed\n" ANSI_COLOR_RESET );}

#define _GNU_SOURCE


int pow_(int a, int b)
{
	int i = 1;
	int val = a;
	while(i < b)
	{
		val = val * a; 
		i++;
	}
	return(val);
}
void _internal_testOutput(const char *expected,
                          const char *testName,
                          generic_func_t func)
{
    char buf[1000];
    int pipefd[2];
    pipe(pipefd);
    pid_t cpid = fork();
    int saved_stdout = dup(STDOUT_FILENO);

    if (cpid == 0) {
        // Child
        close(pipefd[1]);
        int n = read(pipefd[0], buf, sizeof(buf) - 1);
		if (n < 0) n = 0;            // in case of read error
		buf[n] = '\0';     
		assert(strcmp(buf, expected) == 0, testName);
        close(pipefd[0]);
        _exit(0);
    } else {
        // Parent
        close(pipefd[0]);
        dup2(pipefd[1], STDOUT_FILENO);
        func();
        close(pipefd[1]);
        wait(NULL);
    }

    dup2(saved_stdout, STDOUT_FILENO);
    close(saved_stdout);


    
}

#define testOutput(Func, Expected, Name, ...)                      \
do {                                                               \
    void __wrap(void){ Func(__VA_ARGS__); }                        \
    _internal_testOutput(Expected, Name, (generic_func_t)__wrap);  \
} while(0)

void intToChar(int a, char *out)
{
	int i = 0;
    if (a == 0)
    {
        out[i++] = '0';
    }
    else
    {
        if (a < 0)
        {
            out[i++] = '-';
            a = -a;
        }
        int start = i;
        while (a > 0)
        {
            out[i++] = (a % 10) + '0';
            a /= 10;
        }
        for (int j = start, k = i - 1; j < k; j++, k--)
        {
            char tmp = out[j];
            out[j] = out[k];
            out[k] = tmp;
        }
    }
    out[i] = '\0';

    //printf("intToChar called with a=%d, out=%p\n", tmp, (void*)out); undo if segmentation fault 
}
void	write_int(int int_)
{
	char string[100];
	int len;

	intToChar(int_, string);
	len = ft_strlen(string);
	write(1, string, len);
}
int checkStringsSame(char *string, char *string2)
{
	int bool = 1;
	int i = 0;
	int chortest = (ft_strlen(string) < ft_strlen(string2));
	if(chortest){
		while(i < ft_strlen(string2) && bool > 0){
			bool = (string2[i] == string[i]);
			i++;
		}
	}else if(!chortest){
		while(i < ft_strlen(string) && bool > 0){
			bool = (string2[i] == string[i]);
			i++;
		}
	}
	return bool;
}
int main(int arguments_count, char *input[]) 
{
	int whichProj;
	int whichCaseEx;
	if(arguments_count)
		arguments_count++;
	if(arguments_count > 2){
		whichProj = *input[1] - 48;	
		whichCaseEx = *input[2] - 48;
	}

	char logExProj[25] = "Project  , exercice:  \n";
	logExProj[8] = whichProj + 48;
	logExProj[21] = whichCaseEx + 48;
	write(1,logExProj,25);

//////////////////////////////////////test variables//////////////////////////////////


                 /////////////////try different cases ///////////////////
	int max = INT_MAX;
	int min = INT_MIN;
	//unsigned int maxUns = UINT_MAX;
	int try0 = 0;
	int try1 = -5;
	int *ptrtry0 = &try0;
//	int *ptrtry1 = &try1;
	int tabLen = 4;
	int intTab[6] = {INT_MAX, 1, 2 ,45, 3, INT_MIN};
//	int tab2[5] = {2, INT_MIN, INT_MAX ,5, 3 };
	
//	char normalChar = 'a';
//	char *ptrChar = &normalChar;

	int stringLen = 13;
	char string[100] = "Hello world!\n";
	
	int string2Len = 15;
	char string2[100] = "Hello world 2 !\n";
	
//	char *out1 = "ImpOsIbLe";
//	char *out2 = "ImpOsIbLe";
	int test = -429496729;
	int test2 = 2;
//	int intTabTest[6];
	
	switch(whichProj){
	case 0:
		switch(whichCaseEx){
		case 0: 
			ft_putchar('g');
			break;
		case 1: 

			ft_print_alphabet();
			break;
		case 2: 

				ft_print_reverse_alphabet();
			break;
		case 3: 

			ft_print_numbers();
			
			break;

		case 4: 

			ft_is_negative(1);
			ft_is_negative(-1);
			ft_is_negative(0);
			break;

		case 5: 
			//char test[1000] = "012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 467, 468, 469, 478, 479, 489, 578, 579, 589, 689, 789"
			//_internal_testOutput(*test, "Try real", (generic_func_t)ft_print_comb);
			break;

		case 6: 
			ft_print_comb2();
			break;

		case 7:
			ft_putnbr(500);
			break;
		
		default:
			ft_print_comb2();
			break;
		}
	break;
	case 1:
		switch(whichCaseEx){
		
		case 0: 
			ft_ft(ptrtry0);
			assert(try0 == 42, "Try 0 : ")
			break;
		case 1: 
			int *nbr2 = ptrtry0;
			int **nbr3 = &nbr2;
			int ***nbr4 = &nbr3;
			int ****nbr5 = &nbr4;
			int *****nbr6 = &nbr5;
			int ******nbr7 = &nbr6;
			int *******nbr8 = &nbr7;
			int ********nbr9 = &nbr8;

			ft_ultimate_ft(&nbr9);

			assert(try0 == 42, "Try 0 ")
			break;
		case 2: 
			ft_swap(&max , &min);
			ft_swap(&try0 , &try1);
			assert((max==INT_MIN && min==INT_MAX), "Test max min : ");
			assert((try0 == -5 && try1 == 0), "Test try0 try1 : ");
			break;
		case 3: 
			int mod;
			int div;
			ft_div_mod(max, try1, &div, &mod);
			assert(div == test && mod == test2, "Test div modulo : ");
			break;
		case 4: 
			int *ptra = &max;
			int *ptrb = &try1;

			ft_ultimate_div_mod(ptra, ptrb);	

			assert(max == test && try1 == test2, "Test utlimate div modulo : ");
			break;
		case 5:     
			char exeptedOut[1000] = "Hello Bob"; 
			testOutput(ft_putstr, "Hello Bob", "Try bob 1", exeptedOut);
			testOutput(ft_putstr, "Hello Bob", "Try bob 2", "Hello Bob 2");
			//testOutput(ft_putstr, string2, "Try string 2 ", string2);
			break;
		case 6: 
			assert(ft_strlen(string) == stringLen, "Test string length : ");
			assert(ft_strlen(string2) == string2Len, "Test string length : ");
			break;
		case 7: 
			ft_rev_int_tab(&intTab[0], tabLen);
			int intTabTestReverted[6] = {INT_MIN,3 , 45 ,2, 1,INT_MAX };
			assert((intTab == intTabTestReverted), "Test tab resvert : ");
			break;
		case 8: 
			ft_sort_int_tab(&intTab[0], tabLen);
			int intTabTestSort[6] = {INT_MIN, 1,2,3, 45,INT_MAX };
			int i = 0;
			int bool;
			while(i++ < stringLen && bool > 0){
				bool = (string2[i] == string[i]);
			}
			assert(intTab == intTabTestSort, "Test tab resvert : ");
			break;
		default:
			char* err = "Please enter an exercice\n";
			write(1, &err,1);
			write(1,"\n",1);
			break;
		
		}
		break;
		
		case 2:
		
		int i;
		int bool;
		switch(whichCaseEx){

		case 0: 
			
			ft_strcpy(string2, string);
			i = 0;
			bool = 1;
			while(i++ < stringLen && bool > 0){
				bool = (string2[i] == string[i]);
			}
			assert(bool, "Check string var : ");
			strcpy(string, "opps") ;
			assert(string2 == ft_strcpy(string2, string), "Check string return : ");
			
			strcpy(string2, "opps") ;
			strcpy(string, "") ;
			ft_strcpy(string2, string);
			bool = 1;
			i = 0;
			while(i++ < stringLen && bool > 0){
				bool = (string2[i] == string[i]);
			}
			assert(bool, "Check null string : ");
			//ft_strncpy(&string2,  &string);
			break;
		case 1:
			i = 0;
			strncpy(string2, string, 13);
			bool = 1;
			while(i < 13 && bool >= 0){
				bool = (string2[i] == string[i]);
				i++;
			}
			assert(bool, "Check string var : ");
			strcpy(string2, "opps") ;
			assert(string2 == ft_strncpy(string2, string, 13), "Check string return : ");
			
			strcpy(string2, "opps") ;
			strcpy(string, "") ;
			ft_strncpy(string2, string, 1);
			bool = 1;
			i = 0;
			while(i < 1 && bool > 1){
				bool = (string2[i] == string[i]);
				i++;
			}
			assert(bool, "Check null string : ");

			strcpy(string2, "opps") ;
			strcpy(string, "to small haha") ;
			ft_strncpy(string2, string, 8);
			bool = 1;
			i = 0;
			while(i++ < 7 && bool > 0){
				bool = (string2[i] == string[i]);
			}
			assert(bool, "Check smaller n : ");

			strcpy(string2, "opps") ;
			strcpy(string, "to long haha") ;
			ft_strncpy(string2, string, 100);
			bool = 1;
			i = 0;
			while(i++ < 11 && bool > 0){
				bool = (string2[i] == string[i]);
			}
			assert(bool, "Check longer n : ");
			break;

		
		case 2: 
			assert(ft_str_is_alpha("00") != 1, "[error]Check num : ");
			assert(ft_str_is_alpha("") == 1, "Check empty : ");
			assert(ft_str_is_alpha("aAaegasljbqzZ") == 1, "Check alpha : ");
			assert(ft_str_is_alpha("--") != 1, "[error]Check invalid : ");

			break;
		case 3: 
			assert(ft_str_is_numeric("a123456789") == 1, "Check num : ");
			assert(ft_str_is_numeric("") == 1, "Check empty : ");
			assert(ft_str_is_numeric("aAaegasljbqzZ") != 1, "[error]Check alpha : ");
			assert(ft_str_is_numeric("--") != 1, "[error]Check invalid : ");
			break;
		case 4: 
			assert(ft_str_is_lowercase("0123456789") != 1, "[error]Check num : ");
			assert(ft_str_is_lowercase("aAaegasljbqzZ") != 1, "[error]Check mixed alpha : ");
			assert(ft_str_is_lowercase("--") != 1, "[error]Check invalid : ");
			assert(ft_str_is_lowercase("UPPERCASE") != 1, "[error]Check upercase : ");
			assert(ft_str_is_lowercase("") == 1, "Check empty : ");
			assert(ft_str_is_lowercase("lowercase") == 1, "Check lowercases : ");
			char Out = 'l';
			assert(ft_str_is_lowercase(&Out) == 1, "Check lowercases : ");
			break;
		case 5:
			assert(ft_str_is_uppercase("0123456789") != 1, "[error]Check num : ");
			assert(ft_str_is_uppercase("aAaegasljbqzZ") != 1, "[error]Check mixed alpha : ");
			assert(ft_str_is_uppercase("--") != 1, "[error]Check invalid : ");
			assert(ft_str_is_uppercase("lowercase") != 1, "[error]Check lowercases : ");
			assert(ft_str_is_uppercase("") == 1, "Check empty : ");
			assert(ft_str_is_uppercase("UPPERCASE") == 1, "Check upercase : ");
			assert(ft_str_is_uppercase("L") == 1, "Check lowercases : ");
			break;
		case 6: 
			string[0] = 129; 
			string[1] = 155; 
			assert(ft_str_is_printable("0123456789") == 1, "Check num : ");
			assert(ft_str_is_printable("aAaegasljbqzZ") == 1, "Check mixed alpha : ");
			assert(ft_str_is_printable("--!@#$^&*()+_") == 1, "Check special : ");
			assert(ft_str_is_printable("lowercase") == 1, "Check lowercases : ");
			assert(ft_str_is_printable("") == 1, "Check empty : ");
			assert(ft_str_is_printable("UPPERCASE") == 1, "Check upercase : ");
			assert(ft_str_is_printable("L") == 1, "Check lowercases : ");
			assert(ft_str_is_printable("") == 1, "Check upercase : ");
			assert(ft_str_is_printable(string) != 1, "[error]Check unprintable : ");
			break;
		case 7:
			assert(checkStringsSame(ft_strupcase("0123456789"),"0123456789") , "Check return num : ");
			assert(checkStringsSame(ft_strupcase(""),""), "Check null string : ");
			assert(checkStringsSame(ft_strupcase(string), "HELLO WORLD!\n"), "Check string : ");
			ft_strcpy(string, "Hello world!");
			ft_strupcase(string);
			assert(checkStringsSame(string, "HELLO WORLD!"), "Check return mixed alpha : ");
			assert(checkStringsSame(ft_strupcase("--!@#$^&*()+_"), "--!@#$^&*()+_"), "Check return special : ");
			assert(!(checkStringsSame(ft_strupcase(string2), "Hello WORLD 2 !\n")), "[error]Check string2 : ");
			break;
		case 8: 
			assert(checkStringsSame(ft_strlowcase("0123456789"),"0123456789") , "Check return num : ");
			assert(checkStringsSame(ft_strlowcase(""),""), "Check null string : ");
			assert(checkStringsSame(ft_strlowcase(string), "hello world!\n"), "Check string : ");
			ft_strcpy(string, "Hello world!");
			ft_strlowcase(string);
			assert(checkStringsSame(string, "hello world!"), "Check return mixed alpha : ");
			assert(checkStringsSame(ft_strlowcase("--!@#$^&*()+_"), "--!@#$^&*()+_"), "Check return special : ");
			assert(!(checkStringsSame(ft_strlowcase(string2), "Hello WORLD 2 !\n")), "[error]Check string2 : ");
			break;/**/
		default:
			char* err = "Please enter an exercice\n";
			write(1, &err,1);
			break;
		}
		break;

		case 3:
		switch(whichCaseEx){
		case 0: 
			assert(ft_strcmp("hello", "hello") == 0, "Same string : ");
			assert(ft_strcmp("zello", "hello") == 1, "Grater string : ");
			assert(ft_strcmp("aello", "hello") == -1, "Smaller string : ");
			assert(ft_strcmp("hello", "helloasdas") == 0, "Tinier string : ");
			assert(ft_strcmp("helloasdas", "hello") == 1, "Longer string : ");
			assert(ft_strcmp("", "") == 0, "Nul string : ");
			break;
		case 1:
			assert(ft_strncmp("hello", "hello", 5) == 0, "Same string : ");
			assert(ft_strncmp("zello", "hello", 5) == 1, "Grater string : ");
			assert(ft_strncmp("aello", "hello", 5) == -1, "Smaller string : ");
			assert(ft_strncmp("hello", "helloasdas", 7) == 0, "Tinier string : ");
			assert(ft_strncmp("helloasdas", "hello", 8) == 1, "Longer string : ");
			assert(ft_strncmp("hello", "helloasdas", 6) == 0, "Tinier string : ");
			assert(ft_strncmp("helloasdas", "hello", 5) == 0, "Longer string : ");
			assert(ft_strncmp("", "", 0) == 0, "Nul string : ");
			break;
		case 2: 
			ft_strcpy(string, "Hello world!");
			ft_strcat(string);
			assert(checkStringsSame(string, "HELLO WORLD!"), "Check return mixed alpha : ");
			break;/*
		case 3: 
			assert(ft_str_is_numeric("a123456789") == 1, "Check num : ");
			assert(ft_str_is_numeric("") == 1, "Check empty : ");
			assert(ft_str_is_numeric("aAaegasljbqzZ") != 1, "[error]Check alpha : ");
			assert(ft_str_is_numeric("--") != 1, "[error]Check invalid : ");
			break;
		case 4: 
			assert(ft_str_is_lowercase("0123456789") != 1, "[error]Check num : ");
			assert(ft_str_is_lowercase("aAaegasljbqzZ") != 1, "[error]Check mixed alpha : ");
			assert(ft_str_is_lowercase("--") != 1, "[error]Check invalid : ");
			assert(ft_str_is_lowercase("UPPERCASE") != 1, "[error]Check upercase : ");
			assert(ft_str_is_lowercase("") == 1, "Check empty : ");
			assert(ft_str_is_lowercase("lowercase") == 1, "Check lowercases : ");
			char Out = 'l';
			assert(ft_str_is_lowercase(&Out) == 1, "Check lowercases : ");
			break;
		case 5:
			assert(ft_str_is_uppercase("0123456789") != 1, "[error]Check num : ");
			assert(ft_str_is_uppercase("aAaegasljbqzZ") != 1, "[error]Check mixed alpha : ");
			assert(ft_str_is_uppercase("--") != 1, "[error]Check invalid : ");
			assert(ft_str_is_uppercase("lowercase") != 1, "[error]Check lowercases : ");
			assert(ft_str_is_uppercase("") == 1, "Check empty : ");
			assert(ft_str_is_uppercase("UPPERCASE") == 1, "Check upercase : ");
			assert(ft_str_is_uppercase("L") == 1, "Check lowercases : ");
			break;*/
		default:
			char* err = "Please enter an exercice\n";
			write(1, &err,1);
			break;
		}
		break;
		
		
	break;
	}


//////////////////////////////prepare the .txt for commande////////////////////////////
	char dir[9];
	dir[1] = 'c';
	dir[2] = whichProj / 10 + 48;
	dir[3] = whichProj % 10 + 48;
	dir[4] = '/';
	dir[5] = 'e';
	dir[6] = 'x';
	dir[7] = whichCaseEx / 10 + 48;
	dir[8] = whichCaseEx % 10 + 48;
	dir[9] = '\0';
	
	FILE* fptr;
	fptr = fopen("dir.txt", "w+");

	write(1,"\nNorminette controle :\n",23);
    fprintf(fptr, "%s", &dir[1]);
    fclose(fptr);
}