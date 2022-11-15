/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 0;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching
*/
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
        "Fira Mono:pixelsize=14:regular:antialias=true:autohint=true",
        "NotoColorEmoji:pixelsize=12:regular:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
        /*     fg         bg       */
        [SchemeNorm] = { "#e6e6e6", "#282828" },
        [SchemeSel] = { "#000", "#008080" },
        [SchemeSelHighlight] = { "#26a98b", "#282828" },
        [SchemeNormHighlight] = { "#edb54b", "#000000" },
        [SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
        [SchemeNorm] = { OPAQUE, alpha },
        [SchemeSel] = { OPAQUE, alpha },
        [SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 18;
static unsigned int columns    = 1;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
