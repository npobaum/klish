#include <stdlib.h>
#include <stdio.h>
#include <clish/plugin.h>

CLISH_PLUGIN_SYM(anplug_fn)
{
	printf("anplug: Another plugin\n");
	return 0;
}

CLISH_PLUGIN_INIT
{
	printf("anplug: INIT shell = %p\n", clish_shell);
	clish_plugin_add_sym(plugin, anplug_fn, "an_fn");

	return 0;
}

CLISH_PLUGIN_FINI
{
	printf("anplug: FINI this = %p\n", clish_shell);

	return 0;
}


