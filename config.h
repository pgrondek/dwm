/* See LICENSE file for copyright and license details. */

/* mbp-mappings */
#define XF86MonBrightnessDown   0x1008ff03
#define XF86MonBrightnessUp     0x1008ff02
#define XF86LauncherKB1         0x1008ff4a
#define XF86LauncherKB2         0x1008ff4b
#define XF86KbdBrightnessUp     0x1008ff05
#define XF86KbdBrightnessDown   0x1008ff06
#define XF86AudioLowerVolume    0x1008ff11
#define XF86AudioMute           0x1008ff12
#define XF86AudioRaiseVolume    0x1008ff13
#define XF86AudioPlay           0x1008ff14
#define XF86AudioStop           0x1008ff15
#define XF86AudioPrev           0x1008ff16
#define XF86AudioNext           0x1008ff17
#define XF86AudioPause          0x1008ff31
#define XF86Launch1             0x1008ff41

/* appearance */
static const unsigned int borderpx  = 4;        /* border pixel of windows */
static const unsigned int gappx     = 5;        /* gaps between windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int usealtbar          = 1;        /* 1 means use non-dwm status bar */
static const char *altbarclass      = "Polybar"; /* Alternate bar class name */
static const char *alttrayname      = "tray";    /* Polybar tray instance name */
static const char *altbarcmd        = "$HOME/bin/bar"; /* Alternate bar launch command */
static const char *fonts[]          = { "FontAwesome:size=10", "emojione:size=10", "monospace:size=10"};
static const char dmenufont[]       = "monospace:size=10";
static const char col_gray0[]       = "#111111";
static const char col_gray1[]       = "#212121";
static const char col_gray2[]       = "#303030";
static const char col_gray3[]       = "#424242";
static const char col_gray4[]       = "#b1b1b1";
static const char col_gray5[]       = "#c0c0c0";
static const char col_border[]      = "#0D47A1";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray4, col_gray0, col_gray1 },
	[SchemeSel]  = { col_gray4, col_gray2, col_border },
};

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7 ", "8", "9"};
static const char *tags0[] = { "\uF269", "\uf121", "\uf001", "\uf075", "\uF1B2", "\uF10C", "\uF1B6", "\uf17a", "\uf0ad"};

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
    /* class                    instance    title                       tags mask   isfloating  isfakefullscreen    isterminal  noswallow   ignoretransient monitor */
     {"st",                      NULL,       NULL,                       0,           0,          0,                  1,          1,          0,              -1},
     {"Xephyr",                  NULL,       NULL,                       0,           1,          0,                  0,          0,          0,              -1},
     {"Xnest",                   NULL,       NULL,                       0,           1,          0,                  0,          0,          0,              -1},
     {"streamdeck",              NULL,       NULL,                       0,           0,          0,                  0,          1,          0,              -1},
     { "smile",                  NULL,       NULL,                       0,           1,          0,                  0,          1,          0 },
     /* Tag 1   */
     {"firefox",                 NULL,       NULL,                       1 << 0,      0,          1,                  0,          0,          0,              -1},
     {"firefox",                 NULL,       "Picture-in-Picture",       DWM_ALL_TAGS,1,          0,                  0,          0,          0,              -1},
     {"firefox",                 "Toolkit",  NULL                ,       DWM_ALL_TAGS,1,          0,                  0,          0,          0,              -1},
     /* Tag 2  */
     {"jetbrains-studio",        NULL,       NULL,                       1 << 1,      1,          0,                  0,          0,          0,              0},
     {"jetbrains-toolbox",       NULL,       NULL,                       1 << 1,      1,          0,                  0,          1,          0,              0},
    {"jetbrains-idea",          NULL,       NULL,                       1 << 1,      0,          0,                  0,          1,          1,              0},
    {"jetbrains-studio",        NULL,       NULL,                       1 << 1,      0,          0,                  0,          1,          1,              0},
    {"jetbrains-webstorm",      NULL,       NULL,                       1 << 1,      0,          0,                  0,          1,          1,              0},
    {"jetbrains-clion",         NULL,       NULL,                       1 << 1,      0,          0,                  0,          1,          1,              0},
    {"jetbrains-pycharm",       NULL,       NULL,                       1 << 1,      0,          0,                  0,          1,          1,              0},
    {"jetbrains-idea",          NULL,       "Welcome to IntelliJ IDEA", 1 << 1,      1,          0,                  0,          1,          0,              0},
    {"jetbrains-clion",         NULL,       "Welcome to CLion",         1 << 1,      1,          0,                  0,          1,          0,              0},
     /* Tag 3  */
    { "Cider",                  NULL,       NULL,                       1 << 2,      0,          0,                  0,          0,          0,              -1},
     /* Tag 4  */
    { "Signal",                 NULL,       NULL,                       1 << 3,      0,          0,                  0,          0,          0,              -1},
     /* Tag 5  */
    { "PrusaSlicer",            NULL,       NULL,                       1 << 4,      0,          0,                  0,          0,          0,              -1},
     /* Tag 6  */
     /* Tag 7 */
    { "Steam",                  NULL,       NULL,                       1 << 6,      0,          0,                  0,          0,          0,              -1},
    { "steam",                  NULL,       NULL,                       1 << 6,      0,          0,                  0,          0,          0,              -1},
    { NULL,                     NULL,       "Steam",                    1 << 6,      0,          0,                  0,          0,          0,              -1},
     /* Tag 8  */
    { "looking-glass-client",   NULL,       NULL,                       1 << 7,      0,          0,                  0,          0,          0,              -1},
     /* Tag 9  */
    { "Nextcloud",              NULL,       NULL,                       1 << 8,      0,          0,                  0,          0,          0,              -1},
    { "Virt-viewer",            NULL,       NULL,                       1 << 8,      0,          0,                  0,          0,          0,              -1},
    { "Barrier"    ,            NULL,       NULL,                       1 << 8,      0,          0,                  0,          0,          0,              -1},
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
    { "|||",      col },     /* column layout */
    { "|M|",      centeredmaster },
    { "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
    { NULL,       NULL},
};
static const  Layout* monocleLayout = &layouts[4];

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray5, "-sb", col_gray2, "-sf", col_gray4, NULL };
static const char *termcmd[]  = { "st", NULL };
static const char scratchpadname[] = "scratchpad";
static const char *scratchpadcmd[] = { "st", "-t", scratchpadname, "-g", "120x34", NULL };

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_b,      spawn,          SHCMD("bt-menu") },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
    { MODKEY,                       XK_grave,  togglescratch,  {.v = scratchpadcmd } },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_o,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_s,      zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,             XK_q,      killclient,     {0} },
