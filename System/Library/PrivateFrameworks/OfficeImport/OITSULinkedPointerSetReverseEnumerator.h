//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator
{
    OITSULinkedPointerSetEntry *mTail;	// 8 = 0x8
    OITSULinkedPointerSetEntry *mLastUsed;	// 16 = 0x10
}

- (id)nextObject;	// IMP=0x000000000024ce46
- (id)initWithLastEntry:(id)arg1;	// IMP=0x000000000024cdf3

@end
