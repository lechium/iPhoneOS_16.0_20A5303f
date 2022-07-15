//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVEditView;

@protocol AVEditViewDelegate <NSObject>
- (void)editViewDidFinishRequestingThumbnails:(AVEditView *)arg1;
- (void)editViewWillBeginRequestingThumbnails:(AVEditView *)arg1;
- (void)editView:(AVEditView *)arg1 trimEndTimeDidChange:(double)arg2;
- (void)editView:(AVEditView *)arg1 trimStartTimeDidChange:(double)arg2;
- (void)editView:(AVEditView *)arg1 currentTimeDidChange:(double)arg2;
- (void)editViewDidEndScrubbing:(AVEditView *)arg1;
- (void)editViewDidBeginScrubbing:(AVEditView *)arg1;
@end
