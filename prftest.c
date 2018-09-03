#include <stdio.h>
#include <syslog.h>
#include <string.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
       
void main(void)
{
        while(1)
        {
		    if(0 > open("a.text", O_RDONLY))
		    {
				openlog("test", LOG_CONS|LOG_PID, LOG_LOCAL1);
				syslog(LOG_DEBUG, "22222222222222222222222222222222222222222222222");
				sleep(1);
		    }
		    
        }
        closelog();
}
