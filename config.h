/* dusk-castle theme for dmenu — paste over the matching parts of config.h */

static int topbar = 1;
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=10"
};
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
	/*                  fg         bg       */
	[SchemeNorm]          = { "#cdc6ee", "#1b1a29" },
	[SchemeSel]           = { "#1b1a29", "#b79ce6" },
	[SchemeOut]           = { "#1b1a29", "#f5b668" },
	/* with the "highlight" patch: matched text in sunset orange / pink */
};

static int borderpx = 0;

static unsigned int lines = 0;
static const char worddelimiters[] = " ";
/* Recommended patches: center, border, fuzzymatch, highlight
 * border width 2 with colour #b79ce6 matches the floating window look. */
