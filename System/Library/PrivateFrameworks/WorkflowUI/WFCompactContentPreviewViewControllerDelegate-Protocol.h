//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFCompactContentPreviewViewController;

@protocol WFCompactContentPreviewViewControllerDelegate <NSObject>
- (void)previewViewControllerDidInvalidateSize:(WFCompactContentPreviewViewController *)arg1;
- (double)targetHeightForAnimatingPreviewViewController:(WFCompactContentPreviewViewController *)arg1 toProposedHeight:(double)arg2;
@end