//	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
//	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
//	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
    { MODKEY|ControlMask,		    XK_comma,  cyclelayout,    {.i = -1 } },
    { MODKEY|ControlMask,           XK_period, cyclelayout,    {.i = +1 } },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },
	{ MODKEY|ShiftMask,             XK_g,      fullscreen,     {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },

    { MODKEY,                       XK_Escape, spawn,          SHCMD("lock") },
    { MODKEY,                       XK_F1,     spawn,          SHCMD("firefox") },
    { MODKEY,                       XK_F2,     spawn,          SHCMD("nautilus") },
    { MODKEY,                       XK_F3,     spawn,          SHCMD("gedit") },
    { MODKEY,                       XK_F4,     spawn,          SHCMD("prusa-slicer") },

    { MODKEY,                       XK_F5,     spawn,          SHCMD("idea") },
    { MODKEY,                       XK_F6,     spawn,          SHCMD("clion") },
    { MODKEY,                       XK_F7,     spawn,          SHCMD("pycharm") },
    { 0,                            XK_Print,  spawn,          SHCMD("flameshot screen") },
    { MODKEY|ShiftMask,             XK_s,      spawn,          SHCMD("flameshot gui") },
    { MODKEY|ControlMask,           XK_s,      spawn,          SHCMD("flameshot screen") },
    { MODKEY,                       XK_semicolon,spawn,        SHCMD("flatpak run it.mijorus.smile") },

    { MODKEY,                       XF86Launch1,            spawn,    SHCMD("killall; sleep 1; picom") },

    { 0,                            XF86AudioPlay,          spawn,    SHCMD("playerctl play-pause")} ,
    { 0,                            XF86AudioPause,         spawn,    SHCMD("playerctl pause")} ,
    { 0,                            XF86AudioStop,          spawn,    SHCMD("playerctl stop")} ,
    { 0,                            XF86AudioNext,          spawn,    SHCMD("playerctl next")} ,
    { 0,                            XF86AudioPrev,          spawn,    SHCMD("playerctl previous")} ,
    { 0,                            XF86AudioLowerVolume,   spawn,    SHCMD("volume-set 2%-")},
    { 0,                            XF86AudioRaiseVolume,   spawn,    SHCMD("volume-set 2%+")},
    { 0,                            XF86AudioMute,          spawn,    SHCMD("amixer -D pulse sset Master toggle")},
    { 0,                            XF86MonBrightnessDown,  spawn,    SHCMD("brightnessctl s 10%-")},
    { 0,                            XF86MonBrightnessUp,    spawn,    SHCMD("brightnessctl s +10%")},

	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_e,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        cyclelayout,    {.i = -1 } },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          SHCMD("gsimplecal") },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

static const char *ipcsockpath = "/tmp/dwm.sock";
static IPCCommand ipccommands[] = {
  IPCCOMMAND(  view,                1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  toggleview,          1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  tag,                 1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  toggletag,           1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  tagmon,              1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  focusmon,            1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  focusstack,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  zoom,                1,      {ARG_TYPE_NONE}   ),
  IPCCOMMAND(  incnmaster,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  killclient,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  togglefloating,      1,      {ARG_TYPE_NONE}   ),
  IPCCOMMAND(  setmfact,            1,      {ARG_TYPE_FLOAT}  ),
  IPCCOMMAND(  setlayoutsafe,       1,      {ARG_TYPE_PTR}    ),
  IPCCOMMAND(  quit,                1,      {ARG_TYPE_NONE}   )
};

