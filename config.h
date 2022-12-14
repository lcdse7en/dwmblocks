//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// sudo cp * /usr/local/bin
//https://github.com/JayPhil2k19/dwmblocks/tree/master/statusbar
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*	{"",	"cpubars",	5,	17},*/
  {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"🕴 ",	"music",	1,	11},
	{"",	"volume",	1,	10},
  {"",	"nettraf",	1,	16},
	{"",	"memory",	10,	14},
	{"",	"disk",		60,	5},
	{"",	"cputemp",	10,	18},
  // {"",	"cpubars",	5,	4},
/*	{"",	"brightness",	0,	11},*/
/*	{"",	"battery",	60,	3},*/
	{"",	"sb-torrent",	20,	7},
	{"",	"weather",	18000,	2},
	{"",	"clock",	60,	1},
	{"",	"ipaddress",	18000,	3},
  {"",	"internet",	5,	4},
/*	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"pacpackages",	0,	8},
	{"",	"news",		0,	6},
	{"",	"crypto",	0,	13},
	{"",	"price bat \"Basic Attention Token\" 🦁",	0,	20},
	{"",	"price btc Bitcoin 💰",				0,	21},
	{"",	"price lbc \"LBRY Token\" 📚",			0,	22},
	{"",	"torrent",	20,	7},
	{"",	"memory",	10,	14},
	{"",	"cpu",		10,	18},
	{"",	"moonphase",	18000,	17},
	{"",	"mailbox",	180,	12},
	{"",	"nettraf",	1,	16},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"clock",	60,	1},
	{"",	"internet",	5,	4},
	{"",	"help-icon",	0,	15},*/
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
