#if defined _tfdbbot_included
 #endinput
#endif
#define _tfdbbot_included

/**
 * Check if the bot is enabled.
 *
 */
native int TFDB_botEnabled();

/**
 * Get the current owner of flicks.
 *
 * @param owner	A char variable to store the owner string in.
 */
native int TFDB_flicksOwner(const char[] owner);

/**
 * Get the current path for flicks.
 *
 * @param path	A char variable to store the path string in.
 */
native int TFDB_flicksPath(const char[] path);

public SharedPlugin __pl_tfdbbot = 
{
	name = "tfdb_botmimic",
	file = "tfdb_botmimic.smx",
#if defined REQUIRE_PLUGIN
	required = 1
#else
	required = 0
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_botmimic_SetNTVOptional()
{
	MarkNativeAsOptional("TFDB_botEnabled");
	MarkNativeAsOptional("TFDB_flicksPath");
	MarkNativeAsOptional("TFDB_flicksOwner");
}
#endif