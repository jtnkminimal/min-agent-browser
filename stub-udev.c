/* Stub libudev for headless chromium in minimal sandbox */
#include <stddef.h>

/* Version script requires LIBUDEV_183 symbol version */

void *udev_new(void) { return NULL; }
void udev_unref(void *udev) {}
void *udev_device_get_action(void *dev) { return NULL; }
void *udev_device_get_devnode(void *dev) { return NULL; }
void *udev_device_get_devtype(void *dev) { return NULL; }
void *udev_device_get_parent(void *dev) { return NULL; }
void *udev_device_get_parent_with_subsystem_devtype(void *dev, const char *s, const char *d) { return NULL; }
void *udev_device_get_properties_list_entry(void *dev) { return NULL; }
void *udev_device_get_property_value(void *dev, const char *key) { return NULL; }
void *udev_device_get_subsystem(void *dev) { return NULL; }
void *udev_device_get_sysattr_value(void *dev, const char *attr) { return NULL; }
void *udev_device_get_sysname(void *dev) { return NULL; }
void *udev_device_get_syspath(void *dev) { return NULL; }
void *udev_device_new_from_devnum(void *udev, char type, unsigned long long devnum) { return NULL; }
void *udev_device_new_from_subsystem_sysname(void *udev, const char *s, const char *n) { return NULL; }
void *udev_device_new_from_syspath(void *udev, const char *path) { return NULL; }
void udev_device_unref(void *dev) {}
void *udev_enumerate_new(void *udev) { return NULL; }
int udev_enumerate_add_match_subsystem(void *e, const char *s) { return -1; }
void *udev_enumerate_get_list_entry(void *e) { return NULL; }
int udev_enumerate_scan_devices(void *e) { return -1; }
void udev_enumerate_unref(void *e) {}
void *udev_list_entry_get_name(void *entry) { return NULL; }
void *udev_list_entry_get_next(void *entry) { return NULL; }
int udev_monitor_add_match_subsystem(void *m, const char *s) { return -1; }
int udev_monitor_enable_receiving(void *m) { return -1; }
int udev_monitor_filter_add_match_subsystem_devtype(void *m, const char *s, const char *d) { return -1; }
int udev_monitor_get_fd(void *m) { return -1; }
void *udev_monitor_new_from_netlink(void *udev, const char *name) { return NULL; }
void *udev_monitor_receive_device(void *m) { return NULL; }
void udev_monitor_unref(void *m) {}
