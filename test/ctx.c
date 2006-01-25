/* Generated by re2c */
#line 1 "ctx.re"
#include <cstring>
#include <iostream>

struct Scanner
{
	Scanner(char *txt)
		: cur(txt), lim(txt + strlen(txt))
	{
	}
	
	char    *cur;
	char    *lim;
	char	*ptr;
	char    *tok;
};

#define	YYCTYPE		char
#define	YYCURSOR	s.cur
#define	YYLIMIT		s.lim
#define	YYMARKER	s.ptr
#define	YYFILL(n)	

enum What
{
	UNEXPECTED,
	KEYWORD,
	NUMBER,
	EOI
};

char * tokens[] = { "UNEXPECTED", "KEYWORD", "NUMBER", "EOI" };


int scan(Scanner &s)
{
	YYCTYPE *cursor = s.cur;

	if(cursor == s.lim)
		return EOI;
	
std:
	s.tok = cursor;


#line 48 "<stdout>"
{
	YYCTYPE yych;
	YYCTYPE *yyctxmarker = YYCURSOR;

	if((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch(yych){
	case 0x09:
	case ' ':	goto yy6;
	case 0x0A:	goto yy8;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy4;
	case 'a':
	case 'b':	goto yy2;
	default:	goto yy9;
	}
yy2:
	yyctxmarker = YYCURSOR + 1;
	++YYCURSOR;
	switch((yych = *YYCURSOR)) {
	case '0':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy12;
	case '1':	goto yy15;
	default:	goto yy3;
	}
yy3:
#line 58 "ctx.re"
	{
		return UNEXPECTED;
	}
#line 94 "<stdout>"
yy4:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy11;
yy5:
#line 48 "ctx.re"
	{ return NUMBER;  }
#line 102 "<stdout>"
yy6:
	++YYCURSOR;
yy7:
#line 51 "ctx.re"
	{
		if(s.cur == s.lim)
			return EOI;
		cursor = s.cur;
		goto std;
	}
#line 113 "<stdout>"
yy8:
	yych = *++YYCURSOR;
	goto yy7;
yy9:
	yych = *++YYCURSOR;
	goto yy3;
yy10:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy11:
	switch(yych){
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy10;
	default:	goto yy5;
	}
yy12:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch(yych){
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy12;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = yyctxmarker;
#line 47 "ctx.re"
	{ return KEYWORD; }
#line 159 "<stdout>"
yy15:
	++YYCURSOR;
	switch((yych = *YYCURSOR)) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy12;
	default:	goto yy16;
	}
yy16:
	YYCURSOR = yyctxmarker;
#line 46 "ctx.re"
	{ return KEYWORD; }
#line 179 "<stdout>"
}
#line 61 "ctx.re"

}

#define YYMAXFILL 3


int main(int,char**)
{
	Scanner s("a77 a1 b8 b1");
	
	int t, n = 0;
	while ((t = scan(s)) != EOI)
	{
		std::cout << (++n) << ": " << tokens[t] << " = \""; std::cout.write(s.tok, s.cur-s.tok); std::cout << "\"" << std::endl;
	}
}