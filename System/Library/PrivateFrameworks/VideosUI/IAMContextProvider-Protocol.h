//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class IAMMessageCoordinator, IAMPresentationPolicy, NSDictionary, NSString;

@protocol IAMContextProvider <NSObject>
- (id)contextPropertyWithName:(NSString *)arg1;

@optional
- (void)messageCoordinator:(IAMMessageCoordinator *)arg1 didRequestAction:(NSDictionary *)arg2;
- (IAMPresentationPolicy *)presentationPolicyForPolicyGroup:(long long)arg1;
@end

