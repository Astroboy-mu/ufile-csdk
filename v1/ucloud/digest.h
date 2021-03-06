#ifndef _UFILESDK_C_UCOUD_DIGEST_
#define _UFILESDK_C_UCOUD_DIGEST_

#include "http.h"
#include "config.h"
#include "string_util.h"


enum {
    HEAD_FIELD_CHECK = 1,
    QUERY_STRING_CHECK,
};

int  sign_with_data(const char *utf8String2Sign, char *signature);

int token(struct curl_slist *req_headers,
          const char *method,
          const int type,
          const char *bucket,
          const char *key,
          const char *multipartMimetype,
          char *token);

void canonicalized_ucloud_headers(struct curl_slist *req_headers, char *ucloud_headers);


#endif