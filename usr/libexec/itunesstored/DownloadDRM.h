//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (id)_sinfsArrayWithDataKey:(id)arg1;	// IMP=0x002000000008aab0
@property(readonly) SinfsArray *sinfsArray;
@property(readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (id)sinfForIdentifier:(long long)arg1;	// IMP=0x001000000008a94a
@property(readonly) SinfsArray *pinfsArray;
@property(readonly, getter=isDRMFree) _Bool DRMFree;
- (id)firstDataForSinfDataKey:(id)arg1;	// IMP=0x001000000008a7f5
- (void)dealloc;	// IMP=0x001000000008a7ba
- (id)initWithSinfArray:(id)arg1;	// IMP=0x001000000008a5fb
- (id)init;	// IMP=0x001000000008a5e7

@end
