//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NavdDoomIncident : NSObject
{
    _Bool _shouldSuppress;	// 8 = 0x8
    NSString *_uniqueID;	// 16 = 0x10
    NSString *_destinationID;	// 24 = 0x18
    NSDate *_expiryDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002f61a
- (void).cxx_destruct;	// IMP=0x002000000002fde6
@property(nonatomic) _Bool shouldSuppress; // @synthesize shouldSuppress=_shouldSuppress;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)objectForJSON;	// IMP=0x001000000002fbfa
- (id)nameForJSON;	// IMP=0x001000000002fbe8
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002f745
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002f622
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002f4ea
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002f38a
- (id)initWithUniqueID:(id)arg1 destinationID:(id)arg2 expiryDate:(id)arg3;	// IMP=0x001000000002f272

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

