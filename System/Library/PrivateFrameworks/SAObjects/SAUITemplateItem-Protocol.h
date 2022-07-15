//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, SAUITemplateEdgeInsets;

@protocol SAUITemplateItem <SAAceSerializable>
@property(nonatomic) _Bool shouldBeOffscreenInPartial;
@property(copy, nonatomic) NSArray *presentationOptions;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property(nonatomic) _Bool hasPriorityLayout;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property(copy, nonatomic) NSArray *communicationOptions;
@end
