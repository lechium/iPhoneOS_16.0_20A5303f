//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface APSettingsStorageKeychain : NSObject
{
    NSDictionary *_defaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000fa27b
@property(readonly, nonatomic) NSDictionary *defaults; // @synthesize defaults=_defaults;
- (void)synchronize;	// IMP=0x00100000000fa26b
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000fa172
- (id)valueForKey:(id)arg1;	// IMP=0x00100000000fa05f
- (id)initWithDefaultValues:(id)arg1;	// IMP=0x00100000000f9fec

@end
