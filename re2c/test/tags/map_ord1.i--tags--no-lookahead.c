/* Generated by re2c */
// incorrect automaton if mapping of TDFA states ignores version order

{
	YYCTYPE yych;
	yyt1 = NULL;
	yyt2 = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		++YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	t = yyt1;
	{}
yy3:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		++YYCURSOR;
		goto yy4;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
yy4:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		++YYCURSOR;
		goto yy5;
	default:	goto yy2;
	}
yy5:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		++YYCURSOR;
		goto yy5;
	default:
		yyt1 = yyt2;
		goto yy2;
	}
}

re2c: warning: line 4: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 4: tag 't' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
