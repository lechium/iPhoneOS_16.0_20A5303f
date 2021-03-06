//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationships : NSObject
{
    NSString *mPath;	// 8 = 0x8
    NSMutableArray *mRelationships;	// 16 = 0x10
    NSMutableDictionary *mRelationshipMap;	// 24 = 0x18
    unsigned long long mNextId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000037ef52
- (void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2;	// IMP=0x000000000037ed00
- (id)targetForKey:(id)arg1;	// IMP=0x000000000037ec98
- (id)idForKey:(id)arg1;	// IMP=0x000000000037ec30
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(_Bool)arg4;	// IMP=0x000000000037e843
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3;	// IMP=0x000000000037e81e
- (_Bool)isEmpty;	// IMP=0x000000000037e801
- (id)path;	// IMP=0x000000000037e7f3
- (id)initWithPath:(id)arg1;	// IMP=0x000000000037e71a

@end

