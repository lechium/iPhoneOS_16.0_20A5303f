//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/_EXNSExtensionShimScene.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _EXNSExtensionUIShimScene : _EXNSExtensionShimScene
{
    UIViewController *viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000082bd
@property(retain) UIViewController *viewController; // @synthesize viewController;
- (_Bool)shouldAcceptConnection:(id)arg1;	// IMP=0x00000000000081dc
- (void)connectToSession:(id)arg1;	// IMP=0x000000000000803a
- (id)makePrincipalObjectForExtension:(id)arg1;	// IMP=0x0000000000007f3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain) id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
