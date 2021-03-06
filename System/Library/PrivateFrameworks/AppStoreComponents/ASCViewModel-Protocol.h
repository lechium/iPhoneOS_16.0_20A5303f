//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSObject-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class ASCAdamID, ASCViewMetrics;

@protocol ASCViewModel <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) ASCViewMetrics *metrics;
@property(readonly, copy, nonatomic) ASCAdamID *id;
@end

