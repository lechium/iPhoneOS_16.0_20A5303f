//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface NTKDComplicationStoreComplicationDescriptorMigrator : NSObject
{
    NSString *_collectionIdentifier;	// 8 = 0x8
    NSUUID *_deviceUUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000036b2
- (void)run;	// IMP=0x00100000000035c0
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x001000000000351c

@end
