//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ABSSerializer : NSObject
{
    NSDictionary *_options;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000031607
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;	// IMP=0x00100000000315f0
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;	// IMP=0x00100000000315de
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x0010000000031507
- (id)dataFromChange:(id)arg1;	// IMP=0x00100000000314a4
- (id)initWithOptions:(id)arg1;	// IMP=0x0010000000031431

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

