//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface TXRDefaultBuffer : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000001d40
- (id)map;	// IMP=0x0000000000001cea
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0000000000001c7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001c46
- (void)dealloc;	// IMP=0x0000000000001c17
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000001b9d
- (id)initWithData:(id)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x0000000000001b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
