//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDDocument, WDList;

__attribute__((visibility("hidden")))
@interface WDListTable : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    NSMutableArray *mLists;	// 16 = 0x10
    NSMutableDictionary *mListMapById;	// 24 = 0x18
    WDList *mNullList;	// 32 = 0x20
    WDList *mDefaultList;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003f9653
- (id)description;	// IMP=0x00000000003f9615
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000c0bf5
- (id)listWithListId:(int)arg1;	// IMP=0x00000000003f957b
- (id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2;	// IMP=0x00000000003f9467
- (id)listAt:(unsigned long long)arg1;	// IMP=0x00000000000f3b2a
- (unsigned long long)listCount;	// IMP=0x00000000000f3b14
- (id)lists;	// IMP=0x00000000003f9459

@end

