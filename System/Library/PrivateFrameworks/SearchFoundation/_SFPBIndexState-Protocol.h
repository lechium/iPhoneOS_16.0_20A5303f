//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _SFPBIndexState <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int searchIndex;
@property(nonatomic) int percentAttachmentsIndexed;
@property(nonatomic) int percentMessagesIndexed;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
