//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIMenuElement;
@protocol _UIMenuStateObserverableLeaf;

@protocol _UIMenuElementStateObserver <NSObject>
- (void)_elementWillPerformAction:(UIMenuElement<_UIMenuStateObserverableLeaf> *)arg1;
- (void)_elementStateDidChange:(UIMenuElement<_UIMenuStateObserverableLeaf> *)arg1;
@end

