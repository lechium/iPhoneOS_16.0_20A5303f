//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APUnfairRecursiveLock;

@interface APCacheableSynchronizedObject
{
    APUnfairRecursiveLock *_lock;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000dcfbe
- (void).cxx_destruct;	// IMP=0x00200000000dd113
@property(readonly, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
- (void)unlockObject;	// IMP=0x00100000000dd0c5
- (void)lockObject;	// IMP=0x00100000000dd080
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000dd023
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000dcfc6

@end

