//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NavSignShieldInfo : NSObject
{
    int _shieldID;	// 8 = 0x8
    NSString *_shieldStringID;	// 16 = 0x10
    NSString *_shieldText;	// 24 = 0x18
}

+ (id)shieldWithID:(int)arg1 stringID:(id)arg2 text:(id)arg3;	// IMP=0x0040000000050b98
- (void).cxx_destruct;	// IMP=0x0020000000050c30
@property(readonly, copy, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
- (id);	// IMP=0x0010000000050c1c
@property(readonly, nonatomic) int shieldID; // @synthesize shieldID=_shieldID;
- (id)shieldImageWithSize:(long long)arg1 scale:(double)arg2 idiom:(long long)arg3;	// IMP=0x0010000000050a01
- (id)_car_shieldImageWithSize:(long long)arg1 scale:(double)arg2 displayedInDashboard:(_Bool)arg3 nightMode:(_Bool)arg4;	// IMP=0x001000000005083e
- (unsigned long long)hash;	// IMP=0x0010000000050780
- (id)description;	// IMP=0x00100000000506d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000050478
- (id)initWithShieldID:(int)arg1 shieldStringID:(id)arg2 shieldText:(id)arg3;	// IMP=0x0010000000050397

// Remaining properties
@property(readonly, copy, nonatomic) NSString *shieldStringID; // @synthesize shieldStringID=_shieldStringID;

@end

