#include <stdio.h>
#include <stdlib.h>

#include "config_def.h"

#define PRIMARY_ADDRESS		0x80000
#define SECONDARY_ADDRESS	0x1080000

void set_config(pCONFIG_DEF config)
{
	config->primary_address = PRIMARY_ADDRESS;
	config->secondary_address = SECONDARY_ADDRESS;
}

int main(int argc, char **argv)
{
	FILE *fp;
	CONFIG_DEF config;
	
	set_config(&config);
	
	if( (fp = fopen("config.bin", "wb")) != NULL )
	{
		fwrite(&config, sizeof(CONFIG_DEF), 1, fp);
		fclose(fp);
	}
	
	return 0;
}

// end of file

