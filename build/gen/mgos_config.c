/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/2.8.1/apps/empty/esp32/build_contexts/build_ctx_030265856/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /fwbuild-volumes/2.8.1/apps/empty/esp32/build_contexts/build_ctx_030265856/build/gen/mos_conf_schema.yml
 */

#include <stddef.h>
#include "mgos_config.h"

const struct mgos_conf_entry mgos_config_schema_[56] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 55},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 8},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "filter", .offset = offsetof(struct mgos_config, debug.filter)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 2},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "password", .offset = offsetof(struct mgos_config, device.password)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 13},
  {.type = CONF_TYPE_OBJECT, .key = "mount", .offset = offsetof(struct mgos_config, sys.mount), .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
  {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
  {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
  {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
  {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 6},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c.unit_no)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 15},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "ws", .offset = offsetof(struct mgos_config, rpc.ws), .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
  {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, rpc.ws.ssl_client_cert_file)},
  {.type = CONF_TYPE_OBJECT, .key = "sd_spi", .offset = offsetof(struct mgos_config, sd_spi), .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "pin_miso", .offset = offsetof(struct mgos_config, sd_spi.pin_miso)},
  {.type = CONF_TYPE_INT, .key = "pin_mosi", .offset = offsetof(struct mgos_config, sd_spi.pin_mosi)},
  {.type = CONF_TYPE_INT, .key = "pin_clk", .offset = offsetof(struct mgos_config, sd_spi.pin_clk)},
  {.type = CONF_TYPE_INT, .key = "pin_cs", .offset = offsetof(struct mgos_config, sd_spi.pin_cs)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Getters {{{ */
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
int         mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
const char *mgos_config_get_debug_filter(struct mgos_config *cfg) {
  return cfg->debug.filter;
}
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}
const char *mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
const char *mgos_config_get_device_password(struct mgos_config *cfg) {
  return cfg->device.password;
}
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg) {
  return &cfg->sys.mount;
}
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg) {
  return cfg->sys.mount.path;
}
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_type;
}
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_opts;
}
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_type;
}
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_opts;
}
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
const char *mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}
int         mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
int         mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
int         mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
int         mgos_config_get_i2c_unit_no(struct mgos_config *cfg) {
  return cfg->i2c.unit_no;
}
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}
int         mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg) {
  return &cfg->rpc.ws;
}
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg) {
  return cfg->rpc.ws.enable;
}
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg) {
  return cfg->rpc.ws.server_address;
}
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_min;
}
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_max;
}
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_server_name;
}
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_ca_file;
}
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_client_cert_file;
}
const struct mgos_config_sd_spi *mgos_config_get_sd_spi(struct mgos_config *cfg) {
  return &cfg->sd_spi;
}
int         mgos_config_get_sd_spi_pin_miso(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_miso;
}
int         mgos_config_get_sd_spi_pin_mosi(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_mosi;
}
int         mgos_config_get_sd_spi_pin_clk(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_clk;
}
int         mgos_config_get_sd_spi_pin_cs(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_cs;
}
/* }}} */

/* Setters {{{ */
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, val);
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val) {
  cfg->debug.level = val;
}
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.filter, val);
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stdout_uart = val;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stderr_uart = val;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val) {
  cfg->debug.factory_reset_gpio = val;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, val);
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val) {
  cfg->debug.mbedtls_level = val;
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.id, val);
}
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.password, val);
}
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.path, val);
}
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_type, val);
}
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_opts, val);
}
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_type, val);
}
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_opts, val);
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.tz_spec, val);
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val) {
  cfg->sys.wdt_timeout = val;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, val);
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.enable = val;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.i2c_addr = val;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.ecdh_slots_mask = val;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->conf_acl, val);
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val) {
  cfg->i2c.enable = val;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val) {
  cfg->i2c.freq = val;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val) {
  cfg->i2c.debug = val;
}
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int         val) {
  cfg->i2c.unit_no = val;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.sda_gpio = val;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.scl_gpio = val;
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.enable = val;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_frame_size = val;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_queue_length = val;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val) {
  cfg->rpc.default_out_channel_idle_close_timeout = val;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.acl_file, val);
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, val);
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_file, val);
}
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.enable = val;
}
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.server_address, val);
}
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.reconnect_interval_min = val;
}
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.reconnect_interval_max = val;
}
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, val);
}
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_file, val);
}
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_client_cert_file, val);
}
void mgos_config_set_sd_spi_pin_miso(struct mgos_config *cfg, int         val) {
  cfg->sd_spi.pin_miso = val;
}
void mgos_config_set_sd_spi_pin_mosi(struct mgos_config *cfg, int         val) {
  cfg->sd_spi.pin_mosi = val;
}
void mgos_config_set_sd_spi_pin_clk(struct mgos_config *cfg, int         val) {
  cfg->sd_spi.pin_clk = val;
}
void mgos_config_set_sd_spi_pin_cs(struct mgos_config *cfg, int         val) {
  cfg->sd_spi.pin_cs = val;
}
/* }}} */
