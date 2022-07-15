//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class UITextInteraction;

@protocol UITextInteractionDelegate <NSObject>

@optional
- (void)interactionDidEnd:(UITextInteraction *)arg1;
- (void)interactionWillBegin:(UITextInteraction *)arg1;
- (_Bool)interactionShouldBegin:(UITextInteraction *)arg1 atPoint:(struct CGPoint)arg2;
@end
