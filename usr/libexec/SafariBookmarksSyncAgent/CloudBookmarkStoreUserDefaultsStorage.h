//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSUserDefaults;

@interface CloudBookmarkStoreUserDefaultsStorage : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000060402
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSData *migrationStateEncodedRecordData;
- (id)migrationStateKey;	// IMP=0x0010000000060302
- (id)init;	// IMP=0x00100000000602f4
- (id)initWithUserDefaults:(id)arg1 type:(long long)arg2;	// IMP=0x001000000006026b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
