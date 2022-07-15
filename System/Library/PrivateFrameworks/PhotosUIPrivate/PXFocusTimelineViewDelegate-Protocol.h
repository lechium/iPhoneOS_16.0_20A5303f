//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PXFocusTimelineAction, PXFocusTimelineView;

@protocol PXFocusTimelineViewDelegate <NSObject>
- (NSString *)axDescriptionForFocusEventATime:(CDStruct_1b6d18a9)arg1;
- (void)hideFocusTimelineActions:(PXFocusTimelineView *)arg1;
- (void)focusTimeline:(PXFocusTimelineView *)arg1 updateTrackingProgressShouldStop:(_Bool *)arg2;
- (void)focusTimeline:(PXFocusTimelineView *)arg1 presentAction:(PXFocusTimelineAction *)arg2 locationInTimeline:(struct CGPoint)arg3;
@end
