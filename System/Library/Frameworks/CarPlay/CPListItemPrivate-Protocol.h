//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPListTemplate, NSUUID;

@protocol CPListItemPrivate <NSObject>
- (void)_setNeedsUpdate;
- (void)setListTemplate:(CPListTemplate *)arg1;
- (CPListTemplate *)listTemplate;
- (NSUUID *)identifier;
@end

