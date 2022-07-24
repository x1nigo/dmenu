/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 0;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int alpha = 0xff;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Jetbrains Mono:pixelsize=14:regular:antialias=true:autohint=true",
	"JoyPixels:pixelsize=14:regular:antialias=true:autohint=true"
};
static const char *prompt      = "RUN:";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#b8dcff", "#121218" },
	[SchemeSel] = { "#b8dcff", "#212338" },
    [SchemeSelHighlight] = { "#00ffff", "#212338" },
    [SchemeNormHighlight] = { "#ffc978", "#121218" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
