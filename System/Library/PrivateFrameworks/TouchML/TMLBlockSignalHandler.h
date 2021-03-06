//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLBlockSignalHandler : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    int _flags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000123af
- (id)callWithArguments:(id)arg1;	// IMP=0x000000000001224c
- (void)detach;	// IMP=0x0000000000012246
- (void)attach;	// IMP=0x0000000000012240
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000121d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

