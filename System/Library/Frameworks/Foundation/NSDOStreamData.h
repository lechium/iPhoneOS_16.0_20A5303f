//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface NSDOStreamData : NSMutableData
{
    id refObject;	// 8 = 0x8
    struct {
        id data;
        char *datap;
        char *limitp;
        char *startp;
        id callback;
        _Bool datapVM;
    } stream;	// 16 = 0x10
}

- (unsigned long long)length;	// IMP=0x0000000000545b57
- (void *)mutableBytes;	// IMP=0x0000000000545b45
- (const void *)bytes;	// IMP=0x0000000000545b33
- (void)finalize;	// IMP=0x0000000000545a9c
- (void)dealloc;	// IMP=0x00000000005459fb
- (id)init;	// IMP=0x00000000005459f2

@end
