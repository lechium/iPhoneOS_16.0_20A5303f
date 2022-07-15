//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BMMultiStreamVectorClock : NSObject
{
    NSMutableDictionary *_vectorClock;	// 8 = 0x8
}

+ (id)deserialize:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000250a9
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000024ef6
- (void).cxx_destruct;	// IMP=0x002000000002511f
- (id)serialize:(id *)arg1;	// IMP=0x0010000000025085
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000024f21
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000024efe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024bd1
- (unsigned long long)hash;	// IMP=0x00100000000249b5
- (id)description;	// IMP=0x0010000000024942
- (id)allKeys;	// IMP=0x001000000002492c
- (id)vectorClockForStreamIdentifier:(id)arg1;	// IMP=0x00100000000248fa
- (void)setVectorClockTo:(id)arg1 forStreamIdentifier:(id)arg2;	// IMP=0x00100000000248d8
- (id)init;	// IMP=0x0010000000024882

@end
