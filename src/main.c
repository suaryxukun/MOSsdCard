#include <mgos.h>
#include "mgos_SD.h"

enum mgos_app_init_result mgos_app_init(void)
{
    SD* sd = mgos_sd_create();
    mgos_sd_begin(sd, 19, 23, 18, 5);
    mgos_sd_read(sd, "test1");
    mgos_sd_write(sd, "test2");
    mgos_sd_listFiles(sd);
    mgos_sd_close(sd);

    return MGOS_APP_INIT_SUCCESS;
}
