#ifndef __INCLUDE_CERROR_H_FLAG
#define __INCLUDE_CERROR_H_FLAG

typedef struct _CError {
    int            IsOk;
    const char*    what;
} CError; // 错误结构体

static CError CErrorNew(int IsOk, const char* what) { // 新建错误结构体
    CError tmp;
    tmp.IsOk = IsOk;
    tmp.what = what;
    return tmp;
}

#endif // __INCLUDE_CERROR_H_FLAG
