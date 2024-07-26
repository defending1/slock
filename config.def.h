/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

/* Gruvbox low-contrast */
static const char *colorname[NUMCOLS] = {
    [INIT] = "2d2d2d",   /* after initialization */
    [INPUT] = "689d6a",  /* during input */
    [FAILED] = "cc241d", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
#define BLUR

/*Set Blur radius*/
static const int blurRadius = 20;

/*Set pixelation radius*/
static const int pixelSize = 20;
