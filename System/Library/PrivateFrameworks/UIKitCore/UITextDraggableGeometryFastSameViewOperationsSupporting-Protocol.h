//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITextDraggableGeometrySameViewDropOperationResult;
@protocol UITextDraggableGeometrySameViewDropOperation;

@protocol UITextDraggableGeometryFastSameViewOperationsSupporting <NSObject>
- (UITextDraggableGeometrySameViewDropOperationResult *)performSameViewDropOperation:(id <UITextDraggableGeometrySameViewDropOperation>)arg1;
- (NSArray *)attributedStringsForTextRanges:(NSArray *)arg1;
@end

