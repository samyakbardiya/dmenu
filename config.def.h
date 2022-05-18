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
 // GRUVBOX_MATERIAL
static const char *colors[SchemeLast][2] = {
                            /*     fg        bg     */
             [SchemeNorm] = { "#D4BE98", "#202020" },
              [SchemeSel] = { "#202020", "#EA6962" },
     [SchemeSelHighlight] = { "#202020", "#D8A657" },
    [SchemeNormHighlight] = { "#202020", "#E78A4E" },
              [SchemeOut] = { "#202020", "#A9B665" },
};
// // GRUVBOX_DARK
//static const char *colors[SchemeLast][2] = {
//                          /*     fg        bg     */
//           [SchemeNorm] = { "#ebdbb2", "#1d2021" },
//            [SchemeSel] = { "#1d2021", "#cc241d" },
//   [SchemeSelHighlight] = { "#1d2021", "#d79921" },
//  [SchemeNormHighlight] = { "#1d2021", "#d6540e" },
//            [SchemeOut] = { "#1d2021", "#98971a" },
//};

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
