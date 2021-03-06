//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppDelegate, LUIUIUpdateSupport, NSString, UINavigationController;

@interface LUISignInController : NSObject
{
    AppDelegate *_appDelegate;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
    LUIUIUpdateSupport *_uiUpdateSupport;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x0020000000002297
- (void).cxx_destruct;	// IMP=0x0020000000002bb1
@property(retain, nonatomic) LUIUIUpdateSupport *uiUpdateSupport; // @synthesize uiUpdateSupport=_uiUpdateSupport;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000023cd
- (id)init;	// IMP=0x00100000000022ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

