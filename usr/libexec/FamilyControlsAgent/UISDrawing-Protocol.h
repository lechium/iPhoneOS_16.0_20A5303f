//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol UISDrawing <NSObject>
- (void)drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;
@property(nonatomic, readonly) struct CGSize drawingSize;

@optional
@property(nonatomic, readonly) struct CGRect alignmentRect;
@end
