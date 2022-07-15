//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDList : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    int mListId;	// 16 = 0x10
    int mListDefinitionId;	// 20 = 0x14
    NSMutableArray *mLevelOverrides;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003f8c64
@property(readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
@property(readonly, nonatomic) int listId; // @synthesize listId=mListId;
- (id)description;	// IMP=0x00000000003f8c14
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;	// IMP=0x00000000003f8b58
- (_Bool)isAnyListLevelOverridden;	// IMP=0x00000000003f8a07
- (id)levelOverrides;	// IMP=0x00000000003f89f9
- (void)removeLevelOverride:(id)arg1;	// IMP=0x00000000003f89e2
- (id)addLevelOverrideWithLevel:(unsigned char)arg1;	// IMP=0x00000000003f8954
- (id)levelOverrideForLevel:(unsigned char)arg1;	// IMP=0x00000000003f87e5
- (id)levelOverrideAt:(unsigned long long)arg1;	// IMP=0x00000000003f87cf
- (unsigned long long)levelOverrideCount;	// IMP=0x00000000003f87b9

@end
