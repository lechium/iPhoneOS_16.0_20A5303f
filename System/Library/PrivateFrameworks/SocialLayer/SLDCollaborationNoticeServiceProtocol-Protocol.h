//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SocialLayer/NSObject-Protocol.h>

@class NSArray, NSData;

@protocol SLDCollaborationNoticeServiceProtocol <NSObject>
- (void)sendHighlightEventData:(NSData *)arg1 eventType:(long long)arg2 forAttributionIdentifiers:(NSArray *)arg3 skipAuditTokenCheck:(_Bool)arg4 reply:(void (^)(_Bool))arg5;
@end

