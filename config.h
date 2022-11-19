/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
        "Liberation Mono:pixelsize=14:regular:antialias=true:autohint=true",
        "NotoColorEmoji:pixelsize=12:regular:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
        /*                        fg         bg       */
        [SchemeNorm] = { "#ebdbb2", "#121218" },
        [SchemeSel] = { "#ebdbb2", "#181828" },
        [SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
        [SchemeNorm] = { OPAQUE, alpha },
        [SchemeSel]  = { OPAQUE, alpha },
        [SchemeOut]  = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 16;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
