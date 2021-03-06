//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, NSData;

__attribute__((visibility("hidden")))
@interface MSPCloudContainerCachedRecord : NSObject
{
    CKRecord *_record;	// 8 = 0x8
    NSData *_contentsHash;	// 16 = 0x10
    NSData *_positionHash;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000053086
- (void).cxx_destruct;	// IMP=0x00000000000532fa
@property(retain, nonatomic) NSData *positionHash; // @synthesize positionHash=_positionHash;
@property(retain, nonatomic) NSData *contentsHash; // @synthesize contentsHash=_contentsHash;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005319e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005308e
- (_Bool)isEqualToCloudRecord:(id)arg1;	// IMP=0x0000000000052ef2
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000052b29

@end

