//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface GKFriendRequestListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x004000000006300b
- (id)internalRepresentation;	// IMP=0x0020000000062d64
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00100000000629f3

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) _Bool wasViewed; // @dynamic wasViewed;

@end
