//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCopyItem-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFTextCopyItem <SFCopyItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *copyableString;
@end
