/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int colorprompt = 0;                 /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
		"monospace:size=10:antialias=true:autohint=true", "NotoColorEmoji:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm]          = { "#d7d7d7", "#1d2021" },
	[SchemeSel]           = { "#282828", "#f75757" },
 	[SchemeSelHighlight]  = { "#ffa747", "#000000" },
 	[SchemeNormHighlight] = { "#8787f7", "#282828" },
	[SchemeOut]           = { "#000000", "#00ffff" },
 	[SchemeMid]           = { "#d7d7d7", "#121618" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
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
