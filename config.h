/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */

static const Block blocks[] = {
	/* icon      command          update: time    signal*/
	{ "",        "sb-music",              5,      11},
	{ "",        "sb-news",               0,      6},
	{ "",        "sb-mailbox",            180,    12},
	{ "",        "sb-clock",              60,     1},
	{ "",        "sb-internet",           5,      4},
	{ "",        "printf ';'",            0,      4},
	{ "",        "sb-dwmver",             0,      15},
	{ "",        "sb-linver",             0,      15},
	{ "",        "sb-nettraf",            1,      16},
	{ "",        "sb-notifystat",         1,      17},
	{ "",        "sb-memory",             5,      14},
	{ "",        "sb-disk /",             60,     0},
	{ "",        "sb-disk /dox",          60,     0},
	{ "",        "sb-pacpackages",        0,      8},
	{ "",        "sb-allpackages",        0,      8},
	{ "",        "sb-cpu",                10,     18},
	{ "",        "sb-cpubars",            1,      18},
	{ "",        "sb-cpufreq",            1,      18},
	{ "",        "sb-weather",            18000,  5},
	{ "",        "sb-volume",             0,      10},
	{ "",        "sb-battery",            5,      3},
	{ "",        "sb-torrent",            20,     7},
	{ "",        "sb-recordings",         0,      9},
};

/* Sets delimiter between status commands. NULL character ('\0') means no delimiter. */
static char *delim = " \177\177 ";

/* Have dwmblocks automatically recompile and run when you edit this file in */
/* vim with the following line in your vimrc/init.vim: */

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
