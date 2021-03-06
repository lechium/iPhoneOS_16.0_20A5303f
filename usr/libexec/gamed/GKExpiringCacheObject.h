//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface GKExpiringCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x004000000004e96e
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000004e5b7
+ (id)fetchSortDescriptors;	// IMP=0x001000000004da3a
- (void)awakeFromInsert;	// IMP=0x002000000004e542
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x001000000004e1e6
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000004e162
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x001000000004dca8
- (void)invalidate;	// IMP=0x001000000004db08
- (_Bool)isValid;	// IMP=0x001000000004dad5

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end

