//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface APSettingsStorageCloud : NSObject
{
    _Bool _useLocalPersistance;	// 8 = 0x8
    NSDictionary *_defaults;	// 16 = 0x10
    NSMutableDictionary *_cloudStore;	// 24 = 0x18
    NSString *_settingsClassNameForCloud;	// 32 = 0x20
    NSString *_settingsClassNameForEFS;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000f9fae
@property(readonly, nonatomic) NSString *settingsClassNameForEFS; // @synthesize settingsClassNameForEFS=_settingsClassNameForEFS;
@property(readonly, nonatomic) NSString *settingsClassNameForCloud; // @synthesize settingsClassNameForCloud=_settingsClassNameForCloud;
@property(readonly, nonatomic) _Bool useLocalPersistance; // @synthesize useLocalPersistance=_useLocalPersistance;
@property(retain, nonatomic) NSMutableDictionary *cloudStore; // @synthesize cloudStore=_cloudStore;
@property(readonly, nonatomic) NSDictionary *defaults; // @synthesize defaults=_defaults;
- (void)synchronize;	// IMP=0x00100000000f9f28
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f9d47
- (id)valueForKey:(id)arg1;	// IMP=0x00100000000f9c4e
- (void)updateCloudStore:(id)arg1;	// IMP=0x00100000000f98c0
- (void)persistLocallyIfNeeded;	// IMP=0x00100000000f976f
- (void)dealloc;	// IMP=0x00100000000f96bc
- (id)initWithDefaultValues:(id)arg1 shouldUseLocalPersistance:(_Bool)arg2 forSubclass:(Class)arg3;	// IMP=0x00100000000f91f8
- (id)initWithDefaultValues:(id)arg1;	// IMP=0x00100000000f911d

@end

