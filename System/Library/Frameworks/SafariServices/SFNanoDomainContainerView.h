//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class _SFBrowserView;

__attribute__((visibility("hidden")))
@interface SFNanoDomainContainerView : UIView
{
    double _maximumHeight;	// 8 = 0x8
    _SFBrowserView *_browserView;	// 16 = 0x10
    CDUnknownBlockType _platterTapAction;	// 24 = 0x18
}

+ (double)defaultHeightInsideQuickboard;	// IMP=0x00400000000f960e
+ (double)defaultHeight;	// IMP=0x00400000000f9605
+ (double)defaultTopOffset;	// IMP=0x00400000000f95fc
- (void).cxx_destruct;	// IMP=0x00000000000f9690
@property(copy, nonatomic) CDUnknownBlockType platterTapAction; // @synthesize platterTapAction=_platterTapAction;
@property(nonatomic) __weak _SFBrowserView *browserView; // @synthesize browserView=_browserView;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
- (void)updateWithDomain:(id)arg1 isSecure:(_Bool)arg2 showsNotSecureAnnotation:(_Bool)arg3;	// IMP=0x00000000000f9617

@end

