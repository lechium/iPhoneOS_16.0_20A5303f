//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIScenePresenter, _UIScenePresenterOwner;

@protocol _UIScenePresenterOwnerDelegate <NSObject>
- (void)ownerDidInvalidateLastPresenter:(_UIScenePresenterOwner *)arg1;
- (void)owner:(_UIScenePresenterOwner *)arg1 willPrioritizePresenter:(_UIScenePresenter *)arg2 deactivatePresenter:(_UIScenePresenter *)arg3;
@end
