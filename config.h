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
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 4;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 77;
static const int logow =
    12; /* grid width and height for right center alignment*/
static const int logoh = 6;
