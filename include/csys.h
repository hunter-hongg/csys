#ifndef __CSYS_H_INCLUDE_FLAG
#define __CSYS_H_INCLUDE_FLAG

#include <cerror.h>
#include <glib.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifdef __cplusplus
extern "C" {
#endif

CError CSys_file_new                   (const char*);
CError CSys_file_delete                (const char*);
void   CSys_file_chmod                 (const char*, mode_t);
CError CSys_dir_new                    (const char*);
CError CSys_dir_delete                 (const char*);
void   CSys_dir_chmod                  (const char*, mode_t);

#ifdef __cplusplus
}
#endif

#endif
