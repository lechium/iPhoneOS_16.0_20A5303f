//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _MPDownloadProgressRingView : UIView
{
    double _progress;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0060000000163dcc
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateShapePath;	// IMP=0x0000000000163b7b
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000163ab2
- (void)tintColorDidChange;	// IMP=0x0000000000163a03
- (void)layoutSubviews;	// IMP=0x00000000001639c2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000163868

@end

