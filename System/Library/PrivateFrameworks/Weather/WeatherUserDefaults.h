//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WeatherUserDefaults : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e722
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e6b8
- (_Bool)synchronize;	// IMP=0x000000000000e674
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000e5fc
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000000e585
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000000e502
- (id)stringForKey:(id)arg1;	// IMP=0x000000000000e47f
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000000e3fc
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000000e38a
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000e304
- (id)objectForKey:(id)arg1;	// IMP=0x000000000000e281
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x000000000000e202

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
