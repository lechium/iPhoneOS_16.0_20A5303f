//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class DRTouchTrackingWindow, NSString;

@interface DRMainSceneDelegate : UIResponder
{
    DRTouchTrackingWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001f395
@property(retain, nonatomic) DRTouchTrackingWindow *window; // @synthesize window=_window;
- (void)viewController:(id)arg1 requestImagesForSessionID:(unsigned int)arg2 client:(id)arg3 itemIndexes:(id)arg4;	// IMP=0x001000000001f2de
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000001f13b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
