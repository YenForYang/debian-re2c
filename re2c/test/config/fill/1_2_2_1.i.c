/* Generated by re2c */
/* autogen */
// re2c:define:YYFILL@len = @@;
// re2c:yyfill:parameter = 0;


{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL;
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
	{ def }
yy4:
	++YYCURSOR;
	{ code }
}

