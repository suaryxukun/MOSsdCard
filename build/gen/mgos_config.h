/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/2.8.1/apps/empty/esp32/build_contexts/build_ctx_030265856/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /fwbuild-volumes/2.8.1/apps/empty/esp32/build_contexts/build_ctx_030265856/build/gen/mos_conf_schema.yml
 */

#ifndef MGOS_CONFIG_H_
#define MGOS_CONFIG_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_config_debug {
  char *udp_log_addr;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  int mbedtls_level;
};

struct mgos_config_device {
  char *id;
  char *password;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
  struct mgos_config_sys_atca atca;
};

struct mgos_config_i2c {
  int enable;
  int freq;
  int debug;
  int unit_no;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_rpc_ws {
  int enable;
  char *server_address;
  int reconnect_interval_min;
  int reconnect_interval_max;
  char *ssl_server_name;
  char *ssl_ca_file;
  char *ssl_client_cert_file;
};

struct mgos_config_rpc {
  int enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  char *acl_file;
  char *auth_domain;
  char *auth_file;
  struct mgos_config_rpc_ws ws;
};

struct mgos_config_sd_spi {
  int pin_miso;
  int pin_mosi;
  int pin_clk;
  int pin_cs;
};

struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_device device;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_i2c i2c;
  struct mgos_config_rpc rpc;
  struct mgos_config_sd_spi sd_spi;
};


const struct mgos_conf_entry *mgos_config_schema();

/* Parametrized accessor prototypes {{{ */
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
int         mgos_config_get_debug_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
const char *mgos_config_get_device_id(struct mgos_config *cfg);
const char *mgos_config_get_device_password(struct mgos_config *cfg);
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg);
int         mgos_config_get_i2c_enable(struct mgos_config *cfg);
int         mgos_config_get_i2c_freq(struct mgos_config *cfg);
int         mgos_config_get_i2c_debug(struct mgos_config *cfg);
int         mgos_config_get_i2c_unit_no(struct mgos_config *cfg);
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg);
int         mgos_config_get_rpc_enable(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg);
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg);
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg);
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg);
const struct mgos_config_sd_spi *mgos_config_get_sd_spi(struct mgos_config *cfg);
int         mgos_config_get_sd_spi_pin_miso(struct mgos_config *cfg);
int         mgos_config_get_sd_spi_pin_mosi(struct mgos_config *cfg);
int         mgos_config_get_sd_spi_pin_clk(struct mgos_config *cfg);
int         mgos_config_get_sd_spi_pin_cs(struct mgos_config *cfg);

void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_sd_spi_pin_miso(struct mgos_config *cfg, int         val);
void mgos_config_set_sd_spi_pin_mosi(struct mgos_config *cfg, int         val);
void mgos_config_set_sd_spi_pin_clk(struct mgos_config *cfg, int         val);
void mgos_config_set_sd_spi_pin_cs(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) { return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema()); }
static inline bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) { return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings); }

static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_password(void) { return mgos_config_get_device_password(&mgos_sys_config); }
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const struct mgos_config_sys_atca *mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_unit_no(void) { return mgos_config_get_i2c_unit_no(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_ws *mgos_sys_config_get_rpc_ws(void) { return mgos_config_get_rpc_ws(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_enable(void) { return mgos_config_get_rpc_ws_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_server_address(void) { return mgos_config_get_rpc_ws_server_address(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_rpc_ws_reconnect_interval_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_rpc_ws_reconnect_interval_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_server_name(void) { return mgos_config_get_rpc_ws_ssl_server_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_ca_file(void) { return mgos_config_get_rpc_ws_ssl_ca_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_client_cert_file(void) { return mgos_config_get_rpc_ws_ssl_client_cert_file(&mgos_sys_config); }
static inline const struct mgos_config_sd_spi *mgos_sys_config_get_sd_spi(void) { return mgos_config_get_sd_spi(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sd_spi_pin_miso(void) { return mgos_config_get_sd_spi_pin_miso(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sd_spi_pin_mosi(void) { return mgos_config_get_sd_spi_pin_mosi(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sd_spi_pin_clk(void) { return mgos_config_get_sd_spi_pin_clk(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sd_spi_pin_cs(void) { return mgos_config_get_sd_spi_pin_cs(&mgos_sys_config); }

static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_password(const char *val) { mgos_config_set_device_password(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_enable(int         val) { mgos_config_set_sys_atca_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int         val) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int         val) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_enable(int         val) { mgos_config_set_i2c_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_freq(int         val) { mgos_config_set_i2c_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_debug(int         val) { mgos_config_set_i2c_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_unit_no(int         val) { mgos_config_set_i2c_unit_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_sda_gpio(int         val) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_scl_gpio(int         val) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_enable(int         val) { mgos_config_set_rpc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_frame_size(int         val) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_queue_length(int         val) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int         val) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_acl_file(const char *val) { mgos_config_set_rpc_acl_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_domain(const char *val) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_file(const char *val) { mgos_config_set_rpc_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_enable(int         val) { mgos_config_set_rpc_ws_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_server_address(const char *val) { mgos_config_set_rpc_ws_server_address(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_min(int         val) { mgos_config_set_rpc_ws_reconnect_interval_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_max(int         val) { mgos_config_set_rpc_ws_reconnect_interval_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_server_name(const char *val) { mgos_config_set_rpc_ws_ssl_server_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_ca_file(const char *val) { mgos_config_set_rpc_ws_ssl_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_client_cert_file(const char *val) { mgos_config_set_rpc_ws_ssl_client_cert_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sd_spi_pin_miso(int         val) { mgos_config_set_sd_spi_pin_miso(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sd_spi_pin_mosi(int         val) { mgos_config_set_sd_spi_pin_mosi(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sd_spi_pin_clk(int         val) { mgos_config_set_sd_spi_pin_clk(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sd_spi_pin_cs(int         val) { mgos_config_set_sd_spi_pin_cs(&mgos_sys_config, val); }


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_CONFIG_H_ */
