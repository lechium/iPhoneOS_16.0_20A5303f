//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SecCDKeychainAccessControlEntity : NSObject
{
    long long _entityType;	// 8 = 0x8
    NSString *_stringRepresentation;	// 16 = 0x10
}

+ (id)accessControlEntityWithType:(long long)arg1 stringRepresentation:(id)arg2;	// IMP=0x004000000003f764
- (void).cxx_destruct;	// IMP=0x002000000003f754
@property(readonly, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f6b7
- (id)initWithManagedEntity:(id)arg1;	// IMP=0x001000000003f62b
- (id)_initWithEntityType:(long long)arg1 stringRepresentation:(id)arg2;	// IMP=0x001000000003f5ad

@end

