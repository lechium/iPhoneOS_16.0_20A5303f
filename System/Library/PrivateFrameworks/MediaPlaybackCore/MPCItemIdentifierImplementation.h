//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPCItemIdentifierImplementation : NSObject
{
    NSString *_contentItemID;	// 8 = 0x8
    long long _repeatIndex;	// 16 = 0x10
}

+ (id)identifierForMFQueuePlayerItem:(id)arg1;	// IMP=0x001000000014bfad
- (void).cxx_destruct;	// IMP=0x000000000014bf9d
@property(nonatomic) long long repeatIndex; // @synthesize repeatIndex=_repeatIndex;
@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014bf3d
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014be82
@property(readonly) unsigned long long hash;
- (id)initWithContentItemID:(id)arg1 repeatIndex:(long long)arg2;	// IMP=0x000000000014bddf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
