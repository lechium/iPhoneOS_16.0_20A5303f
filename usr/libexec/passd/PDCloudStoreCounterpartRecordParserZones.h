//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject
{
    NSMutableDictionary *_zoneNameToRecords;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000003b1f39
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b1e30
- (void)removeIdentifiers:(id)arg1;	// IMP=0x00100000003b1d05
- (id)allRecords;	// IMP=0x00100000003b1c02
- (void)addRecord:(id)arg1;	// IMP=0x00100000003b1aef
- (id)init;	// IMP=0x00100000003b1a99

@end

