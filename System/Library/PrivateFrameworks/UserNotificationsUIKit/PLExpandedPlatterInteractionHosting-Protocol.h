//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class UIBezierPath, UIView;

@protocol PLExpandedPlatterInteractionHosting <NSObject>
@property(readonly, nonatomic) UIView *viewForPreview;

@optional
@property(readonly, copy, nonatomic) UIBezierPath *visiblePath;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@end
