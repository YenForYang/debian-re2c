/* Generated by re2c */
#line 1 "condtype.c.re"
int main ()
{
	YYCONDTYPE cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 10 "condtype.c.c"
{
	unsigned char yych;
	switch (YYGETCONDITION()) {
	case yyca: goto yyc_a;
	case yycb: goto yyc_b;
	}
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy3;
	}
yy3:
yy4:
	++YYCURSOR;
#line 9 "condtype.c.re"
	{}
#line 29 "condtype.c.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy8;
	}
yy8:
yy9:
	++YYCURSOR;
#line 10 "condtype.c.re"
	{}
#line 42 "condtype.c.c"
}
#line 11 "condtype.c.re"

	return 0;
}
re2c: warning: line 11: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
re2c: warning: line 11: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
