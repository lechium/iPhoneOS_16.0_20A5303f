//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackage : NSObject
{
    OISFUZipArchive *mZipArchive;	// 8 = 0x8
    NSMutableDictionary *mEntryMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d711e
- (id)entryWithName:(id)arg1 cacheResult:(_Bool)arg2;	// IMP=0x00000000002d6fd8
- (id)initWithZipArchive:(id)arg1;	// IMP=0x00000000002d6f2b

@end

