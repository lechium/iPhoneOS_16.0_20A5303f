//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE, UIViewController, UIWindow, WFActionUserInterface;

@protocol WFActionUserInterfaceDelegate <NSObject>
- (MISSING_TYPE *)dismissPlatterForActionUserInterface:completionHandler: /* Error: Ran out of types for this method. */;
- (UIWindow *)presentationAnchorForActionUserInterface:(WFActionUserInterface *)arg1;
- (void)actionUserInterface:(WFActionUserInterface *)arg1 setSupportedInterfaceOrientations:(unsigned long long)arg2;
- (void)actionUserInterface:(WFActionUserInterface *)arg1 showViewControllerInPlatter:(UIViewController *)arg2;
- (UIViewController *)viewControllerForPresentingActionUserInterface:(WFActionUserInterface *)arg1;
@end

