//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33EngagementPresentationCoordinator : NSObject
{
    MISSING_TYPE *engagementClient;	// 8 = 0x8
    MISSING_TYPE *eventHub;	// 48 = 0x30
    MISSING_TYPE *messageCoordinator;	// 64 = 0x40
    MISSING_TYPE *subscriptionToken;	// 104 = 0x68
    MISSING_TYPE *engagementBannerRuleInfo;	// 0 = 0x0
    MISSING_TYPE *modalContextProvider;	// 0 = 0x0
    MISSING_TYPE *isActive;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000005e46b0
- (id)init;	// IMP=0x00000000005e4650
- (id)viewControllerForModalPresentation;	// IMP=0x0000000000596380
- (id)contextPropertyWithName:(id)arg1;	// IMP=0x0000000000596290
@property(nonatomic, readonly) _Bool allowsModalMessageDisplay;

@end
