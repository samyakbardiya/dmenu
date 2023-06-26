/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code Nerd Font:size=12",
	"Twemoji:pixelsize=14:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *dynamic     = NULL;      /* -dy option; dynamic command to run on input change */

//                                  // GRUVBOX   //  MATERIAL
static const char col_black[]       = "#282828"; // "#202020";
static const char col_black1[]      = "#3c3836"; // "#2E2C2B";
static const char col_gray[]        = "#928374"; // "#928374";
static const char col_red[]         = "#fb4934"; // "#ea6962";
static const char col_green[]       = "#b8bb26"; // "#a9b665";
static const char col_yellow[]      = "#fabd2f"; // "#d8a657";
static const char col_blue[]        = "#83a598"; // "#7daea3";
static const char col_purple[]      = "#d3869b"; // "#d3869b";
static const char col_aqua[]        = "#8ec07c"; // "#89b482";
static const char col_orange[]      = "#fe8019"; // "#e78a4e";
static const char col_white[]       = "#ebdbb2"; // "#D4BE98";
static const char col_white1[]      = "#d5c4a1"; // "#a89984";

static const char *colors[SchemeLast][2] = {
                            /*     fg        bg     */
             [SchemeNorm] = { col_white, col_black },
              [SchemeSel] = { col_black, col_red },
     [SchemeSelHighlight] = { col_black, col_yellow },
    [SchemeNormHighlight] = { col_black, col_orange },
              [SchemeOut] = { col_black, col_green },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
