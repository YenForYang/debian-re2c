/* Generated by re2c */
// This test demonstrates that fallback tags should be forward-propagated
// from final states, and that merging all possible fallback tags and
// backward-propagating them from default transitions is too crude,
// inhibits tag interference where there is none and gets in the way
// of tag deduplication.

// Three overlapping rules (constructed so that they trigger 'yyaccept'
// generation), 2nd and 3rd rules have variable-length tail so that their
// tags are not fixed. When 2nd rule is matched, 3rd rule's tag can be
// forgotten: we will never fall back to 3rd rule after matching another
// rule.


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
	p = yyt1;
	{ 3 p }
yy3:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy6;
	default:	goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy7;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':	goto yy8;
	case 'c':	goto yy9;
	default:	goto yy7;
	}
yy7:
	p = yyt1;
	{ 2 p }
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:	goto yy5;
	}
yy9:
	++YYCURSOR;
	goto yy7;
yy10:
	++YYCURSOR;
	{ 1 }
}

re2c: warning: line 17: rule matches empty string [-Wmatch-empty-string]
