//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITargetedDragPreview, UITextPosition, UITextRange, UIView;

@protocol UITextDraggableGeometry <NSObject>
@property(nonatomic) long long geometryOptions;
- (UITargetedDragPreview * (^)(UIView *, _Bool))targetedPreviewProviderForTextInRange:(UITextRange *)arg1 dismissing:(_Bool)arg2;
- (UITargetedDragPreview *)previewForDroppingTextInRange:(UITextRange *)arg1 toPosition:(UITextPosition *)arg2 inContainerView:(UIView *)arg3;
- (NSArray *)draggableObjectsForTextRange:(UITextRange *)arg1;
- (UITextRange *)textRangeForAttachmentInTextRange:(UITextRange *)arg1 atPoint:(struct CGPoint)arg2;
- (NSArray *)textRangesForAttachmentsInTextRange:(UITextRange *)arg1;
@end
