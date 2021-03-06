//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCPDatabaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_databases;	// 16 = 0x10
}

+ (_Bool)existsDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x004000000005db93
+ (id)sharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x001000000005db14
+ (id)sharedDatabaseManager;	// IMP=0x001000000005d7cc
- (void).cxx_destruct;	// IMP=0x002000000005dc2d
- (id)sharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x001000000005d859
- (id)init;	// IMP=0x001000000005d745

@end

