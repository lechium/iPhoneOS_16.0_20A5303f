//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDLocationMap : NSObject
{
    NSMutableDictionary *_locationsByUniqueID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000003fe1b8
- (id)description;	// IMP=0x00100000003fe1a2
- (id)locationsForUniqueID:(id)arg1;	// IMP=0x00100000003fe18c
- (void)insertLocation:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x00100000003fe0e2
- (id)init;	// IMP=0x00100000003fe08c

@end
