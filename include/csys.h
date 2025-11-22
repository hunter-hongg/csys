#ifndef __CSYS_H_INCLUDE_FLAG
#define __CSYS_H_INCLUDE_FLAG

#include <cerror.h>
#include <glib.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifdef __cplusplus
extern "C" {
#endif

CError        CSys_file_new                   (const char*);           // 新建文件
CError        CSys_file_delete                (const char*);           // 删除文件
void          CSys_file_chmod                 (const char*, mode_t);   // 更改文件权限
struct stat*  CSys_file_stat                  (const char*);           // 获取文件权限
CError        CSys_dir_new                    (const char*);           // 新建空目录
CError        CSys_dir_delete                 (const char*);           // 删除空目录
void          CSys_dir_chmod                  (const char*, mode_t);   // 更改目录权限
struct stat*  CSys_dir_stat                   (const char*);           // 获取目录权限

#define CSys_INCLUDE &

#define CSys_OWNER_R S_IRUSR
#define CSys_OWNER_W S_IWUSR
#define CSys_OWNER_X S_IXUSR
#define CSys_GROUP_R S_IRGRP
#define CSys_GROUP_W S_IWGRP
#define CSys_GROUP_X S_IXGRP
#define CSys_OTHER_R S_IROTH
#define CSys_OTHER_W S_IWOTH
#define CSys_OTHER_X S_IXOTH

#ifdef __cplusplus
}
#endif

#endif
