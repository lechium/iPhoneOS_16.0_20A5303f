//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting-Protocol.h>

@class UIDropInteraction;
@protocol UITextDropDelegate;

@protocol UITextDroppable <UITextInput, UITextPasteConfigurationSupporting>
@property(readonly, nonatomic, getter=isTextDropActive) _Bool textDropActive;
@property(readonly, nonatomic) UIDropInteraction *textDropInteraction;
@property(nonatomic) __weak id <UITextDropDelegate> textDropDelegate;
@end

