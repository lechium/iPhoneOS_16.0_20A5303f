//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteUI/NSObject-Protocol.h>

@class UIViewController;
@protocol RUIServerHook;

@protocol RUIServerHookDelegate <NSObject>
- (void)dismissObjectModelsAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (UIViewController *)presentationContextForHook:(id <RUIServerHook>)arg1;
@end

