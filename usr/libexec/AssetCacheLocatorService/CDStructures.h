//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr {
    unsigned int s_addr;
};

struct sockaddr_dl {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    char _field8[12];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_storage {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[6];
    long long _field4;
    char _field5[112];
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;
