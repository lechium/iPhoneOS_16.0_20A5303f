//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCContentArchivable-Protocol.h>

@class NSData, NSDate;

@protocol FCAVAssetKeyType <FCContentArchivable>
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSData *keyData;
@end
