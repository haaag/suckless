//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    // {"",        "dwm-cpu-bars",         1,                  20},
    // {"",        "dwm-mpc",              1,                  15},
    {"",        "dwm-cpu",              1,                  11},
    {"",        "dwm-temppercore",      3,                  12},
    {"",        "dwm-memory",           3,                  13},
    // {"",        "dwm-nettraf",          1,                  16},
    // {"",        "dwm-storage",         60,               21},
    // {"",        "dwm-mail",            10,                  14},
    // {"",        "dwm-bluetooth",        5,                  17},
    // {"",        "dwm-weather",       3600,                  20},
    {"",        "dwm-battery",         60,                  15},
    {"",        "dwm-pulse",            0,                  10},
    {"",        "dwm-date",            3600,                19},
    {"",        "dwm-time",            30,                  25},
    // {"",        "dwm-updates",       3600,                  22},
    // {"",        "dwm-systray",          3,                  18},
    // {"",        "dwm-systray-bash",     3,                  25},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/apps/suckless/dwmblocks/config.h !cd ~/apps/suckless/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
