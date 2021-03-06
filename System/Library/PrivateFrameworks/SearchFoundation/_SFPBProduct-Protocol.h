//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBURL;

@protocol _SFPBProduct <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool buyable;
@property(copy, nonatomic) NSString *displayName;
@property(retain, nonatomic) _SFPBURL *availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

