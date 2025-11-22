#include "cerror.h"
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
}
