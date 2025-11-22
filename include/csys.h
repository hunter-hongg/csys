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

#ifdef __cplusplus
}
#endif

#endif
