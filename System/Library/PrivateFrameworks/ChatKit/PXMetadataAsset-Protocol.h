//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CLLocation, NSDate;

@protocol PXMetadataAsset <NSObject>
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSDate *creationDate;

@optional
@property(readonly, nonatomic) _Bool cloudIsDeletable;
@end

