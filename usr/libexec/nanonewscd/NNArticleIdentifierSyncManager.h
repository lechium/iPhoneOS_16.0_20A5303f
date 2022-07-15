//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NNArticleIdentifierSyncManager : NSObject
{
    NSSet *_synchronizedKeys;	// 8 = 0x8
    NSString *_readonlyResetKey;	// 16 = 0x10
    NSString *_readonlyKey;	// 24 = 0x18
    NSString *_readwriteResetKey;	// 32 = 0x20
    NSString *_readwriteKey;	// 40 = 0x28
}

+ (id)seenManager;	// IMP=0x0040000000007fde
+ (id)savedManager;	// IMP=0x0010000000007f5d
- (void).cxx_destruct;	// IMP=0x00200000000094bb
@property(readonly, nonatomic) NSString *readwriteKey; // @synthesize readwriteKey=_readwriteKey;
@property(readonly, nonatomic) NSString *readwriteResetKey; // @synthesize readwriteResetKey=_readwriteResetKey;
@property(readonly, nonatomic) NSString *readonlyKey; // @synthesize readonlyKey=_readonlyKey;
@property(readonly, nonatomic) NSString *readonlyResetKey; // @synthesize readonlyResetKey=_readonlyResetKey;
@property(readonly, nonatomic) NSSet *synchronizedKeys; // @synthesize synchronizedKeys=_synchronizedKeys;
- (id)_readwriteResetDate;	// IMP=0x00100000000093c0
- (id)_readonlyResetDate;	// IMP=0x00100000000092f7
- (id)_lookupIdentifiersForKey:(id)arg1;	// IMP=0x0010000000008faa
- (id)_readwriteArticleStateLookup;	// IMP=0x0010000000008f4b
- (id)_readonlyArticleStateLookup;	// IMP=0x0010000000008eec
- (void)_makeIdentifier:(id)arg1 active:(_Bool)arg2;	// IMP=0x0010000000008db5
@property(readonly, nonatomic) NSSet *readonlyArticleIdentifiers;
@property(readonly, nonatomic) NSSet *articleIdentifiers;
- (void)removeIdentifier:(id)arg1;	// IMP=0x0010000000008407
- (void)addIdentifier:(id)arg1;	// IMP=0x00100000000083f0
- (void)synchronize;	// IMP=0x001000000000836d
- (void)clearAllIdentifiers;	// IMP=0x001000000000823d
- (id)init;	// IMP=0x001000000000821b
- (id)initWithReadonlyResetKey:(id)arg1 readwriteResetKey:(id)arg2 readonlyKey:(id)arg3 readwriteKey:(id)arg4;	// IMP=0x001000000000805f

@end
