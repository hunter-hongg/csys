#include "glib.h"
#include <csys.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

CError CSys_file_new(const char *filename) {
  int rtv = creat(filename, 0644);
  if (rtv == 0) {
    return CErrorNew(1, "");
  } else {
    return CErrorNew(0, "创建文件出错");
  }
}
CError CSys_file_delete(const char *filename) {
  int rtv = unlink(filename);
  if (rtv == 0) {
    return CErrorNew(1, "");
  } else {
    return CErrorNew(0, "删除文件出错");
  }
}
void CSys_file_chmod(const char *filename, mode_t mode) {
  chmod(filename, mode);
  return;
}
struct stat *CSys_file_stat(const char *filename) {
  struct stat *buffer = (struct stat *)(g_malloc(sizeof(struct stat)));
  stat(filename, buffer);
  return buffer;
}
CError CSys_dir_new(const char *dirname) {
  int rtv = mkdir(dirname, 0755);
  if (rtv == 0) {
    return CErrorNew(1, "");
  } else {
    return CErrorNew(0, "创建目录出错");
  }
}
CError CSys_dir_delete(const char *dirname) {
  int rtv = rmdir(dirname);
  if (rtv == 0) {
    return CErrorNew(1, "");
  } else {
    return CErrorNew(0, "删除目录出错");
  }
}
void CSys_dir_chmod(const char *dirname, mode_t mode) {
  chmod(dirname, mode);
  return;
}
struct stat *CSys_dir_stat(const char *dirname) {
  return CSys_file_stat(dirname);
}
