//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppLaunchNotifcationPrewarmAlert : NSObject
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000310d01
- (void)_alertDidFinishProcessing;	// IMP=0x0010000000310cb9
- (void)_presentAlertUIWithStatus:(long long)arg1 repeatPrompt:(_Bool)arg2;	// IMP=0x0010000000310b3c
- (void)displayAlertIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000310797

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

